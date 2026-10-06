#include <stdio.h>

int main() {
    int vetor[6];
    int i;

    printf("Digite 6 valores inteiros:\n");
    for (i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
 
    printf("\nValores na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}