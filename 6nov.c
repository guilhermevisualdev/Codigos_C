#include <stdio.h>

void imprimir(int i){
    printf("\nO valor e: %d", i);
}

int main(){
    int qtdNumeros = 0;
    
    printf("Quantos numeros vc quer? ");
    scanf("%d", &qtdNumeros);
    
    int numero[qtdNumeros];
    
    for (int i = 0; i < qtdNumeros; i++)
    {
        printf("Entrar com o numero: ");
        scanf("%d", &numero[i]);
    }
    for (int j = 0; j < qtdNumeros; j++)
    {
        imprimir(numero[j]);
    }
    return 0;
}