CFLAGS+=-D_POSIX_C_SOURCE=200809L -std=c11
LDLIBS+=-lm -lrt

ifeq ($(CC), clang)
ifeq ($(CONFIG), debug)
CFLAGS+=-D_GNU_SOURCE -DDEBUG -O0 -ftrapv -g \
	-Weverything \
	-Wno-dollar-in-identifier-extension
endif
ifeq ($(CONFIG), profile)
CFLAGS+=-D_GNU_SOURCE -DNDEBUG -O3 -g -save-temps
endif
ifeq ($(CONFIG), release)
CFLAGS+=-D_GNU_SOURCE -DNDEBUG -O3 -Wl,-s -w
endif
endif

build: tests

check: tests
	valgrind --tool=memcheck --leak-check=full ./tests

test: tests
	./tests

run: tests
	./tests

deep-clean: clean
	$(RM) *.out *.run

clean: shallow-clean
	$(RM) tests

shallow-clean:
	$(RM) *.d *.gch *.i *.o *.s

tests: CFLAGS+=$$(pkg-config --cflags cheat)
tests: LDLIBS+=$$(pkg-config --libs cheat)
tests: prelewd/std.o

makefile.d:
	-find -name '*.c' -print0 | xargs -0x $(CC) $(CFLAGS) -MM > $@
