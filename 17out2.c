#include <stdio.h>

int main() {
    float valorinicial, taxa, tempo, valorfinaltotal;

    printf("Digite o valor inicial: ");
    scanf("%f", &valorinicial);

    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &taxa);
    taxa = taxa / 100;

    printf("Digite o tempo de aplicação (em anos): ");
    scanf("%f", &tempo);

    valorfinaltotal = valorinicial + (valorinicial * taxa * tempo);

    printf("O valor final total após os investimentos será de: R$ %.2f\n", valorfinaltotal);

    return 0;
}
