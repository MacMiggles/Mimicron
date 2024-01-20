#include <stdio.h>
#include <stdlib.h>

#include "../includes/dram.h"

unsigned int dram_load(DRAM* dram, unsigned int addr){
    return(unsigned int ) dram -> mem[addr - DRAM_BASE];
}

void dram_store(DRAM* dram, unsigned int addr, unsigned int value){
    dram -> mem[addr - DRAM_BASE] = (unsigned int) (value & 0xff );
}

