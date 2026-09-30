#include <stdio.h>
int main(){
    int nota;
    double salario, salario1, salario2, salario3, salario4;
    
    printf("Digite seu salario: ");
    scanf("%lf", &salario);
    printf("Digite sua nota: ");
    scanf("%d", &nota);
    
    salario1 = salario * 1.05;
    salario2 = salario * 1.10;
    salario3 = salario * 1.15;
    salario4 = salario * 1.20;
    
    if(nota <= 1){
        printf("Seu salário permanece o mesmo. %.2lf", salario);
    }else
    
    if(nota <= 2){
        printf("Seu salário aumentou para: %.2lf", salario1);
    }else
    
    if(nota <= 3){
        printf("Seu salário aumentou para: %.2lf", salario2);
    }else
    
    if(nota <= 4){
        printf("Seu salário aumentou para: %.2lf", salario3);
    }else
    
    if(nota <= 5){
        printf("Seu salário aumentou para: %.2lf", salario4);
    }else
    
    return 0;
}