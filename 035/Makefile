CC = gcc
CFLAGS = -Wall -I./include -L./lib

SRCDIR = src
OBJDIR = obj
SRCS = $(filter-out src/generic.test.c, $(wildcard $(SRCDIR)/*.c))
OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

.PHONY = all clean lib
all: testll testbst gentest testvoid

lib/libtests.a: $(OBJS)
	@mkdir -p lib
	ar rcs lib/libtests.a $^
	ranlib lib/libtests.a

testll: test/testll.c lib/libtests.a
	$(CC) $(CFLAGS) $< -o $@ -ltests
	
testbst: test/testbst.c lib/libtests.a
	$(CC) $(CFLAGS) $< -o $@ -ltests
	
testvoid: test/testvoid.c lib/libtests.a
	$(CC) $(CFLAGS) $< -o $@ -ltests

gentest: src/generic_test.c
	$(CC) $(CFLAGS) $< -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	@rm -rf testll testbst testvoid gentest lib $(OBJDIR)

