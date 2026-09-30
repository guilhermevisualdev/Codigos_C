#include <stdio.h>
#include <math.h>

//área triângulo = base x altura /2
//área retângulo = base x altura
//área círculo = πr^2

int main() {
    int número;
    float areafigura;

    printf("Escolha uma figura geométrica para saber a área:\n");
    printf("1. Triângulo\n");
    printf("2. Retângulo\n");
    printf("3. Círculo\n");
    printf("Digite um número para escolher qual figura deseja calcular: ");
    scanf("%d", &número);

    switch (número) {
        case 1: // Triângulo
            {
                float base, altura;
                printf("Digite a base do triângulo: ");
                scanf("%f", &base);
                printf("Digite a altura do triângulo: ");
                scanf("%f", &altura);
                areafigura = (base * altura) / 2;
                printf("A área do triângulo é: %.2f\n", areafigura);
            }
            break;
        
        case 2: // Retângulo
            {
                float base, altura;
                printf("Digite a largura do retângulo: ");
                scanf("%f", &base);
                printf("Digite a altura do retângulo: ");
                scanf("%f", &altura);
                areafigura = base * altura;
                printf("A área do retângulo é: %.2f\n", areafigura);
            }
            break;

        case 3: // Círculo
            {
                float raio;
                printf("Digite o raio do círculo: ");
                scanf("%f", &raio);
                areafigura = M_PI * pow(raio, 2);
                printf("A área do círculo é: %.2f\n", areafigura);
            }
            break;

        default:
            printf("Opção inválida\n");
    }

    return 0;
}