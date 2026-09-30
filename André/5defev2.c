#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int numero_aleatorio, palpite, tentativas = 0;
    //Reiniciar função Rand() utilizando como base o tempo atual
    srand(time (NULL));
    //Gerar número aleatório entre 1 e 100
    numero_aleatorio = rand() % 100;
    do{
        printf("Digite um número (entre 1 e 100): ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite > numero_aleatorio){
            printf("A não... Muito alto! Tente novamente.\n");
        }else if (palpite < numero_aleatorio){
            printf("A não... Muito baixo! Tente novamente.\n");
        }else {
            printf("Parabéns!! Você utilizou %d tentaivas para acertar o número %d.\n", tentativas, numero_aleatorio);
        }

    } while (palpite != numero_aleatorio);
    return 0;
}