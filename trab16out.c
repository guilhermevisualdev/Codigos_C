#include <stdio.h>
#include <string.h>

int main() {
    int tipo;
    char titular[30];
    int numero;
    float saldo = 0;
    int opcao;
    int contaCadastrada = 0;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Cadastrar conta\n");
        printf("2. Mostrar conta\n");
        printf("3. Depositar\n");
        printf("4. Sacar\n");
        printf("5. Mostrar saldo\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Tipo de conta (1 = corrente e 2 = poupança): ");
                scanf("%d", &tipo);
                printf("Nome do titular: ");
                getchar();
                fgets(titular, sizeof(titular), stdin);
                titular[strcspn(titular, "\n")] = 0;
                printf("Número da conta: ");
                scanf("%d", &numero);
                printf("Saldo inicial: ");
                scanf("%f", &saldo);
                contaCadastrada = 1;
                printf("Conta cadastrada.\n");
                break;

            case 2:
                if (contaCadastrada) {
                    printf("Tipo de conta: %s\n", tipo == 1 ? "Corrente" : "Poupança");
                    printf("Titular: %s\n", titular);
                    printf("Número: %d\n", numero);
                    printf("Saldo: %.2f\n", saldo);
                } else {
                    printf("Nenhuma conta cadastrada.\n");
                }
                break;

            case 3:
                if (contaCadastrada) {
                    float valor;
                    printf("Valor a depositar: ");
                    scanf("%f", &valor);
                    saldo >= valor;
                    printf("Depósito realizado.\n");
                } else {
                    printf("Nenhuma conta cadastrada.\n");
                }
                break;

            case 4:
                if (contaCadastrada) {
                    float valor;
                    printf("Valor a sacar: ");
                    scanf("%f", &valor);
                    if (valor <= saldo) {
                        saldo -= valor;
                        printf("Saque realizado.\n");
                    } else {
                        printf("Saldo insuficiente.\n");
                    }
                } else {
                    printf("Nenhuma conta cadastrada.\n");
                }
                break;

            case 5:
                if (contaCadastrada) {
                    printf("Saldo atual: %.2f\n", saldo);
                } else {
                    printf("Nenhuma conta cadastrada.\n");
                }
                break;

            case 6:
                printf("Finalizado.\n");
                return 0;

            default:
                printf("Opção inválida.\n");
        }
    }

    return 0;
}
