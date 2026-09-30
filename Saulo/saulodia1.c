#include <stdio.h>

int main(){
    int vet [5];
    int soma = 0;

    // Leitura dos números
    printf("Digite 5 números inteiros: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }

    // Soma dos números
    for (int i = 0; i < 5; i++){
        soma += vet[i];
    }

    // Exibição do resultado
    printf("A soma dos elementos do vetor é: %d\n", soma);
    }