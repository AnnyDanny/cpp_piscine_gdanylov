CC=g++

CFLAGS=-c -Wall

all: Pony

Pony: Pony.o main.o
			$(CC) Pony.o main.o

Pony.o: Pony.cpp main.cpp
			$(CC) $(CFLAGS) Pony.cpp main.cpp

clean:
		rm -rf *o Pony a.out 