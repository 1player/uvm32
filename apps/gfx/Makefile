TOPDIR=../..
PROJECT:=$(shell basename ${PWD})

OPT=-Os
SRCS=${PROJECT}.c ${TOPDIR}/apps/common/crt0.S

HEAP_SIZE=$(shell echo "320 * 200 * 4" | bc)
HOST_EXTRA=-e ${HEAP_SIZE} -i 9999999

all: all_common
test: all
	${TOPDIR}/hosts/host-sdl/host-sdl ${HOST_EXTRA} ${PWD}/${PROJECT}.bin

clean: clean_common
include ${TOPDIR}/apps/common/makefile.common
