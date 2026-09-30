#include <stdio.h>

void soma(float a, float b, float *resultados);
void sub(float a, float b, float *resultados);
void mult(float a, float b, float *resultados);
void div(float a, float b, float *resultados);

int main(){
    float a, b, somaponteiro, subponteiro, divponteiro, multponteiro;

    printf("Digite o valor do primeiro número a ser calculado: ");
    scanf("%f", &a);

    printf("Agora digite o valor do segundo número a ser calculado: ");
    scanf("%f", &b);

    soma(a, b, &somaponteiro);
    sub(a, b, &subponteiro);
    mult(a, b, &multponteiro);
    div(a, b, &divponteiro);

    printf("A soma dos dois números é de: %.2f", somaponteiro);
    printf("\nA subtração dos dois números é de: %.2f", subponteiro);
    printf("\nA multiplicação dos dois números é de: %.2f", multponteiro);
    printf("\nA divisão dos dois números é de: %.2f", divponteiro);

    return 0;
}

void soma (float a, float b, float *resultado){
    *resultado = a + b;
}

void sub (float a, float b, float *resultado){
    *resultado = a - b;
}

void mult (float a, float b, float *resultado){
    *resultado = a * b;
}

void div (float a, float b, float *resultado){
    *resultado = a / b;
}


