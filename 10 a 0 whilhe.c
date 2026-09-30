#include <stdio.h>
int main(){
    int a = 10;    //precisa adicionar o valor "a", pois caso n adicione, o algoritmo dará um número aleatório para "a".

    while (a >= 0){
        printf("\n%d", a);
        a--;
    }
    return 0;
}