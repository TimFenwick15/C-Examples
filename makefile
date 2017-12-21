CC = gcc
#CFLAGS = -std=c99 -pedantic -D_XOPEN_SOURCE=600 -Wall -Werror -g
RM = rm -f
SRCS = $(wildcard *.c)
PROGS = $(patsubst %.c,%,$(SRCS))

.PHONY: all clean

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -g3 -o3 -o $@ $<

clean:
	$(RM) $(PROGS)

