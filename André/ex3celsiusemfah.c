#include <stdio.h>
int main (){
    int a, conversão;

    printf("Digite a temperatura (em celsius) para ser convertido em Fahrenheit: ");
    scanf("%d", &a);

    conversão = (a*1.8) + 32;


    printf("A temperatura em Fahrenheit é de: %d", conversão);

}    //F = C x 1,8 + 32