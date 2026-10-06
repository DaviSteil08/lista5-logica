#include <stdio.h>

int main() {
    float vetor[5];
    float maior, menor, soma = 0.0, media;
    int i;

    printf("Digite o 1o valor: ");
    scanf("%f", &vetor[0]);
    maior = vetor[0];
    menor = vetor[0];
    soma = vetor[0];

    for (i = 1; i < 5; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%f", &vetor[i]);

        soma += vetor[i];

        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    media = soma / 5.0;

    printf("\nValores lidos: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", vetor[i]);
    }

    printf("\n\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}