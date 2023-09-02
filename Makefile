CC=gcc
CFLAG=-Wall -Wextra
OBJS=main.o lib.o
OUTPUT=application

all: $(OUTPUT)

$(OUTPUT): $(OBJS)
	gcc -o $@ $^

lib.o: lib.c lib.h
main.o: main.c lib.h

clean:
	rm -f $(OBJS)
	rm -f $(OUTPUT)

.PHONY: all, clean

