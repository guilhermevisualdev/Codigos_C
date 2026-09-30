#include <stdio.h>

int main(){
    int a, b;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número ");
    scanf("%d", &b);

    if (a > b){
        printf("O primeiro número é maior que o segundo.\n");
    }
    
    if (a < b){
        printf("O segundo númmero é maior que o primeiro\n");
    }

    if(a == b) {
        printf("Ambos os números são iguais.\n");
    }

    return 0;
}