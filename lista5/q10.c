#include <stdio.h>

int main() {
    float notas[15];
    float soma = 0.0, media;
    int i;

    printf("Digite as notas de 15 alunos:\n");
    for (i = 0; i < 15; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 15.0;

    printf("\nA media geral das notas da turma e: %.2f\n", media);

    return 0;
}