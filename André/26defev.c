#include <stdio.h>

void imprimir(){
    printf("Ola turma");
}

int somar(int a, int b){
    return a + b;
}

void subtrair(int a, int b){
    printf("\n%d", (a-b));
}

int main(){
    imprimir();
    printf("%d", somar(1,1));
    return 0;
}