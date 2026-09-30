#include <stdio.h>
int main (){
    int a, b, c, d, e, soma;

    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite um número: ");
    scanf("%d", &b);
    printf("Digite um número: ");
    scanf("%d", &c);
    printf("Digite um número: ");
    scanf("%d", &d);
    printf("Digite um número: ");
    scanf("%d", &e);

    soma = a + b + c + d + e;

    printf("A soma dos cinco números é de: %d", soma);

    return 0;
    
}