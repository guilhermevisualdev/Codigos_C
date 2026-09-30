#include <stdio.h>
int main (){
    double a, b, c, d, media;
    printf("Digite 4 números: \n");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    media = (a + b + c + d) / 4;

    printf("\nA média entre esses quatro números é: %.3lf", media);

    return 0;
}
