#include <stdio.h>
#include "biblioteca.h"

int main() {
    Operador op;

    printf("Digite o valor de A / Primeiro Número : ");
    scanf("%lf", &op.A);

    printf("Digite o valor de B / Segundo Número : ");
    scanf("%lf", &op.B);

    Operador resultado;

    resultado = soma(op);
    printf("Soma: %.2lf\n", resultado.resultado);

    resultado = sub(op);
    printf("Subtração: %.2lf\n", resultado.resultado);

    resultado = mult(op);
    printf("Multiplicaçção: %.2lf\n", resultado.resultado);

    resultado = div(op);
    printf("Divisão: %.2lf\n", resultado.resultado);

    return 0;
}
