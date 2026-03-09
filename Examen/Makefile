.PHONY: all clean

# Changer cette ligne en l'adapter à chaque TP
<<<<<<< HEAD
PROGS=countchar1 countchar2 countint intlist tconvert
=======
PROGS=countchar1 countchar2 countint intlist tconvert.c
>>>>>>> 5ef8028391737f5ca35d395ffd6564a31e3f43ad
CC=gcc
CFLAGS=
# Rien à changer à partir d'ici

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< 

%.s: %.c
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.s
