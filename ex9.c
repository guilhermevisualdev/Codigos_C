#include<stdio.h>
int main(){
    int n;
    int soma = 0;
    do{
    printf("Para sair, digite 0: ");
    scanf("%d", &n);
    soma = soma + n;
}while(n != 0);
printf("Soma: %d", soma);

}