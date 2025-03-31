#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    int idade, convite;


    printf("Digite seu nome: ");
    fgets(nome, (nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Você possui um convite? (1 - Sim, 0 - Não): ");
    scanf("%d", &convite);


    if (convite != 0 && convite != 1) {
        printf("Resposta inválida. Não é permitido entrar.\n");
    } else {

        if (idade >= 18 && convite == 1) {
            printf("Você pode entrar!\n");
        } else if (idade < 18) {
            printf("Desculpe, você é menor de idade e não pode entrar.\n");
        } else if (convite == 0) {
            printf("Desculpe, você não tem um convite válido.\n");
        }
    }

    return 0;
}
