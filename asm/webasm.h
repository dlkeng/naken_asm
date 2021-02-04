/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2010-2021 by Michael Kohn
 *
 */

#ifndef NAKEN_ASM_ASM_WEBASM_H
#define NAKEN_ASM_ASM_WEBASM_H

#include "common/assembler.h"

int parse_instruction_webasm(struct _asm_context *asm_context, char *instr);

#endif

