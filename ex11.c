#include <stdio.h>

int main(){
    int número, soma = 0;
    printf("Digite um número, e para sair digite 0\n");
    while(1){
        printf("Digite um número: ");
        scanf("%d", &número);
        if (número == 0){
            break; //sair do looping
        }
        soma = soma + número;
    }
    printf("total: %d", soma;){
}