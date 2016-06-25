execute: main.o sort.o
	g++ -g -Wall main.o sort.o -o execute

main.o: main.cpp sort.h
	g++ -g -Wall -c main.cpp

sort.o: sort.cpp sort.h
	g++ -g -Wall -c sort.cpp

clean:
	rm -f *.o execute
