#Football makefile
CC = gcc
CFLAGS = -c -Wall 

all: prog 

prog: lab8.o 
	$(CC) lab8.o -o prog 
lab8.o: lab8.c
	$(CC) $(CFLAGS) lab8.c 

clean:
	rm -rf *.o 

