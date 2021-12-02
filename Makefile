CC=g++
CFLAGS=-std=c++11 -Wall -Wextra -pedantic

day2part2: day2part2.o
	$(CC) -o day2part2.exe day2part2.o

day2part2.o: day2part2.cpp
	$(CC) $(CFLAGS) -c day2part2.cpp

day2part1: day2part1.o
	$(CC) -o day2part1.exe day2part1.o

day2part1.o: day2part1.cpp
	$(CC) $(CFLAGS) -c day2part1.cpp

day1part2: day1part2.o
	$(CC) -o day1part2.exe day1part2.o

day1part2.o: day1part2.cpp
	$(CC) $(CFLAGS) -c day1part2.cpp

day1: day1.o
	$(CC) -o day1.exe day1.o

day1.o: day1.cpp
	$(CC) $(CFLAGS) -c day1.cpp

clean:
	rm -f *.o *.exe