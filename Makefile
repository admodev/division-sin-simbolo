all: compile run

compile:
	gcc --std=c99 -o bin/division src/main.c

run:
	./bin/division

