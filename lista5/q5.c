#include <stdio.h>

int main() {
    int vetor[10];
    int i, quantidade_pares = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);


        if (vetor[i] % 2 == 0) {
            quantidade_pares++;
        }
    }

    printf("\nO vetor possui %d valor(es) par(es).\n", quantidade_pares);

    return 0;
}