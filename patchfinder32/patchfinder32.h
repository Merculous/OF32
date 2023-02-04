//
//  patchfinder32.h
//  HomeDepotOF
//
//  Created by Nicolò Blasi on 24/08/2017.
//  Copyright © 2017 Nicolò Blasi. All rights reserved.
//

/* patchfinder32 - credits to planetbeing (https://github.com/planetbeing/ios-jailbreak-patchfinder) */

#ifndef patchfinder32_h
#define patchfinder32_h

#include <stddef.h>
#include <stdint.h>

int insn_is_32bit(uint16_t* i);

int insn_is_add_reg(uint16_t* i);
int insn_add_reg_rd(uint16_t* i);
int insn_add_reg_rm(uint16_t* i);

int insn_is_mov_imm(uint16_t* i);
int insn_mov_imm_rd(uint16_t* i);
int insn_mov_imm_imm(uint16_t* i);

int insn_is_movt(uint16_t* i);
int insn_movt_rd(uint16_t* i);
int insn_movt_imm(uint16_t* i);

int insn_is_ldr_imm(uint16_t* i);
int insn_ldr_imm_rt(uint16_t* i);
int insn_ldr_imm_imm(uint16_t* i);

int insn_is_bl(uint16_t* i);
uint32_t insn_bl_imm32(uint16_t* i);

int insn_is_pop(uint16_t *i);
int insn_is_push(uint16_t *i);
int insn_is_thumb2_ldr(uint16_t *i);
int insn_is_thumb2_pop(uint16_t *i);
int insn_is_thumb2_push(uint16_t *i);



uint16_t* find_literal_ref(uint32_t region, uint8_t* kdata, size_t ksize, uint32_t address);


#endif /* patchfinder32_h */
