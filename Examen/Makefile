.PHONY: all clean

# Changer cette ligne en l'adapter à chaque TP
PROGS=countchar1 countchar2 countint intlist tconvert
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