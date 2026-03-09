#include <stdio.h>

int compter(const char *texte, char c)
{
    int k = 0;
    int total = 0;

    while (texte[k] != '\0') {
        if (texte[k] == c)
            total++;
        k++;
    }
    return total;
}

int main(int argc, char **argv)
{
    if (argc < 3) {
        printf("Utilisation : %s <chaine> <caractere>\n", argv[0]);
        return 1;
    }

    char c = argv[2][0];
    int resultat = compter(argv[1], c);

    printf("%d\n", resultat);
    return 0;
}
