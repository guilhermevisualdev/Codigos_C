#include <stdio.h>
#include <float.h>

int main() {
    int i = 0, tamanhoVetor = 0;
    printf("Digite quantos elementos voce quer no vetor: ");
    scanf("%d", &tamanhoVetor);

    float vetor[tamanhoVetor];
    float soma = 0.0;
    float maior = -FLT_MAX, menor = FLT_MAX;

    for (i = 0; i < tamanhoVetor; i++) {
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < tamanhoVetor; i++) {
        printf("%.2f, ", vetor[i]);
        soma += vetor[i];

        if (vetor[i] > maior) {
            maior = vetor[i];
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    float media = soma / tamanhoVetor;

    printf("\nA soma eh %.2f\n", soma);
    printf("A media eh %.2f, maior eh %.2f e menor eh %.2f\n", media, maior, menor);

    return 0;
}
