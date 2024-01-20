#include "../includes/bus.h"

unsigned int bus_load(BUS* bus, unsigned int addr, unsigned int size){
    return dram_load(&(bus -> dram), addr, size);
}
void bus_store(BUS* bus, unsigned int addr, unsigned int size, unsigned int value){
    dram_store(&(bus->dram), addr, size, value);
}