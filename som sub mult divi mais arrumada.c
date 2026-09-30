#include <stdio.h>
int main(){
    int a, b, soma, sub, mult, divi;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    soma = a + b;
    sub = a - b;
    mult = a * b;
    divi = a / b;


    printf("\n%d + %d = %d", a, b, soma);
    printf("\n%d - %d = %d", a, b, sub);
    printf("\n%d * %d = %d", a, b, mult);
    printf("\n%d / %d = %d", a, b, divi);

    return 0;
}