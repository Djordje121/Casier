#simple make file for cash compalation

# build an executable named cash from cash.c
.PHONY: all
all: casier

casier: system.c system.h casier.c casier.h 
	gcc -std=c99 -o casier system.c casier.c -lm

.PHONY: clean
clean:
	rm -f casier
