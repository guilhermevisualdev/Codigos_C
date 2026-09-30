#include <stdio.h>

int dobrar (int a){
    return a * 2;
}

int main(){
    printf("Início");
    int x = 10;
    int d = dobrar(x);
    printf("\n%d\n", d);
    printf("Fim");
    return 0;
}