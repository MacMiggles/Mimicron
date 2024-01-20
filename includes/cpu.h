#ifndef CPU_H
#define CPU_H

#include "bus.h"

typedef struct CPU
{
   using Byte = unsigned char;
   using Word = unsigned short;

   Word PC, SP;
   Byte A, B, C, D, E, H, L;
   // register. A is accumulator, rest is "scatchpad" 

   Byte S : 1; // sign flag
   Byte Z : 1; // zero flag 
   Byte P : 1; // parity flag 
   Byte C : 1; // carry flag 
   Byte H : 1; // aux carry
   struct BUS bus;
}CPU;

void init(struct CPU * cpu);
unsigned int fetch(struct CPU * cpu);
int execute(struct CPU * cpu, unsigned int inst);
void dump_registers(struct CPU *cpu);

#endif