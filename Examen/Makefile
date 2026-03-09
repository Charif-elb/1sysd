
CC      := gcc
CFLAGS  := -Wall -Wextra -Werror -std=c11

# Nom de l'exécutable
EXEC    := examen

# Liste des fichiers du dossier Examen
SRC     := countchar1.c countchar2.c countint.c intlist.c
OBJ     := $(SRC:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
    $(CC) $(OBJ) -o $(EXEC)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
