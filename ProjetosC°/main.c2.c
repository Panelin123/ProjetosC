#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[50];
    int idade, convite;

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    if (scanf("%d", &idade) != 1) {
        printf("Idade inválida!\n");
        return 1;
    }


    if (idade < 18) {
        printf("Desculpe %s, você é menor de idade e não pode entrar.\n", nome);
        return 0;
    }


    printf("Você possui um convite? (1 - Sim, 0 - Não): ");
    if (scanf("%d", &convite) != 1 || (convite != 0 && convite != 1)) {
        printf("Resposta inválida. Não é permitido entrar.\n");
        return 1;
    }

    if (convite == 1) {
        printf("%s, você pode entrar!\n", nome);
    } else {
        printf("Desculpe %s, você não tem um convite válido.\n", nome);
    }

    return 0;
}
