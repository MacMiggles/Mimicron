#include <stdio.h>
#include <stdlib.h>

#include "../includes/dram.h"
#include "../includes/opcodes.h"
#include "../includes/cpu.h"

void cpu_init(CPU  *cpu){
   // set registers
   cpu->PC  = DRAM_BASE;
}


unsigned int cpu_fetch(struct CPU * cpu){
   return bus_load(&(cpu->bus), cpu->PC, 8);
}

int cpu_execute(struct CPU * cpu, unsigned int inst){
   return 0;
}

void cpu_dump_registers(struct CPU *cpu){

}