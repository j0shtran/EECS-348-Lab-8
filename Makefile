#Football makefile
CC = gcc
CFLAGS = -c -Wall 

all: prog 

prog: lab8_1.o 
	$(CC) lab8_1.o -o prog 
lab8_1.o: lab8_1.c
	$(CC) $(CFLAGS) lab8_1.c 

clean:
	rm -rf *.o 

