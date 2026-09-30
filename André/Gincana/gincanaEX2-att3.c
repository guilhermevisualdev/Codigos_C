#include <stdio.h>
#include <math.h>

void primo(int num){
    if (num <= 1){
        printf("O numero nao e primo\n");
        return;
    }

    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            printf("Nao primo\n");
            return;
        }
    }

    printf("Primo\n");
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    primo(num);

    return 0;
}
