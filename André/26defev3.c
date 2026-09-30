#include <stdio.h>

void imprimir(int *valor){
    printf("%d", *valor);
}

int somar(int *valor){
    return *valor + 2;
}

int main(){
    int valor = 10;
    imprimir(&valor);

    int r = somar(&valor);
    printf("\nEx2: %d", r);

    return 0;
}