#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o tamanho do primeiro lado do triângulo: ");
    scanf("%f", &a);
    printf("Digite o tamanho do segundo lado do triângulo: ");
    scanf("%f", &b);
    printf("Digite o tamanho do terceiro lado do triângulo: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            printf("O triângulo é equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        printf("Os lados informados não podem formar um triângulo.\n");
    }

    return 0;
}
