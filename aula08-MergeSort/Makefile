all: clean compile

compile: vector sort main
	gcc vector.o sort.o main.o -o main

main:
	gcc -c main.c -o main.o

sort:
	gcc -c sort.c -o sort.o

vector:
	gcc -c vector.c -o vector.o

run:
	./main	

clean:
	rm -rfv main
	rm -rfv *.o
