CC=g++

CFLAGS=-c -Wall

all: megaphone

megaphone: megaphone.o
			$(CC) megaphone.o

megaphone.o: megaphone.cpp
			$(CC) $(CFLAGS) megaphone.cpp	

clean:
		rm -rf *o megaphone a.out 