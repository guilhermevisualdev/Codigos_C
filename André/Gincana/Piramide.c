#include <stdio.h>

int main() {
    int linhas;

    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= linhas - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
