#include <stdio.h>

int main() {
    int vetor[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o %do valor inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores digitados:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}