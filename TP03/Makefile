.PHONY: all clean Makefile

# Changer cette ligne en l'adapter à chaque TP
PROGS=calc fib fib.s fib.S
CC=gcc
CFLAGS=
# Rien à changer à partir d'ici

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

%.S: %
	objdump -d $< > $@

%.s: %.c
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.s *.S
