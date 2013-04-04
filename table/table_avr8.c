#include "table_avr8.h"

struct _table_avr8 table_avr8[] =
{
  { "sec", 0x9408, 0xffff, OP_NONE, 1, 1 },
  { "clc", 0x9488, 0xffff, OP_NONE, 1, 1 },
  { "sen", 0x9448, 0xffff, OP_NONE, 1, 1 },
  { "cln", 0x94a8, 0xffff, OP_NONE, 1, 1 },
  { "sez", 0x9418, 0xffff, OP_NONE, 1, 1 },
  { "clz", 0x9498, 0xffff, OP_NONE, 1, 1 },
  { "sei", 0x9478, 0xffff, OP_NONE, 1, 1 },
  { "cli", 0x94f8, 0xffff, OP_NONE, 1, 1 },
  { "ses", 0x9448, 0xffff, OP_NONE, 1, 1 },
  { "cls", 0x94c8, 0xffff, OP_NONE, 1, 1 },
  { "sev", 0x9438, 0xffff, OP_NONE, 1, 1 },
  { "clv", 0x94b8, 0xffff, OP_NONE, 1, 1 },
  { "set", 0x9468, 0xffff, OP_NONE, 1, 1 },
  { "clt", 0x94e8, 0xffff, OP_NONE, 1, 1 },
  { "seh", 0x9458, 0xffff, OP_NONE, 1, 1 },
  { "clh", 0x94d8, 0xffff, OP_NONE, 1, 1 },
  { "break", 0x9598, 0xffff, OP_NONE, 1, 1 },
  { "nop", 0x0000, 0xffff, OP_NONE, 1, 1 },
  { "sleep", 0x9588, 0xffff, OP_NONE, 1, 1 },
  { "wdr", 0x95a8, 0xffff, OP_NONE, 1, 1 },
  { "ijmp", 0x9409, 0xffff, OP_NONE, 2, 2 },
  { "eijmp", 0x9419, 0xffff, OP_NONE, 2, 2 },
  { "icall", 0x9509, 0xffff, OP_NONE, 3, 3 },
  { "eicall", 0x9519, 0xffff, OP_NONE, 4, 4 },
  { "ret", 0x9508, 0xffff, OP_NONE, 4, 4 },
  { "reti", 0x9518, 0xffff, OP_NONE, 4, 4 },
  { "lpm", 0x95c8, 0xffff, OP_NONE, 3, 3 },
  { "elpm", 0x95d8, 0xffff, OP_NONE, 3, 3 },
  { "spm", 0x94c8, 0xffff, OP_NONE, -1, -1 },
  { "breq", 0xf001, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brne", 0xf401, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brcs", 0xf000, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brcc", 0xf400, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brsh", 0xf400, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brlo", 0xf000, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brmi", 0xf002, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brpl", 0xf402, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brge", 0xf404, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brlt", 0xf004, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brhs", 0xf005, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brhc", 0xf405, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brts", 0xf006, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brtc", 0xf406, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brvs", 0xf003, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brvc", 0xf403, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brie", 0xf007, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brid", 0xf407, 0xfc07, OP_BRANCH_K, 1, 2 },
  { "brbs", 0xf000, 0xfc00, OP_BRANCH_S_K, 1, 2 },
  { "brbc", 0xf400, 0xfc00, OP_BRANCH_S_K, 1, 2 },
  { "adc", 0x1c00, 0xfc00, OP_TWO_REG, 1, 1 },
  { "add", 0x1c00, 0xfc00, OP_TWO_REG, 1, 1 },
  { "and", 0x2000, 0xfc00, OP_TWO_REG, 1, 1 },
  { "cp", 0x1400, 0xfc00, OP_TWO_REG, 1, 1 },
  { "cpc", 0x0400, 0xfc00, OP_TWO_REG, 1, 1 },
  { "cpse", 0x1000, 0xfc00, OP_TWO_REG, 1, 3 },
  { "eor", 0x2400, 0xfc00, OP_TWO_REG, 1, 1 },
  { "mov", 0x2c00, 0xfc00, OP_TWO_REG, 1, 1 },
  { "mul", 0x9c00, 0xfc00, OP_TWO_REG, 2, 2 },
  { "or", 0x2800, 0xfc00, OP_TWO_REG, 1, 1 },
  { "sbc", 0x0800, 0xfc00, OP_TWO_REG, 1, 1 },
  { "sub", 0x1800, 0xfc00, OP_TWO_REG, 1, 1 },
  //{ "tst", 0x2000, 0xfc00, OP_RD, 1, 1 },   and
  //{ "clr", 0x2400, 0xfc00, OP_RD, 1, 1 },   eor
  //{ "lsl", 0x0c00, 0xfc00, OP_RD, 1, 1 },
  //{ "rol", 0x1c00, 0xfc00, OP_RD, 1, 1 },
  { "andi", 0x3000, 0xf000, OP_REG_IMM, 1, 1 },
  { "cpi", 0x3000, 0xf000, OP_REG_IMM, 1, 1 },
  { "ldi", 0xe000, 0xf000, OP_REG_IMM, 1, 1 },
  { "ori", 0x6000, 0xf000, OP_REG_IMM, 1, 1 },
  { "sbci", 0x4000, 0xf000, OP_REG_IMM, 1, 1 },
  { "sbr", 0x6000, 0xf000, OP_REG_IMM, 1, 1 },
  { "subi", 0x5000, 0xf000, OP_REG_IMM, 1, 1 },
  //{ "cbr", 0x0000, 0x0000, OP_REG_IMM, 1, 1 },
  { "asr", 0x9405, 0xfe0f, OP_ONE_REG, 1, 1 },
  { "com", 0x9400, 0xfe0f, OP_ONE_REG, 1, 1 },
  { "dec", 0x940a, 0xfe0f, OP_ONE_REG, 1, 1 },
  { "inc", 0x9403, 0xfe0f, OP_ONE_REG, 1, 1 },
  { "lsr", 0x9406, 0xfe0f, OP_ONE_REG, 1, 1 },
  { "neg", 0x9401, 0xfe0f, OP_ONE_REG, 1, 1 },
  { "pop", 0x900f, 0xfe0f, OP_ONE_REG, 2, 2 },
  { "push", 0x920f, 0xfe0f, OP_ONE_REG, 2, 2 },
  { "ror", 0x9407, 0xfe0f, OP_ONE_REG, 1, 1 },
  { "swap", 0x9402, 0xfe0f, OP_ONE_REG, 1, 1 },
  { "bld", 0xf800, 0xfe08, OP_REG_BIT, 1, 1 },
  { "bst", 0xfa00, 0xfe08, OP_REG_BIT, 1, 1 },
  { "sbrc", 0xfc00, 0xfe08, OP_REG_BIT, 1, 3 },
  { "sbrs", 0xfe00, 0xfe08, OP_REG_BIT, 1, 3 },
  { "adiw", 0x9600, 0xff00, OP_REG_IMM_WORD, 2, 2 },
  { "sbiw", 0x9700, 0xff00, OP_REG_IMM_WORD, 2, 2 },
  { "cbi", 0x9800, 0xff00, OP_IOREG_BIT, 2, 2 },
  { "sbi", 0x9a00, 0xff00, OP_IOREG_BIT, 2, 2 },
  { "sbic", 0x9900, 0xff00, OP_IOREG_BIT, 1, 3 },
  { "sbis", 0x9b00, 0xff00, OP_IOREG_BIT, 1, 3 },
  { "bset", 0x9408, 0xff8f, OP_SREG_BIT, 1, 1 },
  { "bclr", 0x9488, 0xff8f, OP_SREG_BIT, 1, 1 },
  { "ser", 0xef0f, 0xff0f, OP_REG_4, 1, 1 },
  { "in", 0xb000, 0xf800, OP_IN, 1, 1 },
  { "out", 0xb800, 0xf800, OP_OUT, 1, 1 },
  { "movw", 0x0100, 0xff00, OP_MOVW, 1, 1 },
  { "rjmp", 0xc000, 0xf000, OP_RELATIVE, 2, 2 },
  { "rcall", 0xd000, 0xf000, OP_RELATIVE, 3, 3 },
  { "call", 0x940e, 0xfe0e, OP_JUMP, 4, 4 },
  { "jmp", 0x940c, 0xfe0e, OP_JUMP, 3, 3 },
  { "ld", 0x900c, 0xfe0f, OP_REG_X, 2, 2 },
  { "ld", 0x8008, 0xfe0f, OP_REG_Y, 2, 2 },
  { "ld", 0x8000, 0xfe0f, OP_REG_Z, 2, 2 },
  { "ld", 0x900d, 0xfe0f, OP_REG_X_PLUS, 2, 2 },
  { "ld", 0x9009, 0xfe0f, OP_REG_Y_PLUS, 2, 2 },
  { "ld", 0x9001, 0xfe0f, OP_REG_Z_PLUS, 2, 2 },
  { "ld", 0x900e, 0xfe0f, OP_REG_MINUS_X, 2, 2 },
  { "ld", 0x900a, 0xfe0f, OP_REG_MINUS_Y, 2, 2 },
  { "ld", 0x9002, 0xfe0f, OP_REG_MINUS_Z, 2, 2 },
  { "st", 0x920c, 0xfe0f, OP_X_REG, 2, 2 },
  { "st", 0x8208, 0xfe0f, OP_Y_REG, 2, 2 },
  { "st", 0x8200, 0xfe0f, OP_Z_REG, 2, 2 },
  { "st", 0x920d, 0xfe0f, OP_X_PLUS_REG, 2, 2 },
  { "st", 0x9209, 0xfe0f, OP_Y_PLUS_REG, 2, 2 },
  { "st", 0x9201, 0xfe0f, OP_Z_PLUS_REG, 2, 2 },
  { "st", 0x920e, 0xfe0f, OP_MINUS_X_REG, 2, 2 },
  { "st", 0x920a, 0xfe0f, OP_MINUS_Y_REG, 2, 2 },
  { "st", 0x9202, 0xfe0f, OP_MINUS_Z_REG, 2, 2 },
  { "lpm", 0x9004, 0xfe0f, OP_REG_Z, 3, 3 },
  { "lpm", 0x9005, 0xfe0f, OP_REG_Z_PLUS, 3, 3 },
  { "elpm", 0x9006, 0xfe0f, OP_REG_Z, 3, 3 },
  { "elpm", 0x9007, 0xfe0f, OP_REG_Z_PLUS, 3, 3 },
  { "fmuls", 0x0380, 0xff88, OP_FMUL, 2, 2 },
  { "fmul", 0x0308, 0xff88, OP_FMUL, 2, 2 },
  { "fmulsu", 0x0388, 0xff88, OP_FMUL, 2, 2 },
  { "mulsu", 0x0300, 0xff88, OP_FMUL, 2, 2 },
  { "muls", 0x0200, 0xff00, OP_MULS, 2, 2 },
  { "des", 0x940b, 0xff0f, OP_DATA4, 1, 2 },
  { "lds", 0x9000, 0xfe0f, OP_REG_SRAM, 3, 3 },
  { "sts", 0x9200, 0xfe0f, OP_SRAM_REG, 3, 3 },
  { "ldd", 0x8008, 0xd208, OP_REG_Y_PLUS_Q, 2, 2 },
  { "ldd", 0x8000, 0xd208, OP_REG_Z_PLUS_Q, 2, 2 },
  { "std", 0x8208, 0xd208, OP_Y_PLUS_Q_REG, 2, 2 },
  { "std", 0x8200, 0xd208, OP_Z_PLUS_Q_REG, 2, 2 },
  { "spm", 0x95e8, 0xffff, OP_SPM_Z_PLUS, -1, -1 },  // all devices
  { "spm", 0x94c8, 0xffff, OP_NONE, -1, -1 },        // #2?
  { "spm", 0x95f8, 0xffff, OP_SPM_Z_PLUS, -1, -1 },  // #2?
  { NULL, 0, 0, 0, 0, 0 }
};

