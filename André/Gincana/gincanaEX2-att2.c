//2. Criar uma função que calcula a média dos valores de um vetor.

#include <stdio.h>

void media(float vetor[]){
    float media;
    for(int i = 0; i < 3; i++){
        media += vetor[i];
    }
    media = media / 3;
    printf("A media e: %.2f", media);

}

int main(){
    float vetor[3] = {7, 8, 10};

    media(vetor);


    return 0;
}

