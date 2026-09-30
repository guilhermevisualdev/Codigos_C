#include <stdio.h>
int main(){
    int a;
    
    printf("Digite um número: ");
    scanf("%d", &a);
    
    if(a % 2 == 0){
        printf("O número %d é par", a);
    }else{
        printf("O número %d é ímpar", a);
    }
    return 0;
}