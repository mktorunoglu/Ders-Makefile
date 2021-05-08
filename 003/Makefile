CC = gcc
CFLAGS = -Wall -Werror -I.
SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

all: test

test: test/test.c $(OBJS)
	echo $(OBJS)
	echo $(CC)
	echo $<
	echo $@

%.o: %.c
	echo $<
	echo $@
