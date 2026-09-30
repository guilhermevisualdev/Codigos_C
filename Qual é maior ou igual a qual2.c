#include <stdio.h>
int main(){
    int a, b;
    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro númmero: ");
    scanf("%d", &b);

    if(a > b){
        printf("O primeiro número é maior que o segundo");

    }else if (a < b){
        printf("O segundo número é maior que o primeiro");
    }else{
        printf("Ambos os números são iguais");
    }
    return 0;
}
