#include <stdio.h>

int main() {
    int num;

    printf("Digite um número para exibir sua tabuada: ");
    scanf("%d", &num);

    printf("Tabuada do número %d (somente resultados ímpares):\n", num);
    for (int i = 1; i <= 10; i++) {
        if ((num * i) % 2 != 0) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    }

    return 0;
}
