CC=clang
CFLAGS=-std=c99 -Wall -Wextra -pedantic -Wstrict-overflow -fno-strict-aliasing

all: lexer.o
	$(CC) $(CFLAGS) lexer.o test.c -o test

token: token.h token.c
	$(CC) $(CFLAGS) -c token.c

lexer: token.o lexer.h lexer.c
	$(CC) $(CFLAGS) token.o -c lexer.c

clean:
	rm token.o test
