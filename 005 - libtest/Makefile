CC = gcc
CFLAGS = -Wall -Werror -I. -L.
SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

all: tests

lib: $(OBJS)
	ar rcs libtests.a $^
	ranlib libtests.a

tests: test/test.c lib
	$(CC) $(CFLAGS) $< -o $@ -ltests

%.o: %.c
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	rm *.o tests libtest.a
