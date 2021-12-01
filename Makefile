CC=g++
CFLAGS=-std=c++11 -Wall -Wextra -pedantic

day1: day1.o
	$(CC) -o day1 day1.o

day1.o: day1.cpp
	$(CC) $(CFLAGS) -c day1.cpp

clean:
	rm -f *.o day1