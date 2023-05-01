.PHONY: all clean

all: test_c

test_c: test_c.c
	gcc -Wall -g -o test_c test_c.c

clean:
	rm -f test_c
