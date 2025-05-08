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
        printf("O resultado da soma �: %.2f\n", resultado);
    } else if (operador == '-') {
        resultado = num1 - num2;
        printf("O resultado da subtracao �: %.2f\n", resultado);
    } else if (operador == '*') {
        resultado = num1 * num2;
        printf("O resultado da multiplicacao �: %.2f\n", resultado);
    } else if (operador == '/') {
        if (num2 == 0) {
            printf("Erro: divisao por zero!\n");
        } else {
            resultado = num1 / num2;
            printf("O resultado da divisao �: %.2f\n", resultado);
        }
    } else {
        printf("Operador invalido.\n");
    }

    return 0;
}
