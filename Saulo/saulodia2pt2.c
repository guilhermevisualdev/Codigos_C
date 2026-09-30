#include <stdio.h>
int main(){
    int vet [7];
    int temp;

    // Leitura dos números
    printf("Digite 7 números inteiros: \n");
    for (int i = 0; i < 7; i++){
        scanf("%d", &vet[i]);
    }

    // Invertendo o vetor
    for(int i = 0, j = 6; i < j; i++, j--) {
        temp = vet[i];
        vet[i] = vet[j];
        vet[j] = temp;

    }

    // Exibição do vetor invertido
    printf("Vetor invertido: ");
    for (int i = 0; i < 7; i++){
        printf("%d", vet[i]);
        
    }
}