#include <stdio.h>

float c_to_f(float c)
{
    return (c * 9.0f / 5.0f) + 32.0f;
}

float f_to_c(float f)
{
    return (f - 32.0f) * 5.0f / 9.0f;
}

int main(void)
{
    int option;
    float t;

    printf("=== Convertisseur de temperature ===\n");
    printf("1 - Celsius -> Fahrenheit\n");
    printf("2 - Fahrenheit -> Celsius\n");
    printf("Votre choix : ");
    scanf("%d", &option);

    if (option == 1) {
        printf("Temperature en Celsius : ");
        scanf("%f", &t);
        printf("%.2f C = %.2f F\n", t, c_to_f(t));
    }
    else if (option == 2) {
        printf("Temperature en Fahrenheit : ");
        scanf("%f", &t);
        printf("%.2f F = %.2f C\n", t, f_to_c(t));
    }
    else {
        printf("Option non valide.\n");
    }

    return 0;
}
