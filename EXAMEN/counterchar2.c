#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compter_caractere(const char *txt, char c, int ignore_case)
{
    int index = 0;
    int nb = 0;

    while (txt[index] != '\0') {
        char actuel = txt[index];

        if (ignore_case) {
            if (tolower(actuel) == tolower(c))
                nb++;
        } else {
            if (actuel == c)
                nb++;
        }
        index++;
    }
    return nb;
}

int main(int argc, char **argv)
{
    int mode_insensible = 0;

    if (argc < 3) {
        printf("Utilisation : %s <chaine> <caractere> [-i]\n", argv[0]);
        return 1;
    }

    if (argc >= 4 && strcmp(argv[3], "-i") == 0)
        mode_insensible = 1;

    char cible = argv[2][0];
    int resultat = compter_caractere(argv[1], cible, mode_insensible);

    printf("%d\n", resultat);
    return 0;
}
