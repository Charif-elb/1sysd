#include <stdio.h>

int compter_int(const int *tab, int n, int target)
{
    int idx;
    int nb = 0;

    for (idx = 0; idx < n; idx++) {
        if (tab[idx] == target)
            nb++;
    }
    return nb;
}

int main(void)
{
    int a[5]  = { 2, 42, 1, 42, 9 };
    int b[10] = { 1,2,3,4,5,6,7,8,9,10 };

    printf("%d dans a : %d fois.\n", 42, compter_int(a, 5, 42));
    printf("%d dans a : %d fois.\n",  2, compter_int(a, 5,  2));
    printf("%d dans b : %d fois.\n", 10, compter_int(b, 10, 10));
    printf("%d dans b : %d fois.\n", 42, compter_int(b, 10, 42));

    return 0;
}
