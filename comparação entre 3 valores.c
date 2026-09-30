#include <stdio.h>
int main(){
    int a, b, c;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    if(a > b && a > c){
        printf("O primeiro número é maior que o segundo (%d > %d) e maior que o terceiro (%d > %d)", a, b, a, c);

    }else if(b > a && b > c){
        printf("O segundo número é maior que o primeiro (%d > %d) e maior que o terceiro (%d > %d)", b, a, b, c);

    }else if(c > a && c > b){
        printf("O terceiro número é maior que o primeiro (%d > %d) e maior que o segundo (%d > %d)", c, a, c, b);

    }else if(a == b && a == c){
        printf("Todos os números são iguais (%d = %d = %d)", a, b, c);

    }else if(b > c && b > a){
        printf("O segundo é maior que o primeiro (%d > %d) e maior que o terceiro (%d > %d)", b, a, b, c);
    }

return 0;
}