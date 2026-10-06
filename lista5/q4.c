#include <stdio.h>

int main() {
    int vetor[8];
    int x, y, i;
    int soma;

    printf("Digite 8 valores inteiros:\n");
    for (i = 0; i < 8; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    do {
        printf("\nDigite o indice X (0 a 7): ");
        scanf("%d", &x);
    } while (x < 0 || x > 7);

    do {
        printf("Digite o indice Y (0 a 7): ");
        scanf("%d", &y);
    } while (y < 0 || y > 7);

    soma = vetor[x] + vetor[y];
    printf("A soma dos valores nas posicoes %d e %d e: %d\n", x, y, soma);

    return 0;
}