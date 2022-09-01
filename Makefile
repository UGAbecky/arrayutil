FLAGS: -Wall -pedantic-errors
compile: arrayutil.h arrayutil.c main.c
	g++ -c arrayutil.h arrayutil.c main.c
linking: compile
	g++ main.o arrayutil.o -o lab03
run: linking
	./lab03
clean:
	rm -rf *o main
