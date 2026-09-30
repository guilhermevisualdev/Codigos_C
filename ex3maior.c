#include <stdio.h>
int main(){
    int a, b, c;
    printf("Digite os 3 números: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c){
        printf("O maior valor é: %d", a);
        } else if (b > c){
            printf("O maior valor é %d", b);
        } else{
            printf("O maior valor é %d", c);
        }
        return 0;
}