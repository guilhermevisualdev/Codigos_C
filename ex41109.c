#include <stdio.h>

int calcularMaior(int a, int b, int c, int d){
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (d > maior) maior = d;
    return maior; 
}

int main(){
    int a,b,c,d maior;

    printf("Entre com os quatros números: ");
    scanf("%d %d %d %d", &a,&b,&c,&d);

    maior = calcularMaior(a,b,c,d);
}