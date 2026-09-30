#include <stdio.h>
int main(){
    int nro;

    printf("Digite um número (entre 1 a 7): ");
    scanf("%d", &nro);

    switch(nro){
        case 1:
        printf("Domingo");
        break;

        case 2:
        printf("Segunda-Feira");
        break;

        case 3:
        printf("Terça-Feira");
        break;

        case 4:
        printf("Quarta-Feira");
        break;

        case 5:
        printf("Quinta-Feira");
        break;

        case 6:
        printf("Sexta-Feira");
        break;

        case 7:
        printf("Sábado");
        break;

        default:
        printf("Número Inválido!");
    }

    return 0;
}