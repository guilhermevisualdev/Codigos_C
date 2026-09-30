#include <stdio.h>
int main(){
    int a;

    printf("Digite um número de 0 a 4: ");
    scanf("%d", &a);

    switch(a){
        case 0:
        printf("Zero");
        break;

    case 1:
        printf("Um");
        break;
    
    case 2:
        printf("Dois");
        break;
    
    case 3:
        printf("Três");
        break;

    case 4:
        printf("Quatro");
        break;

    default:
    printf("Número Inválido!");
}
return 0;
}