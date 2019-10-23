all: node.o main.o
	gcc -o program main.o node.o
node.o: node.c node.h
	gcc -c node.c
main.o: main.c node.h
	gcc -c main.c
run:
	./program
	
