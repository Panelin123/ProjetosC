#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, resultado;
    char operador;

    printf("Digite o Operador(+, -, * /, %) \n");
    scanf("%c", &operador);

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    if(operador == '+'){
        resultado = num1 +num2;
        printf("O resultado da soma é: %d \n", resultado);
    }

    if(operador == '-')
    resultado = num1 - num2;
    printf("O resultado da soma é: %d \n", resultado);
    }

    if(operador == '*')
    resultado = num1 * num2;
    printf("O resultado da soma é: %d \n", resultado);
    }

    if(operador == '/')
    resultado = num1 / num2;
    printf("O resultado da soma é: %d \n", resultado);
    }

    return 0;
}
