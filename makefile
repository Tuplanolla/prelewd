CFLAGS+=-D_POSIX_C_SOURCE=200809L -std=c11
LDLIBS+=-lm -lrt

ifeq ($(CC), clang)
ifeq ($(CONFIG), debug)
CFLAGS+=-D_GNU_SOURCE -DDEBUG -O0 -ftrapv -g \
	-Weverything \
	-Wno-aggregate-return -Wno-bad-function-cast -Wno-disabled-macro-expansion \
	-Wno-missing-prototypes -Wno-padded -Wno-unused-parameter -Wno-attributes -Wno-unused-function -Wno-shadow \
	-Wno-switch -Wno-used-but-marked-unused \
	-Wno-dollar-in-identifier-extension
# TODO The third to last line should be removed later.
endif
ifeq ($(CONFIG), profile)
CFLAGS+=-D_GNU_SOURCE -DNDEBUG -O3 -g -save-temps
endif
ifeq ($(CONFIG), release)
CFLAGS+=-D_GNU_SOURCE -DNDEBUG -O3 -Wl,-s -w
endif
endif

ifeq ($(CC), gcc)
ifeq ($(CONFIG), debug)
CFLAGS+=-D_GNU_SOURCE -DDEBUG -Og -ftrapv -g \
	$$(cat gcc-$$(./gcc-version | tr . _)-release) \
	-Wno-error -Wno-fatal-errors -Wno-system-headers \
	-Wno-c++-compat -Wno-c90-c99-compat \
	-Wno-long-long -Wno-traditional -Wno-traditional-conversion \
	-Wno-declaration-after-statement -Wno-unsuffixed-float-constants \
	-Wno-address -Wno-aggregate-return \
	-Wno-switch -Wno-switch-enum -Wno-switch-default \
	-Wno-missing-prototypes -Wno-padded -Wno-unused-parameter -Wno-attributes -Wno-unused-function -Wno-shadow \
	-Wno-missing-declarations -Wno-missing-prototypes
# TODO The second to last line should be removed later.
endif
ifeq ($(CONFIG), profile)
CFLAGS+=-D_GNU_SOURCE -DNDEBUG -O3 -g -pg -save-temps
endif
ifeq ($(CONFIG), release)
CFLAGS+=-D_GNU_SOURCE -DNDEBUG -O3 -s -w
endif
endif

build: tests scalar.o vector.o

run: tests
	./tests

check-static: build
	cppcheck -I/usr/include --enable=all *.c *.h | grep '^\['

check-dynamic: build
	valgrind --tool=memcheck --leak-check=full ./tests

test: tests
	./tests

deep-clean: clean
	$(RM) *.out *.run

clean: shallow-clean
	$(RM) tests

shallow-clean:
	$(RM) *.gch *.i *.o *.s

tests: CFLAGS+=$$(pkg-config --cflags cheat)
tests: LDLIBS+=$$(pkg-config --libs cheat)

# The rest is automatically generated by `gcc -MM *.c`.

scalar.o: scalar.c alias.h ext.h cpp.h scalar.h scalar_lift.h \
 scalar_int.h scalar_sint.h scalar_uint.h scalar_fp.h scalar_lift.c \
 scalar_int.c scalar_sint.c scalar_uint.c scalar_fp.c
scalar_fp.o: scalar_fp.c
scalar_int.o: scalar_int.c
scalar_lift.o: scalar_lift.c
scalar_num.o: scalar_num.c
scalar_sint.o: scalar_sint.c
scalar_uint.o: scalar_uint.c
tests.o: tests.c
vector.o: vector.c ext.h cpp.h vector.h scalar.h alias.h scalar_lift.h \
 scalar_int.h scalar_sint.h scalar_uint.h scalar_fp.h vector_fp.h \
 vector_fp.c
vector_fp.o: vector_fp.c
