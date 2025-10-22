#Football makefile
CC = gcc
CFLAGS = -Wall 

all: lab8_1 lab8_2
 
lab8_1: lab8_1.c
	$(CC) $(CFLAGS) lab8_1.c -o lab8_1 
lab8_2: lab8_2.c 
	$(CC) $(CFLAGS) lab8_2.c -o lab8_2 
clean:
	rm -rf *.o -f lab8_1 lab8_2 

