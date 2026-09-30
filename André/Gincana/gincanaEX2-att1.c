//Descrição: Resolver os seguintes desafios utilizando funções em C:
/*
1. Criar uma função que retorna o maior entre três números.
2. Criar uma função que calcula a média dos valores de um vetor.
3. Criar uma função que verifica se um número é primo.*/

#include <stdio.h>

void maiornum(int a, int b, int c){
    
    if( a > b && a > c){
        printf("O maior numero e %d", a);
    }else if( b > c && b > a){
        printf("O maior numero e %d", b);
    } else{
        printf("O maior numero e %d", c);
    }
}

int main(){

    int a = 45, b = 44, c = 60;
  

    maiornum(a, b, c);

    return 0;
}

