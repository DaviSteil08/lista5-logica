#include <stdio.h>

int main() {
    float vetor[10];
    int i, quantidade_negativos = 0;
    float soma_positivos = 0.0;

    printf("Digite 10 numeros reais:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &vetor[i]);

        if (vetor[i] < 0) {
            quantidade_negativos++;
        } else if (vetor[i] > 0) {
            soma_positivos += vetor[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\n", quantidade_negativos);
    printf("Soma dos numeros positivos: %.2f\n", soma_positivos);

    return 0;
}