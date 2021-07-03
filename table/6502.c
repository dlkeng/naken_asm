/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2010-2019 by Michael Kohn, Joe Davisson
 *
 * 6502 by Joe Davisson
 *
 */

#include "table/6502.h"

struct _table_6502 table_6502[] =
{
  { "adc", M65XX_ADC, OP_NONE },
  { "and", M65XX_AND, OP_NONE },
  { "asl", M65XX_ASL, OP_NONE },
  { "bbr0", M65XX_BBR0, OP_ADDRESS8_RELATIVE },
  { "bbr1", M65XX_BBR1, OP_ADDRESS8_RELATIVE },
  { "bbr2", M65XX_BBR2, OP_ADDRESS8_RELATIVE },
  { "bbr3", M65XX_BBR3, OP_ADDRESS8_RELATIVE },
  { "bbr4", M65XX_BBR4, OP_ADDRESS8_RELATIVE },
  { "bbr5", M65XX_BBR5, OP_ADDRESS8_RELATIVE },
  { "bbr6", M65XX_BBR6, OP_ADDRESS8_RELATIVE },
  { "bbr7", M65XX_BBR7, OP_ADDRESS8_RELATIVE },
  { "bbs0", M65XX_BBS0, OP_ADDRESS8_RELATIVE },
  { "bbs1", M65XX_BBS1, OP_ADDRESS8_RELATIVE },
  { "bbs2", M65XX_BBS2, OP_ADDRESS8_RELATIVE },
  { "bbs3", M65XX_BBS3, OP_ADDRESS8_RELATIVE },
  { "bbs4", M65XX_BBS4, OP_ADDRESS8_RELATIVE },
  { "bbs5", M65XX_BBS5, OP_ADDRESS8_RELATIVE },
  { "bbs6", M65XX_BBS6, OP_ADDRESS8_RELATIVE },
  { "bbs7", M65XX_BBS7, OP_ADDRESS8_RELATIVE },
  { "bcc", M65XX_BCC, OP_RELATIVE },
  { "bcs", M65XX_BCS, OP_RELATIVE },
  { "beq", M65XX_BEQ, OP_RELATIVE },
  { "bit", M65XX_BIT, OP_NONE },
  { "bmi", M65XX_BMI, OP_RELATIVE },
  { "bne", M65XX_BNE, OP_RELATIVE },
  { "bpl", M65XX_BPL, OP_RELATIVE },
  { "brk", M65XX_BRK, OP_NONE },
  { "bvc", M65XX_BVC, OP_RELATIVE },
  { "bvs", M65XX_BVS, OP_RELATIVE },
  { "bra", M65XX_BRA, OP_RELATIVE },
  { "clc", M65XX_CLC, OP_NONE },
  { "cld", M65XX_CLD, OP_NONE },
  { "cli", M65XX_CLI, OP_NONE },
  { "clv", M65XX_CLV, OP_NONE },
  { "cmp", M65XX_CMP, OP_NONE },
  { "cpx", M65XX_CPX, OP_NONE },
  { "cpy", M65XX_CPY, OP_NONE },
  { "dec", M65XX_DEC, OP_NONE },
  { "dex", M65XX_DEX, OP_NONE },
  { "dey", M65XX_DEY, OP_NONE },
  { "eor", M65XX_EOR, OP_NONE },
  { "inc", M65XX_INC, OP_NONE },
  { "inx", M65XX_INX, OP_NONE },
  { "iny", M65XX_INY, OP_NONE },
  { "jmp", M65XX_JMP, OP_NONE },
  { "jsr", M65XX_JSR, OP_NONE },
  { "lda", M65XX_LDA, OP_NONE },
  { "ldx", M65XX_LDX, OP_NONE },
  { "ldy", M65XX_LDY, OP_NONE },
  { "lsr", M65XX_LSR, OP_NONE },
  { "nop", M65XX_NOP, OP_NONE },
  { "ora", M65XX_ORA, OP_NONE },
  { "pha", M65XX_PHA, OP_NONE },
  { "php", M65XX_PHP, OP_NONE },
  { "phx", M65XX_PHX, OP_NONE },
  { "phy", M65XX_PHY, OP_NONE },
  { "pla", M65XX_PLA, OP_NONE },
  { "plp", M65XX_PLP, OP_NONE },
  { "plx", M65XX_PLX, OP_NONE },
  { "ply", M65XX_PLY, OP_NONE },
  { "rmb0", M65XX_RMB0, OP_ADDRESS8 },
  { "rmb1", M65XX_RMB1, OP_ADDRESS8 },
  { "rmb2", M65XX_RMB2, OP_ADDRESS8 },
  { "rmb3", M65XX_RMB3, OP_ADDRESS8 },
  { "rmb4", M65XX_RMB4, OP_ADDRESS8 },
  { "rmb5", M65XX_RMB5, OP_ADDRESS8 },
  { "rmb6", M65XX_RMB6, OP_ADDRESS8 },
  { "rmb7", M65XX_RMB7, OP_ADDRESS8 },
  { "rol", M65XX_ROL, OP_NONE },
  { "ror", M65XX_ROR, OP_NONE },
  { "rti", M65XX_RTI, OP_NONE },
  { "rts", M65XX_RTS, OP_NONE },
  { "sbc", M65XX_SBC, OP_NONE },
  { "sec", M65XX_SEC, OP_NONE },
  { "sed", M65XX_SED, OP_NONE },
  { "sei", M65XX_SEI, OP_NONE },
  { "smb0", M65XX_SMB0, OP_ADDRESS8 },
  { "smb1", M65XX_SMB1, OP_ADDRESS8 },
  { "smb2", M65XX_SMB2, OP_ADDRESS8 },
  { "smb3", M65XX_SMB3, OP_ADDRESS8 },
  { "smb4", M65XX_SMB4, OP_ADDRESS8 },
  { "smb5", M65XX_SMB5, OP_ADDRESS8 },
  { "smb6", M65XX_SMB6, OP_ADDRESS8 },
  { "smb7", M65XX_SMB7, OP_ADDRESS8 },
  { "sta", M65XX_STA, OP_NONE },
  { "stp", M65XX_STP, OP_NONE },
  { "stx", M65XX_STX, OP_NONE },
  { "sty", M65XX_STY, OP_NONE },
  { "stz", M65XX_STZ, OP_NONE },
  { "tax", M65XX_TAX, OP_NONE },
  { "tay", M65XX_TAY, OP_NONE },
  { "trb", M65XX_TRB, OP_NONE },
  { "tsb", M65XX_TSB, OP_NONE },
  { "tsx", M65XX_TSX, OP_NONE },
  { "txa", M65XX_TXA, OP_NONE },
  { "txs", M65XX_TXS, OP_NONE },
  { "tya", M65XX_TYA, OP_NONE },
  { "wai", M65XX_WAI, OP_NONE },
};

struct _table_6502_opcodes table_6502_opcodes[] =
{
  /* 0x00 */ { M65XX_BRK, OP_NONE, 7, 7 },
  /* 0x01 */ { M65XX_ORA, OP_X_INDIRECT8, 6, 6 },
  /* 0x02 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x03 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x04 */ { M65XX_TSB, OP_ADDRESS8, 0, 0 },
  /* 0x05 */ { M65XX_ORA, OP_ADDRESS8, 3, 3 },
  /* 0x06 */ { M65XX_ASL, OP_ADDRESS8, 5, 5 },
  /* 0x07 */ { M65XX_RMB0, OP_ADDRESS8, 0, 0 },
  /* 0x08 */ { M65XX_PHP, OP_NONE, 3, 3 },
  /* 0x09 */ { M65XX_ORA, OP_IMMEDIATE, 2, 2 },
  /* 0x0A */ { M65XX_ASL, OP_NONE, 2, 2 },
  /* 0x0B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x0C */ { M65XX_TSB, OP_ADDRESS16, 0, 0 },
  /* 0x0D */ { M65XX_ORA, OP_ADDRESS16, 4, 4 },
  /* 0x0E */ { M65XX_ASL, OP_ADDRESS16, 6, 6 },
  /* 0x0F */ { M65XX_BBR0, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0x10 */ { M65XX_BPL, OP_RELATIVE, 2, 3 },
  /* 0x11 */ { M65XX_ORA, OP_INDIRECT8_Y, 5, 6 },
  /* 0x12 */ { M65XX_ORA, OP_INDIRECT8, 0, 0 },
  /* 0x13 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x14 */ { M65XX_TRB, OP_ADDRESS8, 0, 0 },
  /* 0x15 */ { M65XX_ORA, OP_INDEXED8_X, 4, 4 },
  /* 0x16 */ { M65XX_ASL, OP_INDEXED8_X, 6, 6 },
  /* 0x17 */ { M65XX_RMB1, OP_ADDRESS8, 0, 0 },
  /* 0x18 */ { M65XX_CLC, OP_NONE, 2, 2 },
  /* 0x19 */ { M65XX_ORA, OP_INDEXED16_Y, 4, 5 },
  /* 0x1A */ { M65XX_INC, OP_NONE, 0, 0 },
  /* 0x1B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x1C */ { M65XX_TRB, OP_ADDRESS16, 0, 0 },
  /* 0x1D */ { M65XX_ORA, OP_INDEXED16_X, 4, 5 },
  /* 0x1E */ { M65XX_ASL, OP_INDEXED16_X, 7, 7 },
  /* 0x1F */ { M65XX_BBR1, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0x20 */ { M65XX_JSR, OP_ADDRESS16, 6, 6 },
  /* 0x21 */ { M65XX_AND, OP_X_INDIRECT8, 6, 6 },
  /* 0x22 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x23 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x24 */ { M65XX_BIT, OP_ADDRESS8, 3, 3 },
  /* 0x25 */ { M65XX_AND, OP_ADDRESS8, 3, 3 },
  /* 0x26 */ { M65XX_ROL, OP_ADDRESS8, 5, 5 },
  /* 0x27 */ { M65XX_RMB2, OP_ADDRESS8, 0, 0 },
  /* 0x28 */ { M65XX_PLP, OP_NONE, 4, 4 },
  /* 0x29 */ { M65XX_AND, OP_IMMEDIATE, 2, 2 },
  /* 0x2A */ { M65XX_ROL, OP_NONE, 2, 2 },
  /* 0x2B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x2C */ { M65XX_BIT, OP_ADDRESS16, 4, 4 },
  /* 0x2D */ { M65XX_AND, OP_ADDRESS16, 4, 4 },
  /* 0x2E */ { M65XX_ROL, OP_ADDRESS16, 6, 6 },
  /* 0x2F */ { M65XX_BBR2, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0x30 */ { M65XX_BMI, OP_RELATIVE, 2, 3 },
  /* 0x31 */ { M65XX_AND, OP_INDIRECT8_Y, 5, 6 },
  /* 0x32 */ { M65XX_AND, OP_INDIRECT8, 0, 0 },
  /* 0x33 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x34 */ { M65XX_BIT, OP_INDEXED8_X, 0, 0 },
  /* 0x35 */ { M65XX_AND, OP_INDEXED8_X, 4, 4 },
  /* 0x36 */ { M65XX_ROL, OP_INDEXED8_X, 6, 6 },
  /* 0x37 */ { M65XX_RMB3, OP_ADDRESS8, 0, 0 },
  /* 0x38 */ { M65XX_SEC, OP_NONE, 2, 2 },
  /* 0x39 */ { M65XX_AND, OP_INDEXED16_Y, 4, 5 },
  /* 0x3A */ { M65XX_DEC, OP_NONE, 0, 0 },
  /* 0x3B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x3C */ { M65XX_BIT, OP_INDEXED16_X, 0, 0 },
  /* 0x3D */ { M65XX_AND, OP_INDEXED16_X, 0, 0 },
  /* 0x3E */ { M65XX_ROL, OP_INDEXED16_X, 7, 7 },
  /* 0x3F */ { M65XX_BBR3, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0x40 */ { M65XX_RTI, OP_NONE, 6, 6 },
  /* 0x41 */ { M65XX_EOR, OP_X_INDIRECT8, 6, 6 },
  /* 0x42 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x43 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x44 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x45 */ { M65XX_EOR, OP_ADDRESS8, 3, 3 },
  /* 0x46 */ { M65XX_LSR, OP_ADDRESS8, 5, 5 },
  /* 0x47 */ { M65XX_RMB4, OP_ADDRESS8, 0, 0 },
  /* 0x48 */ { M65XX_PHA, OP_NONE, 3, 3 },
  /* 0x49 */ { M65XX_EOR, OP_IMMEDIATE, 2, 2 },
  /* 0x4A */ { M65XX_LSR, OP_NONE, 2, 2 },
  /* 0x4B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x4C */ { M65XX_JMP, OP_ADDRESS16, 3, 3 },
  /* 0x4D */ { M65XX_EOR, OP_ADDRESS16, 4, 4 },
  /* 0x4E */ { M65XX_LSR, OP_ADDRESS16, 6, 6 },
  /* 0x4F */ { M65XX_BBR4, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0x50 */ { M65XX_BVC, OP_RELATIVE, 2, 3 },
  /* 0x51 */ { M65XX_EOR, OP_INDIRECT8_Y, 5, 6 },
  /* 0x52 */ { M65XX_EOR, OP_INDIRECT8, 0, 0 },
  /* 0x53 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x54 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x55 */ { M65XX_EOR, OP_INDEXED8_X, 4, 4 },
  /* 0x56 */ { M65XX_LSR, OP_INDEXED8_X, 6, 6 },
  /* 0x57 */ { M65XX_RMB5, OP_ADDRESS8, 0, 0 },
  /* 0x58 */ { M65XX_CLI, OP_NONE, 2, 2 },
  /* 0x59 */ { M65XX_EOR, OP_INDEXED16_Y, 4, 5 },
  /* 0x5A */ { M65XX_PHY, OP_NONE, 0, 0 },
  /* 0x5B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x5C */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x5D */ { M65XX_EOR, OP_INDEXED16_X, 4, 5 },
  /* 0x5E */ { M65XX_LSR, OP_INDEXED16_X, 7, 7 },
  /* 0x5F */ { M65XX_BBR5, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0x60 */ { M65XX_RTS, OP_NONE, 6, 6 },
  /* 0x61 */ { M65XX_ADC, OP_X_INDIRECT8, 6, 6 },
  /* 0x62 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x63 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x64 */ { M65XX_STZ, OP_ADDRESS8, 0, 0 },
  /* 0x65 */ { M65XX_ADC, OP_ADDRESS8, 3, 3 },
  /* 0x66 */ { M65XX_ROR, OP_ADDRESS8, 5, 5 },
  /* 0x67 */ { M65XX_RMB6, OP_ADDRESS8, 0, 0 },
  /* 0x68 */ { M65XX_PLA, OP_NONE, 4, 4 },
  /* 0x69 */ { M65XX_ADC, OP_IMMEDIATE, 2, 2 },
  /* 0x6A */ { M65XX_ROR, OP_NONE, 2, 2 },
  /* 0x6B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x6C */ { M65XX_JMP, OP_INDIRECT16, 5, 5 },
  /* 0x6D */ { M65XX_ADC, OP_ADDRESS16, 4, 4 },
  /* 0x6E */ { M65XX_ROR, OP_ADDRESS16, 6, 6 },
  /* 0x6F */ { M65XX_BBR6, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0x70 */ { M65XX_BVS, OP_RELATIVE, 2, 3 },
  /* 0x71 */ { M65XX_ADC, OP_INDIRECT8_Y, 5, 6 },
  /* 0x72 */ { M65XX_ADC, OP_INDIRECT8, 0, 0 },
  /* 0x73 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x74 */ { M65XX_STZ, OP_INDEXED8_X, 0, 0 },
  /* 0x75 */ { M65XX_ADC, OP_INDEXED8_X, 4, 4 },
  /* 0x76 */ { M65XX_ROR, OP_INDEXED8_X, 6, 6 },
  /* 0x77 */ { M65XX_RMB7, OP_ADDRESS8, 0, 0 },
  /* 0x78 */ { M65XX_SEI, OP_NONE, 2, 2 },
  /* 0x79 */ { M65XX_ADC, OP_INDEXED16_Y, 4, 5 },
  /* 0x7A */ { M65XX_PLY, OP_NONE, 0, 0 },
  /* 0x7B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x7C */ { M65XX_JMP, OP_X_INDIRECT16, 0, 0 },
  /* 0x7D */ { M65XX_ADC, OP_INDEXED16_X, 4, 5 },
  /* 0x7E */ { M65XX_ROR, OP_INDEXED16_X, 7, 7 },
  /* 0x7F */ { M65XX_BBR7, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0x80 */ { M65XX_BRA, OP_RELATIVE, 0, 0 },
  /* 0x81 */ { M65XX_STA, OP_X_INDIRECT8, 6, 6 },
  /* 0x82 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x83 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x84 */ { M65XX_STY, OP_ADDRESS8, 3, 3 },
  /* 0x85 */ { M65XX_STA, OP_ADDRESS8, 3, 3 },
  /* 0x86 */ { M65XX_STX, OP_ADDRESS8, 3, 3 },
  /* 0x87 */ { M65XX_SMB0, OP_ADDRESS8, 0, 0 },
  /* 0x88 */ { M65XX_DEY, OP_NONE, 2, 2 },
  /* 0x89 */ { M65XX_BIT, OP_IMMEDIATE, 0, 0 },
  /* 0x8A */ { M65XX_TXA, OP_NONE, 2, 2 },
  /* 0x8B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x8C */ { M65XX_STY, OP_ADDRESS16, 4, 4 },
  /* 0x8D */ { M65XX_STA, OP_ADDRESS16, 4, 4 },
  /* 0x8E */ { M65XX_STX, OP_ADDRESS16, 4, 4 },
  /* 0x8F */ { M65XX_BBS0, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0x90 */ { M65XX_BCC, OP_RELATIVE, 2, 3 },
  /* 0x91 */ { M65XX_STA, OP_INDIRECT8_Y, 6, 6 },
  /* 0x92 */ { M65XX_STA, OP_INDIRECT8, 0, 0 },
  /* 0x93 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x94 */ { M65XX_STY, OP_INDEXED8_X, 4, 4 },
  /* 0x95 */ { M65XX_STA, OP_INDEXED8_X, 4, 4 },
  /* 0x96 */ { M65XX_STX, OP_INDEXED8_Y, 4, 4 },
  /* 0x97 */ { M65XX_SMB1, OP_ADDRESS8, 0, 0 },
  /* 0x98 */ { M65XX_TYA, OP_NONE, 2, 2 },
  /* 0x99 */ { M65XX_STA, OP_INDEXED16_Y, 5, 5 },
  /* 0x9A */ { M65XX_TXS, OP_NONE, 2, 2 },
  /* 0x9B */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0x9C */ { M65XX_STZ, OP_ADDRESS16, 0, 0 },
  /* 0x9D */ { M65XX_STA, OP_INDEXED16_X, 5, 5 },
  /* 0x9E */ { M65XX_STZ, OP_INDEXED16_X, 0, 0 },
  /* 0x9F */ { M65XX_BBS1, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0xA0 */ { M65XX_LDY, OP_IMMEDIATE, 2, 2 },
  /* 0xA1 */ { M65XX_LDA, OP_X_INDIRECT8, 6, 6 },
  /* 0xA2 */ { M65XX_LDX, OP_IMMEDIATE, 2, 2 },
  /* 0xA3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xA4 */ { M65XX_LDY, OP_ADDRESS8, 3, 3 },
  /* 0xA5 */ { M65XX_LDA, OP_ADDRESS8, 3, 3 },
  /* 0xA6 */ { M65XX_LDX, OP_ADDRESS8, 3, 3 },
  /* 0xA7 */ { M65XX_SMB2, OP_ADDRESS8, 0, 0 },
  /* 0xA8 */ { M65XX_TAY, OP_NONE, 2, 2 },
  /* 0xA9 */ { M65XX_LDA, OP_IMMEDIATE, 2, 2 },
  /* 0xAA */ { M65XX_TAX, OP_NONE, 2, 2 },
  /* 0xAB */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xAC */ { M65XX_LDY, OP_ADDRESS16, 4, 4 },
  /* 0xAD */ { M65XX_LDA, OP_ADDRESS16, 4, 4 },
  /* 0xAE */ { M65XX_LDX, OP_ADDRESS16, 4, 4 },
  /* 0xAF */ { M65XX_BBS2, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0xB0 */ { M65XX_BCS, OP_RELATIVE, 2, 3 },
  /* 0xB1 */ { M65XX_LDA, OP_INDIRECT8_Y, 5, 6 },
  /* 0xB2 */ { M65XX_LDA, OP_INDIRECT8, 0, 0 },
  /* 0xB3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xB4 */ { M65XX_LDY, OP_INDEXED8_X, 4, 4 },
  /* 0xB5 */ { M65XX_LDA, OP_INDEXED8_X, 4, 4 },
  /* 0xB6 */ { M65XX_LDX, OP_INDEXED8_Y, 4, 4 },
  /* 0xB7 */ { M65XX_SMB3, OP_ADDRESS8, 0, 0 },
  /* 0xB8 */ { M65XX_CLV, OP_NONE, 2, 2 },
  /* 0xB9 */ { M65XX_LDA, OP_INDEXED16_Y, 4, 5 },
  /* 0xBA */ { M65XX_TSX, OP_NONE, 2, 2 },
  /* 0xBB */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xBC */ { M65XX_LDY, OP_INDEXED16_X, 4, 5 },
  /* 0xBD */ { M65XX_LDA, OP_INDEXED16_X, 4, 5 },
  /* 0xBE */ { M65XX_LDX, OP_INDEXED16_Y, 4, 5 },
  /* 0xBF */ { M65XX_BBS3, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0xC0 */ { M65XX_CPY, OP_IMMEDIATE, 2, 2 },
  /* 0xC1 */ { M65XX_CMP, OP_X_INDIRECT8, 6, 6 },
  /* 0xC2 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xC3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xC4 */ { M65XX_CPY, OP_ADDRESS8, 3, 3 },
  /* 0xC5 */ { M65XX_CMP, OP_ADDRESS8, 3, 3 },
  /* 0xC6 */ { M65XX_DEC, OP_ADDRESS8, 5, 5 },
  /* 0xC7 */ { M65XX_SMB4, OP_ADDRESS8, 0, 0 },
  /* 0xC8 */ { M65XX_INY, OP_NONE, 2, 2 },
  /* 0xC9 */ { M65XX_CMP, OP_IMMEDIATE, 2, 2 },
  /* 0xCA */ { M65XX_DEX, OP_NONE, 2, 2 },
  /* 0xCB */ { M65XX_WAI, OP_NONE, 0, 0 },
  /* 0xCC */ { M65XX_CPY, OP_ADDRESS16, 4, 4 },
  /* 0xCD */ { M65XX_CMP, OP_ADDRESS16, 4, 4 },
  /* 0xCE */ { M65XX_DEC, OP_ADDRESS16, 3, 3 },
  /* 0xCF */ { M65XX_BBS4, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0xD0 */ { M65XX_BNE, OP_RELATIVE, 2, 3 },
  /* 0xD1 */ { M65XX_CMP, OP_INDIRECT8_Y, 5, 6 },
  /* 0xD2 */ { M65XX_CMP, OP_INDIRECT8, 0, 0 },
  /* 0xD3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xD4 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xD5 */ { M65XX_CMP, OP_INDEXED8_X, 4, 4 },
  /* 0xD6 */ { M65XX_DEC, OP_INDEXED8_X, 6, 6 },
  /* 0xD7 */ { M65XX_SMB5, OP_ADDRESS8, 0, 0 },
  /* 0xD8 */ { M65XX_CLD, OP_NONE, 2, 2 },
  /* 0xD9 */ { M65XX_CMP, OP_INDEXED16_Y, 4, 5 },
  /* 0xDA */ { M65XX_PHX, OP_NONE, 0, 0 },
  /* 0xDB */ { M65XX_STP, OP_NONE, 0, 0 },
  /* 0xDC */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xDD */ { M65XX_CMP, OP_INDEXED16_X, 4, 5 },
  /* 0xDE */ { M65XX_DEC, OP_INDEXED16_X, 7, 7 },
  /* 0xDF */ { M65XX_BBS5, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0xE0 */ { M65XX_CPX, OP_IMMEDIATE, 2, 2 },
  /* 0xE1 */ { M65XX_SBC, OP_X_INDIRECT8, 6, 6 },
  /* 0xE2 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xE3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xE4 */ { M65XX_CPX, OP_ADDRESS8, 3, 3 },
  /* 0xE5 */ { M65XX_SBC, OP_ADDRESS8, 3, 3 },
  /* 0xE6 */ { M65XX_INC, OP_ADDRESS8, 5, 5 },
  /* 0xE7 */ { M65XX_SMB6, OP_ADDRESS8, 0, 0 },
  /* 0xE8 */ { M65XX_INX, OP_NONE, 2, 2 },
  /* 0xE9 */ { M65XX_SBC, OP_IMMEDIATE, 2, 2 },
  /* 0xEA */ { M65XX_NOP, OP_NONE, 2, 2 },
  /* 0xEB */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xEC */ { M65XX_CPX, OP_ADDRESS16, 4, 4 },
  /* 0xED */ { M65XX_SBC, OP_ADDRESS16, 4, 4 },
  /* 0xEE */ { M65XX_INC, OP_ADDRESS16, 6, 6 },
  /* 0xEF */ { M65XX_BBS6, OP_ADDRESS8_RELATIVE, 0, 0 },

  /* 0xF0 */ { M65XX_BEQ, OP_RELATIVE, 2, 3 },
  /* 0xF1 */ { M65XX_SBC, OP_INDIRECT8_Y, 5, 6 },
  /* 0xF2 */ { M65XX_SBC, OP_INDIRECT8, 0, 0 },
  /* 0xF3 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xF4 */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xF5 */ { M65XX_SBC, OP_INDEXED8_X, 4, 4 },
  /* 0xF6 */ { M65XX_INC, OP_INDEXED8_X, 6, 6 },
  /* 0xF7 */ { M65XX_SMB7, OP_ADDRESS8, 0, 0 },
  /* 0xF8 */ { M65XX_SED, OP_NONE, 2, 2 },
  /* 0xF9 */ { M65XX_SBC, OP_INDEXED16_Y, 4, 5 },
  /* 0xFA */ { M65XX_PLX, OP_NONE, 0, 0 },
  /* 0xFB */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xFC */ { M65XX_ERROR, OP_NONE, 0, 0 },
  /* 0xFD */ { M65XX_SBC, OP_INDEXED16_X, 4, 5 },
  /* 0xFE */ { M65XX_INC, OP_INDEXED16_X, 7, 7 },
  /* 0xFF */ { M65XX_BBS7, OP_ADDRESS8_RELATIVE, 0, 0 }
};

int table_6502_len = sizeof(table_6502) / sizeof(struct _table_6502);

