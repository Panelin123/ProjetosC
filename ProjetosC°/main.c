#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    int idade;
    float altura;
    char genero[20];


    printf("Diga seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Diga sua idade: ");
    scanf("%d", &idade);

    printf("Diga sua altura: ");
    scanf("%f", &altura);


    printf("Diga seu genero: ");
    scanf("%s", genero);


    printf("\nNome: %s", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Gênero: %s\n", genero);

    return 0;
}
