CC = g++

main : main.o Stack.o Point.o
	$(CC) main.o Stack.o Point.o -o stack
main.o : main.cpp
	$(CC) -c main.cpp
Stack.o : Stack.cpp ClassStack.h
	$(CC) -c Stack.cpp
Point.o : Point.cpp ClassPoint.h
	$(CC) -c Point.cpp