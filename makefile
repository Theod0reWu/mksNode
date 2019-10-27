all: node.o main.o
	gcc -o program main.o node.o
node.o: node.c node.h
	gcc -c -g node.c
main.o: main.c node.h
	gcc -c -g main.c
run:
	./program
clean:
	rm *.o
	rm program
