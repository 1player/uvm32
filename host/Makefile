all:
	gcc -Wall -Werror -pedantic -std=c99 -DUVM32_MEMORY_SIZE=16384 -I../uvm32 -o host ../uvm32/uvm32.c host.c

clean:
	rm -f host
