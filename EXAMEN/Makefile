.PHONY: all clean

PROGS=tconvert countchar1 countchar2 countint intlist
CC=gcc
CFLAGS=

all: $(PROGS)

tconvert: tconvert.c
	$(CC) $(CFLAGS) -o tconvert tconvert.c
countchar1: countchar1.c
	$(CC) $(CFLAGS) -o countchar1 countchar1.c		
countchar2: countchar2.c
	$(CC) $(CFLAGS) -o countchar2 countchar2.c
countint: countint.c
	$(CC) $(CFLAGS) -o countint countint.c
intlist: intlist.c
	$(CC) $(CFLAGS) -o intlist intlist.c

clean:
	rm -f $(PROGS)