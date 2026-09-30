#include <stdio.h>

int main() {
    float valordamercadoria, entrada;
    int prestacao;

    printf("Digite o valor da mercadoria (em reais): ");
    scanf("%f", &valordamercadoria);

    prestacao = (int)
    (valordamercadoria / 3);

    entrada = valordamercadoria - 2 * prestacao;

    if (entrada < prestacao) {
        entrada = prestacao;
    }

    printf("Entrada: %.2f reais\n", entrada);
    printf("Cada uma das duas prestações: %d reais\n", prestacao);

    return 0;
}
