#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    float prova1, prova2, media;
    int faltas;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite a nota da sua prova 1 (0 a 100): ");
    scanf("%f", &prova1);

    printf("Digite a nota da sua prova 2 (0 a 100): ");
    scanf("%f", &prova2);

    printf("Quantas faltas você teve? ");
    scanf("%d", &faltas);

    media = (prova1 + prova2) / 2;

    printf("\nAluno: %s\n", nome);
    printf("Média: %.2f\n", media);
    printf("Faltas: %d\n", faltas);

    if (faltas > 15) {
        printf("Você foi reprovado por excesso de faltas.\n");
    } else if (media < 5.0) {
        printf("Você está reprovado. Faça o Se liga!\n");
    } else if (media < 7.0) {
        printf("Você está de recuperação. Estude mais para melhorar sua nota.\n");
    } else {
        printf("Você passou! Curta suas férias!\n");
    }

    return 0;
}
