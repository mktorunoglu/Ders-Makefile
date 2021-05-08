CC = gcc
CFLAGS = -Wall -Werror -I. -L.
SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

all: tests

lib: $(OBJS)
	ar -r libtests.a $(OBJS)
	ranlib libtests.a

tests: test/test.c lib
	$(CC) $(CFLAGS) $(OBJS) -ltests $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	rm *.o tests
