CC = g++
CFLAGS = -std=c++11

all: change-case

change-case: main.o change_case.o
	$(CC) $(CFLAGS) main.o change_case.o -o change-case

main.o: main.cc change_case.h
	$(CC) $(CFLAGS) -c main.cc

change_case.o: change_case.cc change_case.h
	$(CC) $(CFLAGS) -c change_case.cc

clean:
	rm -f *.o change-case

