#include <stdio.h>
#include <stdlib.h>
#include "table_680x0.h"

struct _table_680x0 table_680x0[] =
{
  { "abdc", 0xc100, 0xf1f0, 3, 0, 3, { { OP_DY, 13, 3}, { OP_DX, 4, 3}, { OP_NONE, 0, 0}, } },
  { "add", 0xd000, 0xf100, 3, 0, -1, { { OP_EA, 10, 6}, { OP_D, 4, 3}, { OP_NONE, 0, 0}, } },
  { "add", 0xd100, 0xf100, 6, 0, -1, { { OP_D, 4, 3}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "adda", 0xd040, 0xf040, 3, 0, -1, { { OP_EA, 10, 6}, { OP_A, 4, 3}, { OP_NONE, 0, 0}, } },
  { "addi", 0x0600, 0xff00, 6, 0, -1, { { OP_IMM, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "addq", 0x5000, 0xf100, 6, 0, -1, { { OP_IMM8, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "addx", 0xd100, 0xf130, 3, 0, 3, { { OP_DY, 13, 3}, { OP_DX, 4, 3}, { OP_NONE, 0, 0}, } },
  { "and", 0xc000, 0xf100, 3, 0, -1, { { OP_EA, 10, 6}, { OP_D, 4, 3}, { OP_NONE, 0, 0}, } },
  { "and", 0xc100, 0xf100, 6, 0, -1, { { OP_D, 4, 3}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "andi", 0x0200, 0xff00, 6, 0, -1, { { OP_IMM, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "andi", 0x023c, 0xffff, 0, 0, -1, { { OP_IMM, -1, 0}, { OP_CCR, -1, 0}, { OP_NONE, 0, 0}, } },
  { "andi", 0x027c, 0xffff, 0, 0, -1, { { OP_IMM, -1, 0}, { OP_SR, -1, 0}, { OP_NONE, 0, 0}, } },
  { "asl", 0xe100, 0xf138, 3, 0, -1, { { OP_IMM8, -1, 0}, { OP_D, 13, 3}, { OP_NONE, 0, 0}, } },
  { "asl", 0xe120, 0xf138, 3, 0, -1, { { OP_DX, 4, 3}, { OP_DY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "asl", 0xe1c0, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "asr", 0xe000, 0xf138, 3, 0, -1, { { OP_IMM8, -1, 0}, { OP_D, 13, 3}, { OP_NONE, 0, 0}, } },
  { "asr", 0xe020, 0xf138, 3, 0, -1, { { OP_DX, 4, 3}, { OP_DY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "asr", 0xe0c0, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "bcc", 0x6000, 0xf000, 8, 1, -1, { { OP_8BITDISP, 8, 8}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "bchg", 0x0140, 0xf1c0, 6, 0, -1, { { OP_D, 4, 3}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "bchg", 0x0840, 0xffc0, 6, 0, -1, { { OP_IMM, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "bclr", 0x0180, 0xf1c0, 6, 0, -1, { { OP_D, 4, 3}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "bclr", 0x0880, 0xffc0, 6, 0, -1, { { OP_IMM, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "bkpt", 0x4848, 0xfff8, 0, 0, -1, { { OP_IMM, -1, 0}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "bra", 0x6000, 0xff00, 8, 0, -1, { { OP_8BITDISP, 8, 8}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "bset", 0x01c0, 0xf1c0, 6, 0, -1, { { OP_D, 4, 3}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "bset", 0x08c0, 0xffc0, 6, 0, -1, { { OP_IMM, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "bsr", 0x6100, 0xff00, 8, 0, -1, { { OP_8BITDISP, 8, 8}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "btst", 0x0100, 0xf1c0, 6, 0, -1, { { OP_D, 4, 3}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "btst", 0x0800, 0xffc0, 6, 0, -1, { { OP_IMM, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "chk", 0x4000, 0xf040, 3, 0, -1, { { OP_EA, 10, 6}, { OP_D, 4, 3}, { OP_NONE, 0, 0}, } },
  { "clr", 0x4200, 0xff00, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "cmp", 0xb100, 0xf100, 3, 0, -1, { { OP_EA, 10, 6}, { OP_D, 4, 3}, { OP_NONE, 0, 0}, } },
  { "cmpa", 0xb040, 0xf040, 3, 0, -1, { { OP_EA, 10, 6}, { OP_A, 4, 3}, { OP_NONE, 0, 0}, } },
  { "cmpi", 0x0c00, 0xff00, 6, 0, -1, { { OP_IMM, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "cmpm", 0xb108, 0xf138, 0, 0, -1, { { OP_AY_PLUS, -1, 0}, { OP_AX_PLUS, -1, 0}, { OP_NONE, 0, 0}, } },
  { "dbcc", 0x50c8, 0xf0f8, 0, 2, -1, { { OP_D, 13, 3}, { OP_LABEL, -1, 0}, { OP_NONE, 0, 0}, } },
  { "divs", 0x81c0, 0xf1c0, 3, 0, -1, { { OP_EA, 10, 6}, { OP_D, 4, 3}, { OP_NONE, 0, 0}, } },
  { "divs", 0x4c40, 0xffc0, 0, 0, -1, { { OP_EA, 10, 6}, { OP_DQ_DR_DQ, -1, 0}, { OP_NONE, 0, 0}, } },
  { "divsl", 0x4c40, 0xffc0, 0, 0, -1, { { OP_EA, 10, 6}, { OP_DR_DQ, -1, 0}, { OP_NONE, 0, 0}, } },
  { "divu", 0x80c0, 0xf1c0, 3, 0, -1, { { OP_EA, 10, 6}, { OP_D, 4, 3}, { OP_NONE, 0, 0}, } },
  { "divu", 0x4c40, 0xffc0, 0, 0, -1, { { OP_EA, 10, 6}, { OP_DQ_DR_DQ, -1, 0}, { OP_NONE, 0, 0}, } },
  { "divul", 0x4c40, 0xffc0, 0, 0, -1, { { OP_EA, 10, 6}, { OP_DR_DQ, -1, 0}, { OP_NONE, 0, 0}, } },
  { "eor", 0xb100, 0xf100, 6, 0, -1, { { OP_D, 4, 3}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "eori", 0x0a00, 0xff00, 6, 0, -1, { { OP_IMM, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "eori", 0x0a3c, 0xffff, 0, 0, -1, { { OP_IMM, -1, 0}, { OP_CCR, -1, 0}, { OP_NONE, 0, 0}, } },
  { "exg", 0xc140, 0xf1f8, 3, 0, -1, { { OP_DX, 4, 3}, { OP_DY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "exg", 0xc148, 0xf1f8, 3, 0, -1, { { OP_AX, 4, 3}, { OP_AY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "exg", 0xc188, 0xf1f8, 3, 0, -1, { { OP_DX, 4, 3}, { OP_AY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "ext", 0x4880, 0xfff8, 3, 0, -1, { { OP_D, 13, 3}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "ext", 0x48c0, 0xfff8, 3, 0, -1, { { OP_D, 13, 3}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "extb", 0x49c0, 0xfff8, 3, 0, -1, { { OP_D, 13, 3}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "illegal", 0x4afc, 0xffff, 0x0, 0, -1, { { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "jmp", 0x4ec0, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "jsr", 0x4e80, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "lea", 0x41c0, 0xf1c0, 3, 0, -1, { { OP_EA, 10, 6}, { OP_A, 4, 3}, { OP_NONE, 0, 0}, } },
  { "link", 0x4e50, 0xfff8, 0, 0, -1, { { OP_A, 13, 3}, { OP_IMM, -1, 0}, { OP_NONE, 0, 0}, } },
  { "link", 0x4808, 0xfff8, 0, 0, -1, { { OP_A, 13, 3}, { OP_IMM, -1, 0}, { OP_NONE, 0, 0}, } },
  { "lsl", 0xe108, 0xf138, 3, 0, -1, { { OP_IMM8, -1, 0}, { OP_D, 13, 3}, { OP_NONE, 0, 0}, } },
  { "lsl", 0xe128, 0xf138, 3, 0, -1, { { OP_DX, 4, 3}, { OP_DY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "lsl", 0xe3c0, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "lsr", 0xe008, 0xf138, 3, 0, -1, { { OP_IMM8, -1, 0}, { OP_D, 13, 3}, { OP_NONE, 0, 0}, } },
  { "lsr", 0xe028, 0xf138, 3, 0, -1, { { OP_DX, 4, 3}, { OP_DY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "lsr", 0xe2c0, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "move", 0x0000, 0xc000, 6, 0, -1, { { OP_SEA, 10, 6}, { OP_DEA, 4, 6}, { OP_NONE, 0, 0}, } },
  { "move", 0x42c0, 0xffc0, 6, 0, -1, { { OP_CCR, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "move", 0x40c0, 0xffc0, 6, 0, -1, { { OP_SR, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "move", 0x44c0, 0xffc0, 0, 0, -1, { { OP_EA, 10, 6}, { OP_CCR, -1, 0}, { OP_NONE, 0, 0}, } },
  { "move", 0x46c0, 0xffc0, 0, 0, -1, { { OP_EA, 10, 6}, { OP_SR, -1, 0}, { OP_NONE, 0, 0}, } },
  { "movea", 0x0040, 0xc1c0, 3, 0, -1, { { OP_EA, 10, 6}, { OP_A, 4, 3}, { OP_NONE, 0, 0}, } },
  { "movem", 0x4880, 0xff80, 6, 0, -1, { { OP_REG_LIST, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "movem", 0x4c80, 0xff80, 0, 0, -1, { { OP_EA, 10, 6}, { OP_REG_LIST, -1, 0}, { OP_NONE, 0, 0}, } },
  { "movep", 0x0108, 0xf1b8, 3, 0, -1, { { OP_D16_AY, 13, 3}, { OP_DX, 4, 3}, { OP_NONE, 0, 0}, } },
  { "movep", 0x0188, 0xf1b8, 3, 0, -1, { { OP_DX, 4, 3}, { OP_D16_AY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "moveq", 0x7000, 0xf100, 3, 0, -1, { { OP_IMM256, -1, 0}, { OP_D, 4, 3}, { OP_NONE, 0, 0}, } },
  { "muls", 0xc1c0, 0xf1c0, 3, 0, -1, { { OP_EA, 10, 6}, { OP_D, 4, 3}, { OP_NONE, 0, 0}, } },
  { "muls", 0x4c00, 0xffc0, 0, 0, -1, { { OP_EA, 10, 6}, { OP_DL_DH_DL, -1, 0}, { OP_NONE, 0, 0}, } },
  { "mulu", 0xc0c0, 0xf1c0, 3, 0, -1, { { OP_EA, 10, 6}, { OP_D, 4, 3}, { OP_NONE, 0, 0}, } },
  { "mulu", 0x4c00, 0xffc0, 0, 0, -1, { { OP_EA, 10, 6}, { OP_DL_DH_DL, -1, 0}, { OP_NONE, 0, 0}, } },
  { "nbcd", 0x4800, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "neg", 0x4400, 0xff00, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "negx", 0x4000, 0xff00, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "nop", 0x4e71, 0xffff, 0x0, 0, -1, { { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "not", 0x4600, 0xff00, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "or", 0x8000, 0xf100, 3, 0, -1, { { OP_EA, 10, 6}, { OP_D, 4, 3}, { OP_NONE, 0, 0}, } },
  { "or", 0x8100, 0xf100, 6, 0, -1, { { OP_D, 4, 3}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "ori", 0x0000, 0xff00, 6, 0, -1, { { OP_IMM, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "ori", 0x003c, 0xffff, 0, 0, -1, { { OP_IMM, -1, 0}, { OP_CCR, -1, 0}, { OP_NONE, 0, 0}, } },
  { "pack", 0x8140, 0xf1f0, 0, 0, 3, { { OP_DX, 13, 3}, { OP_DY, 4, 3}, { OP_IMM, -1, 0}, } },
  { "pea", 0x4840, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "rol", 0xe118, 0xf138, 3, 0, -1, { { OP_IMM8, -1, 0}, { OP_D, 13, 3}, { OP_NONE, 0, 0}, } },
  { "rol", 0xe138, 0xf138, 3, 0, -1, { { OP_DX, 4, 3}, { OP_DY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "rol", 0xe7c0, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "ror", 0xe018, 0xf138, 3, 0, -1, { { OP_IMM8, -1, 0}, { OP_D, 13, 3}, { OP_NONE, 0, 0}, } },
  { "ror", 0xe038, 0xf138, 3, 0, -1, { { OP_DX, 4, 3}, { OP_DY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "ror", 0xe6c0, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "roxl", 0xe110, 0xf138, 3, 0, -1, { { OP_IMM8, -1, 0}, { OP_D, 13, 3}, { OP_NONE, 0, 0}, } },
  { "roxl", 0xe130, 0xf138, 3, 0, -1, { { OP_DX, 4, 3}, { OP_DY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "roxl", 0xe5c0, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "roxr", 0xe010, 0xf138, 3, 0, -1, { { OP_IMM8, -1, 0}, { OP_D, 13, 3}, { OP_NONE, 0, 0}, } },
  { "roxr", 0xe030, 0xf138, 3, 0, -1, { { OP_DX, 4, 3}, { OP_DY, 13, 3}, { OP_NONE, 0, 0}, } },
  { "roxr", 0xe4c0, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "rtd", 0x4e74, 0xffff, 0, 0, -1, { { OP_IMM16, -1, 0}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "rtm", 0x06c0, 0xfff8, 3, 0, -1, { { OP_D, 13, 3}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "rtm", 0x06c8, 0xfff8, 3, 0, -1, { { OP_A, 13, 3}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "rtr", 0x4e77, 0xffff, 0x0, 0, -1, { { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "rts", 0x4e75, 0xffff, 0x0, 0, -1, { { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "sbcd", 0x8100, 0xf1f0, 3, 0, 3, { { OP_DX, 13, 3}, { OP_DY, 4, 3}, { OP_NONE, 0, 0}, } },
  { "scc", 0x50c0, 0xf0c0, 6, 1, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "sub", 0x9000, 0xf040, 3, 0, -1, { { OP_EA, 10, 6}, { OP_D, 4, 3}, { OP_NONE, 0, 0}, } },
  { "sub", 0x9040, 0xf040, 6, 0, -1, { { OP_D, 4, 3}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "suba", 0x90c0, 0xf0c0, 3, 0, -1, { { OP_EA, 10, 6}, { OP_A, 4, 3}, { OP_NONE, 0, 0}, } },
  { "subi", 0x0400, 0xff00, 6, 0, -1, { { OP_IMM, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "subq", 0xa100, 0xf100, 6, 0, -1, { { OP_IMM8, -1, 0}, { OP_EA, 10, 6}, { OP_NONE, 0, 0}, } },
  { "subx", 0x9100, 0xf130, 3, 0, 3, { { OP_DX, 13, 3}, { OP_DY, 4, 3}, { OP_NONE, 0, 0}, } },
  { "swap", 0x4840, 0xfff8, 3, 0, -1, { { OP_D, 13, 3}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "tas", 0x4ac0, 0xffc0, 6, 0, -1, { { OP_EA, 10, 6}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
  { "trap", 0x4e40, 0xfff0, 0, 0, -1, { { OP_IMM16, -1, 0}, { OP_NONE, 0, 0}, { OP_NONE, 0, 0}, } },
};
