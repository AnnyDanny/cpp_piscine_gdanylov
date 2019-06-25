CC=g++

CFLAGS=-c -Wall

all: awesome

awesome: MyAwesome.o main.o PhoneBook.o
			$(CC) MyAwesome.o main.o PhoneBook.o

megaphone.o: MyAwesome.cpp main.cpp PhoneBook.cpp
			$(CC) $(CFLAGS) MyAwesome.cpp main.cpp PhoneBook.cpp

clean:
		rm -rf *o MyAwesome a.out 