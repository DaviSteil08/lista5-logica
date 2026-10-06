#include <stdio.h>

int main() {
    int vetor[6];
    int i, numero;

    printf("Digite 6 numeros PARES:\n");
    for (i = 0; i < 6; i++) {
        do {
            printf("Digite o %do numero par: ", i + 1);
            scanf("%d", &numero);

            if (numero % 2 != 0) {
                printf("Numero invalido! Por favor, insira um valor par.\n");
            }
        } while (numero % 2 != 0);

        vetor[i] = numero;
    }

    printf("\nValores pares na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}