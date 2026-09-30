#include <stdio.h>
int main(){
    float a, b, c;

    printf("Digite três números: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a > b && a > c){
    printf("O maior dos três números é o %.2f", a);
}
    if(b > a && b > c){
        printf("O maior dos três números é o %.2f", b);
}   if(c > a && c > b){
        printf("O maior dos três números é o %.2f", c);
    }



    return 0;
}