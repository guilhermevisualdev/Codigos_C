#include <stdio.h>
int main(){
    float qtdL;
    float suco;

    printf("Digite a quantidade de laranjas a serem espremidas: ");
    scanf("%f", &qtdL);

    suco = qtdL * 50;

    printf("A quantidade de suco que %.2f laranjas irão fornecer será de %.2f ml", qtdL, suco);



    return 0;
}