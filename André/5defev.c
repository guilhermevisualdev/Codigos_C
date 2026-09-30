#include <stdio.h>
int main(){
    int n1, n2, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma é: %d\n", soma);

    return 0;
}