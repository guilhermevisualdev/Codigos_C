#include<stdio.h>
int main(){
    int número = 0;
    printf("Entre com o número: ");
    scanf("%d", &número);

    if (número > 5){
        printf("O número %d é maior que 5", número);
    }else{
        printf("O número %d é menor que 5", número);
    }
    return 0;
}