#include <stdio.h>

int main() {
    float conjunto_original[10];
    float conjunto_quadrados[10];
    int i;

    printf("Digite 10 numeros reais:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &conjunto_original[i]);

        conjunto_quadrados[i] = conjunto_original[i] * conjunto_original[i];
    }

    printf("\nConjunto Original:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", conjunto_original[i]);
    }

    printf("\n\nConjunto dos Quadrados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", conjunto_quadrados[i]);
    }
    printf("\n");

    return 0;
}