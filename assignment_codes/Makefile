TARGET=all.out
OBJS=test.o sum.o sqr.o
C_INCLUDE_PATH=-I./inc


${TARGET}:${OBJS}
    gcc $^ -o $@
%.o:%.c fun.h
    gcc $^ -c

clean:
    rm *.out *.o
