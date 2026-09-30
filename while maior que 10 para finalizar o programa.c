#include <stdio.h>
int main(){
    int a;
    
    printf("Digite um número: ");
    scanf("%d", &a);

    while(a < 10){
        printf("Digite outro número ");
        scanf("%d", &a);
    }
    return 0;
}