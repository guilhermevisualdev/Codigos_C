#include <stdio.h>
int main (){
    int a = 10;
    int b;

    printf("Digite um número: ");
    scanf("%d", &b);

    if (b > 10){
        printf("O número %d é maior que 10 (%d > 10)", b, b);
    }else{
        printf("O número %d é menor que 10 (%d < 10)", b, b);
    }
    
    return 0;
}