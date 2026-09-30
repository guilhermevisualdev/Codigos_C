#include <stdio.h>
int main(){
    float a;

    printf("Digite seu CPF para ser validado: ");
    scanf("%f", &a);

    if(a > 99999999999 || a < 00000000001){
        printf("CPF Inválido!");
    }else{
        printf("CPF Validado com sucesso!");
    }

    return 0;
}