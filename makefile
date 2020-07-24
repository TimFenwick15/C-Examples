CC = gcc
#CFLAGS = -std=c99 -pedantic -D_XOPEN_SOURCE=600 -Wall -Werror -g
RM = rm -f
SRCS = $(filter-out extern1.c extern2.c, $(wildcard *.c))
PROGS = $(patsubst %.c,%,$(SRCS))

.PHONY: all clean

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -g3 -o3 -o $@ $<

extern:
	$(CC) $(CFLAGS) -g3 -o0 extern1.c extern2.c

clean:
	$(RM) $(PROGS)

