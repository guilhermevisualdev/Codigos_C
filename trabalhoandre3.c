#include <stdio.h>

int main() {
    int opcao;
    float num1, num2;
    int a, i, j, primo;

    do {
        printf("1. Calcular a soma de dois números\n");
        printf("2. Calcular o fatorial de um número\n");
        printf("3. Verificar se um número é primo\n");
        printf("4. Sair\n");
        printf("Escolha uma das opções: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                printf("A soma é: %.2f\n", num1 + num2);
                break;

            case 2:
                printf("Digite um número: ");
                scanf("%d", &a);
                j = 1;
                for (i = 1; i <= a; i++) {
                    j *= i;
                }
                printf("O fatorial de %d é: %d\n", a, j);
                break;

            case 3:
                printf("Digite um número: ");
                scanf("%d", &a);
                primo = 1;
                if (a <= 1) {
                    primo = 0;

                } else {

                for (i = 2; i < a; i++) {
                    if (a % i == 0) {
                    primo = 0;
                    break;
                        }

                    }
                }

                if (primo)
                    printf("%d é um número primo.\n", a);
                else
                    printf("%d não é um número primo.\n", a);
                break;

            case 4:
                printf("Você saiu do programa com sucesso\n");
                break;

            default:
                printf("Opção inválida\n");

        }
        
    } while (opcao != 4);

    return 0;
}
