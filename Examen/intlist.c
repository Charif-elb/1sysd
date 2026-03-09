#include <stdio.h>
#include <stdlib.h>

struct Node {
    int valeur;
    struct Node *next;
};

struct Node *nouveau_noeud(int v)
{
    struct Node *n = malloc(sizeof(struct Node));
    if (!n) return NULL;
    n->valeur = v;
    n->next   = NULL;
    return n;
}

void afficher(const struct Node *head)
{
    const struct Node *p = head;
    while (p != NULL) {
        printf("%d -> ", p->valeur);
        p = p->next;
    }
    printf("NULL\n");
}

void liberer(struct Node *head)
{
    struct Node *tmp;
    while (head != NULL) {
        tmp  = head->next;
        free(head);
        head = tmp;
    }
}

int somme(const struct Node *head)
{
    const struct Node *p;
    int total = 0;

    for (p = head; p != NULL; p = p->next)
        total += p->valeur;

    return total;
}

float moyenne(const struct Node *head)
{
    const struct Node *p;
    int total = 0;
    int n = 0;

    for (p = head; p != NULL; p = p->next) {
        total += p->valeur;
        n++;
    }
    return (float) total / n;
}

struct Node *ajouter_debut(struct Node *head, int v)
{
    struct Node *n = nouveau_noeud(v);
    n->next = head;
    return n;
}

int main(void)
{
    struct Node *liste = NULL;
    int k;

    for (k = 5; k >= 1; k--)
        liste = ajouter_debut(liste, k);

    afficher(liste);
    printf("Total : %d\n", somme(liste));
    printf("Moyenne : %.2f\n", moyenne(liste));

    liste = ajouter_debut(liste, 99);
    afficher(liste);
    printf("Total : %d\n", somme(liste));
    printf("Moyenne : %.2f\n", moyenne(liste));

    liberer(liste);
    return 0;
}
