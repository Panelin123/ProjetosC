#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    int idade, convite;


    printf("Digite seu nome: ");
    fgets(nome, (nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Voc� possui um convite? (1 - Sim, 0 - N�o): ");
    scanf("%d", &convite);


    if (convite != 0 && convite != 1) {
        printf("Resposta inv�lida. N�o � permitido entrar.\n");
    } else {

        if (idade >= 18 && convite == 1) {
            printf("Voc� pode entrar!\n");
        } else if (idade < 18) {
            printf("Desculpe, voc� � menor de idade e n�o pode entrar.\n");
        } else if (convite == 0) {
            printf("Desculpe, voc� n�o tem um convite v�lido.\n");
        }
    }

    return 0;
}
