#include "uvm32_target.h"
#include "barr_memtest.h"

void main(void) {
    datum * base = (datum *)UVM32_EXTRAM_BASE;
    if ((memTestDataBus(base) != 0) || (memTestAddressBus(base, HEAP_SIZE) != NULL) || (memTestDevice(base, HEAP_SIZE) != NULL)) {
        println("Memory error!");
    } else {
        println("Memory ok");
    }
}
