CC=g++

CFLAGS=-c -Wall

all: awesome

awesome: MyAwesome.o main.o
			$(CC) MyAwesome.o main.o

megaphone.o: MyAwesome.cpp main.cpp
			$(CC) $(CFLAGS) MyAwesome.cpp main.cpp

clean:
		rm -rf *o MyAwesome a.out 