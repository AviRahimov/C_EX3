CC = gcc
CFLAGS = -g -Wall

all: isort txtfind

isort:
	$(CC) $(CFLAGS) -o isort sort.c

txtfind:
	$(CC) $(CFLAGS) -o txtfind str_search.c

clean:
	rm -f *.o *.txt isort txtfind
