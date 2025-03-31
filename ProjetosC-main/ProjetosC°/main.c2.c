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
        printf("Idade inv�lida!\n");
        return 1;
    }


    if (idade < 18) {
        printf("Desculpe %s, voc� � menor de idade e n�o pode entrar.\n", nome);
        return 0;
    }


    printf("Voc� possui um convite? (1 - Sim, 0 - N�o): ");
    if (scanf("%d", &convite) != 1 || (convite != 0 && convite != 1)) {
        printf("Resposta inv�lida. N�o � permitido entrar.\n");
        return 1;
    }

    if (convite == 1) {
        printf("%s, voc� pode entrar!\n", nome);
    } else {
        printf("Desculpe %s, voc� n�o tem um convite v�lido.\n", nome);
    }

    return 0;
}
