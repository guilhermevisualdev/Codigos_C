#include <stdio.h>

int main() {
    int temperatura;

    printf("Digite a temperatura: ");
    scanf("%d", &temperatura);

    if (temperatura < 0 || temperatura > 40) {
        printf("Temperatura inválida");
    } else {
        if (temperatura >= 30) {
            printf("Dia quente");
        } else {
            if (temperatura >= 20) {
                printf("Dia agradável");
            } else {
                printf("Dia frio");
            }
        }
    }

    return 0;
}
