#ifndef CPU_H
#define CPU_H

#include "bus.h"

typedef struct CPU
{
   using Byte = unsigned char;
   using Word = unsigned short;

   Word PC, SP;
   Byte A, B, C, D, E, H, L;
   Word PC, SP; //16bit
   // register. A is accumulator, rest is "scatchpad" 

   // A, B, D, H 15 ... 8
   // F(Flag), c,E, L 7...0

   // flag 7:S,  6:Z  ,5:0 ,  4:A ,  3:0 ,  2:P ,  1:1 ,  0:c 
   Byte S : 1; // sign flag
   Byte Z : 1; // zero flag 
   Byte f : 1; 
   Byte A : 1; // aux carry
   Byte f2 : 1;
   Byte P : 1; // parity flag 
   Byte f3 : 1;
   Byte C : 1; // carry flag 
   
   struct BUS bus;
}CPU;

void init(struct CPU * cpu);
void cpu_step(struct CPU * cpu);
unsigned int fetch(struct CPU * cpu);
int execute(struct CPU * cpu, unsigned int inst);
void dump_registers(struct CPU *cpu);

#endif