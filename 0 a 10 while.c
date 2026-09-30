#include <stdio.h>
int main(){
    int a = 0;     //precisa adicionar o valor "a", pois caso não adicione, o algoritmo dará um número aleatório para "a".

    while (a <= 10){
        printf("\n%d", a);
        a++;
    }
    return 0;
}