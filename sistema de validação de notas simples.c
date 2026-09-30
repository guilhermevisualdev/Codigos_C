#include <stdio.h>
int main(){
    int a;
    printf("Digite a sua nota para ser validada: ");
    scanf("%d", &a);

    if(a > 10 || a < 0){
        printf("Nota inválida!");
    }else{
        printf("Nota validada com sucesso!");
    }
    return 0;
}