#include <stdio.h>
#include <stdlib.h>

int main() {
    float *posicaoInicial = malloc(sizeof(float));
    float *posicaoFinal = malloc(sizeof(float));

    if (!posicaoInicial || !posicaoFinal) {
        printf("Erro ao reservar memória para posições.\n");
        return 1;
    }

    printf("Informe a posição inicial (metros): ");
    scanf("%f", posicaoInicial);
    printf("Informe a posição final (metros): ");
    scanf("%f", posicaoFinal);

    float deslocamento = *posicaoFinal - *posicaoInicial;

    free(posicaoInicial);
    free(posicaoFinal);

    float *tempoInicial = malloc(sizeof(float));
    float *tempoFinal = malloc(sizeof(float));

    if (!tempoInicial || !tempoFinal) {
        printf("Erro ao reservar memória para tempos.\n");
        return 1;
    }

    printf("Informe o tempo inicial (segundos): ");
    scanf("%f", tempoInicial);
    printf("Informe o tempo final (segundos): ");
    scanf("%f", tempoFinal);

    float duracao = *tempoFinal - *tempoInicial;

    if (duracao == 0) {
        printf("Tempo final e inicial não podem ser iguais.\n");
        free(tempoInicial);
        free(tempoFinal);
        return 1;
    }

    float velocidadeMedia = deslocamento / duracao;
    printf("A velocidade média é: %.2f metros por segundo.\n", velocidadeMedia);

    free(tempoInicial);
    free(tempoFinal);

    return 0;
}
