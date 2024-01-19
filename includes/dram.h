#ifndef DRAM_H
#define DRAM_H


#define DRAM_SIZE 1024*1024*1
#define DRAM_BASE 0x80000000

typedef struct DRAM{
    unsigned int mem[DRAM_SIZE];
} DRAM;

unsigned int dram_load(DRAM* dram, unsigned int addr, unsigned int size);
void dram_store(DRAM* dram, unsigned addr, unsigned int size, unsigned int value);


#endif