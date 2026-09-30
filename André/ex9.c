#include <stdio.h>
#include <math.h>

void resolver_equacao_quadratica(float a, float b, float c) {
    float delta = b * b - 4 * a * c; 

    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes reais são: x1 = %.2f e x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        
        float x = -b / (2 * a);
        printf("A raiz real é: x = %.2f\n", x);
    } else {
        float parte_real = -b / (2 * a);
        float parte_imaginaria = sqrt(-delta) / (2 * a);
        printf("As raízes são complexas:\n");
        printf("x1 = %.2f + %.2fi\n", parte_real, parte_imaginaria);
        printf("x2 = %.2f - %.2fi\n", parte_real, -parte_imaginaria);
    }
}

int main() {
    float a, b, c;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Não é uma equação do segundo grau! O coeficiente 'a' não pode ser zero.\n");
    } else {
        resolver_equacao_quadratica(a, b, c);
    }
