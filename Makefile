.PHONY: all clean

all: main

main: main.c
	gcc -Wall -g -o main main.c

clean:
	rm -f main

run:
	./main
