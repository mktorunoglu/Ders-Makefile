CC = gcc
CFLAGS = -Wall -I./include -L./lib

SRCDIR = src
OBJDIR = obj
SRCS = $(filter-out src/generic.test.c, $(wildcard $(SRCDIR)/*.c))
OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

.PHONY = all clean lib
all: testll testbst

lib/libtests.a: $(OBJS)
	@mkdir -p lib
	ar rcs lib/libtests.a $^
	ranlib lib/libtests.a

testll: test/testll.c lib/libtests.a
	$(CC) $(CFLAGS) $< -o $@ -ltests
	
testbst: test/testbst.c lib/libtests.a
	$(CC) $(CFLAGS) $< -o $@ -ltests

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	@rm -rf testll testbst  lib $(OBJDIR)

