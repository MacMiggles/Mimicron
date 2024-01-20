#ifndef CPU_H
#define CPU_H

#include "bus.h"

typedef struct CPU
{
   using Byte = unsigned char;
   using Word = unsigned short;

   Word PC, SP; //16bit
   Byte A, B, C, D, E, H, L;
   // register. A is accumulator, rest is "scatchpad" 

   // A, B, D, H 15 ... 8
   // F(Flag), c,E, L 7...0

   // flag 7:S,  6:Z  ,5:0 ,  4:A ,  3:0 ,  2:P ,  1:1 ,  0:c 
   int S : 1; // sign flag
   Byte Z : 1; // zero flag 
   Byte P : 1; // parity flag 
   int C : 1; // carry flag 
   int A : 1; // aux carry
   struct BUS bus;
}CPU;

void cpu_init(struct CPU * cpu);
unsigned int cpu_fetch(struct CPU * cpu);
int cpu_execute(struct CPU * cpu, unsigned int inst);
void cpu_dump_registers(struct CPU *cpu);

#endif