#ifndef CPU_H
#define CPU_H

#include "bus.h"

struct cpu
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
};



#endif