#include <stdio.h>

int soma(int a, int b) {
    int resultado = a + b;
   return resultado;
}
int main() {
    printf("Soma: %d\n", soma(5, 3));
    return 0;
}