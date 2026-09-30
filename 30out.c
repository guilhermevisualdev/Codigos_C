#include <stdio.h>

int main(){
    float velocidadekmh, velocidadems;

    printf("Digite a velocidade (em m/s): ");
    scanf("%f", &velocidadems);

velocidadekmh = velocidadems * 3.6;

    printf("A conversão de %.3f em m/s para km/h é igual a: %.3f",velocidadems, velocidadekmh);

    return 0;


}