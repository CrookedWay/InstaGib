#
# Makefile for the C demo program: Linked List
#

CC = gcc
CFLAGS = -O
LFLAGS = 


InstaGib: main.c fasta.h fasta.c
	$(CC) $(CFLAGS) -c -o fasta.o fasta.c
	$(CC) $(CFLAGS) -c -o main.o main.c
	$(CC) $(LFLAGS) -o InstaGib main.o fasta.o

clean:
	rm -f InstaGib main.o fasta.o

test:
	./InstaGib pLux.fasta
