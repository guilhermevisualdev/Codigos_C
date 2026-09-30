#include <stdio.h>

int main() {
    int cartas[8] = {1, 2, 3, 4, 1, 2, 3, 4};
    int mostradas[8] = {0}; 
    int tentativa1, tentativa2;
    int acertos = 0;

    printf("Jogo da Memoria - Encontre os 4 pares!\n");

    while (acertos < 4) {
        printf("\nPosicoes:\n");
        for (int i = 0; i < 8; i++) {
            if (mostradas[i])
                printf("[%d] ", cartas[i]);
            else
                printf("[%d] ", i);
        }

        printf("\nEscolha a primeira posicao (0 a 7): ");
        scanf("%d", &tentativa1);
        printf("Escolha a segunda posicao (0 a 7): ");
        scanf("%d", &tentativa2);

        if (tentativa1 == tentativa2 || tentativa1 < 0 || tentativa1 > 7 || tentativa2 < 0 || tentativa2 > 7) {
            printf("Posicoes invalidas. Tente novamente.\n");
            continue;
        }

        printf("Voce virou: %d e %d\n", cartas[tentativa1], cartas[tentativa2]);

        if (cartas[tentativa1] == cartas[tentativa2] && mostradas[tentativa1] == 0 && mostradas[tentativa2] == 0) {
            printf("Par encontrado!\n");
            mostradas[tentativa1] = 1;
            mostradas[tentativa2] = 1;
            acertos++;
        } else {
            printf("Nao e um par.\n");
        }
    }

    printf("\nVoce encontrou todos os pares! Fim de jogo.\n");
    return 0;
}
