all:
	gcc -Wall -DUVM32_MEMORY_SIZE=16386 -I../uvm32 -I../common -o host-parallel ../uvm32/uvm32.c host-parallel.c

clean:
	rm -f host-parallel
