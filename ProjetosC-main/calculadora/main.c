#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, resultado;
    char operador;

    printf("Digite o Operador (+, -, *, /):\n");
    scanf(" %c", &operador);

    printf("Digite o primeiro numero:\n");
    scanf("%f", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%f", &num2);

    if (operador == '+') {
        resultado = num1 + num2;
        printf("O resultado da soma é: %.2f\n", resultado);
    } else if (operador == '-') {
        resultado = num1 - num2;
        printf("O resultado da subtracao é: %.2f\n", resultado);
    } else if (operador == '*') {
        resultado = num1 * num2;
        printf("O resultado da multiplicacao é: %.2f\n", resultado);
    } else if (operador == '/') {
        if (num2 == 0) {
            printf("Erro: divisao por zero!\n");
        } else {
            resultado = num1 / num2;
            printf("O resultado da divisao é: %.2f\n", resultado);
        }
    } else {
        printf("Operador invalido.\n");
    }

    return 0;
}
