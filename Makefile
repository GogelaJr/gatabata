#
#
#
CC=gcc
CFLAGS=-Wall


all : word_counting
.PHONY : all

longest_word_1 : longest_word.o
	$(CC) $(CFLAGS) -o longest_word_1 longest_word.o


longest_word.o : longest_word.c
	$(CC) -Wall -c -o longest_word.o longest_word.c


debug:clean longest_word.c
	$(CC) -Wall -g -o test longest_word.c
	gdb -tui  test



.PHONY: clean
clean :
	rm -rf *.o
