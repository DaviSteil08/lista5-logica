
#include <stdio.h>

int main() {
    int vetor[10];
    int i, maior, posicao_maior = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %do numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i;
        }
    }

    printf("\nVetor lido: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nMaior elemento: %d\n", maior);
    printf("Posicao no vetor (indice): %d\n", posicao_maior);

    return 0;
}