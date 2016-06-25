execute: main.o IntegerArray.o
	g++ -g main.o IntegerArray.o -o execute

main.o: main.cpp IntegerArray.h
	g++ -Wall -g -c main.cpp

IntegersArray.o: IntegerArray.cpp IntegerArray.h
	g++ -Wall -g -c IntegerArray.cpp

clean:
	rm -f *.o execute
