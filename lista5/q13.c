
int main() {
    float vetor[5];
    float maior, menor;
    int pos_maior = 0, pos_menor = 0;
    int i;

    printf("Digite o 1o valor: ");
    scanf("%f", &vetor[0]);
    maior = vetor[0];
    menor = vetor[0];

    for (i = 1; i < 5; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%f", &vetor[i]);

        if (vetor[i] > maior) {
            maior = vetor[i];
            pos_maior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            pos_menor = i;
        }
    }

    printf("\nO maior valor (%.2f) esta no indice: %d\n", maior, pos_maior);
    printf("O menor valor (%.2f) esta no indice: %d\n", menor, pos_menor);

    return 0;
}