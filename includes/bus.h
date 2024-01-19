#ifndef BUS_H
#define BUS_H

#include "dram.h"

typedef struct BUS{
    struct DRAM dram;
}BUS;

unsigned int bus_load(BUS* bus, unsigned int addr, unsigned int size);
void bus_store(BUS* bus, unsigned int addr, unsigned int size, unsigned int value);

#endif