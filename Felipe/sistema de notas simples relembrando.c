#include <stdio.h>
int main(){
    int a;

    printf("Digite sua nota: ");
    scanf("%d", &a);

    if(a > 10 || a < 0){
        printf("Nota inválida!");
    }else{
        printf("Nota válida!");
    }

    return 0;
}