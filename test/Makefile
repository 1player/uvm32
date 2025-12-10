TESTS = example_1 stackoverflow custom_syscall
RUNCMD = $(foreach TEST,${TESTS},make -C ${TEST} &&)
CLEANCMD = $(foreach TEST,${TESTS},make -C ${TEST} clean &&)

all:
	${RUNCMD} true

clean:
	${CLEANCMD} true

