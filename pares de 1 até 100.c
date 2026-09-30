#include <stdio.h>

int main() {
int i;

    for (i = 1; i <= 100; i++) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            printf("%d ", i);  // Exibe o número par
        }
    }
    return 0;
}
