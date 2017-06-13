/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2010-2017 by Michael Kohn
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>

#include "asm/arc.h"
#include "asm/common.h"
#include "common/assembler.h"
#include "common/tokens.h"
#include "common/eval_expression.h"
#include "table/arc.h"

#define MAX_OPERANDS 3

enum
{
  OPERAND_REG,
  OPERAND_NUMBER,
  OPERAND_ADDRESS,
};

struct _operand
{
  int value;
  int type;
};

static int get_register_arc(char *token)
{
  if (token[0] == 'r' || token[1] == 'R')
  { 
    const char *s = token + 1;
    int n = 0, count = 0;
    
    while(*s != 0)
    { 
      if (*s < '0' || *s > '9') { return -1; }
      n = (n * 10) + (*s - '0');
      count++;
      
      // Disallow leading 0's on registers 
      if (n == 0 && count >1) { return -1; }
      
      s++;
    }
    
    // This token was just r or R.
    if (count == 0) { return -1; }

    return n;
  }

  if (strcasecmp(token, "gp") == 0) { return 26; }
  if (strcasecmp(token, "fp") == 0) { return 27; }
  if (strcasecmp(token, "sp") == 0) { return 28; }
  if (strcasecmp(token, "ilink1") == 0) { return 29; }
  if (strcasecmp(token, "ilink2") == 0) { return 30; }
  if (strcasecmp(token, "blink") == 0) { return 31; }
  if (strcasecmp(token, "lp_count") == 0) { return 60; }
  if (strcasecmp(token, "pcl") == 0) { return 63; }

  return -1;
}

static int map_16bit_reg(int r32)
{
  // Page 40 of the ARCompact Instruction Set Architecture... looks
  // like for 16 bit instructions, only 8 of the ARC's registers can
  // be used and they aren't in numerical order.
  if (r32 >=0 && r32 <= 3) { return r32; }
  if (r32 >=12 && r32 <= 15) { return r32 - 12; }

  return -1;
}

int parse_instruction_arc(struct _asm_context *asm_context, char *instr)
{
  char instr_case_mem[TOKENLEN];
  char *instr_case = instr_case_mem;
  char token[TOKENLEN];
  struct _operand operands[MAX_OPERANDS];
  int operand_count = 0;
  int token_type;
  int num, n;
  uint16_t opcode;
  int found = 0;
  int f_flag = 0;

  lower_copy(instr_case, instr);
  memset(&operands, 0, sizeof(operands));

  while(1)
  {
    token_type = tokens_get(asm_context, token, TOKENLEN);

    if (token_type == TOKEN_EOL || token_type == TOKEN_EOF)
    {
      if (operand_count != 0)
      {
        print_error_unexp(token, asm_context);
        return -1;
      }
      break;
    }

    num = get_register_arc(token);

    if (num != -1)
    {
      operands[operand_count].value = num;
      operands[operand_count].type = OPERAND_REG;
    }
      else
    if (IS_TOKEN(token,'#'))
    {
      if (eval_expression(asm_context, &num) != 0)
      {
        if (asm_context->pass == 1)
        {
          eat_operand(asm_context);
          num = 0;
        }
          else
        {
          print_error_illegal_expression(instr, asm_context);
          return -1;
        }
      }

      operands[operand_count].type = OPERAND_NUMBER;
      operands[operand_count].value = num;
    }
      else
    {
      tokens_push(asm_context, token, token_type);

      if (eval_expression(asm_context, &num) != 0)
      {
        if (asm_context->pass == 1)
        {
          eat_operand(asm_context);
          num = 0;
        }
          else
        {
          print_error_illegal_expression(instr, asm_context);
          return -1;
        }
      }

      operands[operand_count].type = OPERAND_ADDRESS;
      operands[operand_count].value = num;
    }

    operand_count++;
    token_type = tokens_get(asm_context, token, TOKENLEN);

    if (token_type == TOKEN_EOL) { break; }

    if (IS_NOT_TOKEN(token, ',') || operand_count == MAX_OPERANDS)
    {
      print_error_unexp(token, asm_context);
      return -1;
    }
  }

  n = 0;
  while(table_arc[n].instr != NULL)
  {
    if (strcmp(table_arc[n].instr, instr_case) == 0)
    {
      found = 1;

      switch(table_arc[n].type)
      {
        case OP_NONE:
        {
          if (operand_count == 0)
          {
            add_bin32(asm_context, table_arc[n].opcode, IS_OPCODE);
            return 4;
          }

          break;
        }
        case OP_B_C:
        {
          if (operand_count == 2 &&
              operands[0].type == OPERAND_REG &&
              operands[1].type == OPERAND_REG)
          {
            opcode = table_arc[n].opcode |
                   ((operands[0].value & 0x7) << 24) |
                  (((operands[0].value >> 3) & 0x7) << 12) |
                    (operands[1].value << 6) |
                    (f_flag << 15);

            add_bin32(asm_context, opcode, IS_OPCODE);

            return 4;
          }

          break;
        }
        case OP_B_U6:
        {
          if (operand_count == 2 &&
              operands[0].type == OPERAND_REG &&
              operands[1].type == OPERAND_NUMBER &&
              operands[1].value >= 0 && operands[1].value <= 63)
          {
            opcode = table_arc[n].opcode |
                   ((operands[0].value & 0x7) << 24) |
                  (((operands[0].value >> 3) & 0x7) << 12) |
                    (operands[1].value << 6) |
                    (f_flag << 15);

            add_bin32(asm_context, opcode, IS_OPCODE);

            return 4;
          }

          break;
        }
        case OP_B_LIMM:
        {
          if (operand_count == 2 &&
              operands[0].type == OPERAND_REG &&
              operands[1].type == OPERAND_NUMBER)
          {
            opcode = table_arc[n].opcode |
                   ((operands[0].value & 0x7) << 24) |
                  (((operands[0].value >> 3) & 0x7) << 12) |
                    (f_flag << 15);

            add_bin32(asm_context, opcode, IS_OPCODE);

            return 4;
          }

          break;
        }
        default:
          break;
      }
    }

    n++;
  }

  n = 0;
  while(table_arc16[n].instr != NULL)
  {
    if (strcmp(table_arc16[n].instr, instr_case) == 0)
    {
      found = 1;

      switch(table_arc[n].type)
      {
        case OP_NONE:
        {
          if (operand_count == 0)
          {
            add_bin16(asm_context, table_arc16[n].opcode, IS_OPCODE);
            return 2;
          }

          break;
        }
        case OP_B_C:
        {
          if (operand_count == 2 &&
              operands[0].type == OPERAND_REG &&
              operands[1].type == OPERAND_REG)
          {
            int b = map_16bit_reg(operands[0].value);
            int c = map_16bit_reg(operands[1].value);

            if (b < 0 || c < 0) { break; }

            opcode = table_arc[n].opcode |
                    (operands[0].value << 8) |
                    (operands[1].value << 5);

            add_bin16(asm_context, opcode, IS_OPCODE);

            return 2;
          }

          break;
        }
        default:
          break;
      }
    }

    n++;
  }

  if (found == 1)
  {
    print_error_illegal_operands(instr, asm_context);
    return -1;
  }
    else
  {
    print_error_unknown_instr(instr, asm_context);
  }

  return -1;
}


