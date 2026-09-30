#include <stdio.h>
int main(){
    int a, b, c, d, e;
    float média;

    printf("Digite 5 números: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);


    média = ((a + b + c + d + e) / 5);

    int maior = a;

    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (d > maior) maior = d;
    if (e > maior) maior = e;


    printf("A média é de %.2f e o maior número é o %d", média, maior);

    return 0;

}