#include <stdio.h>
#include <string.h>



int main() {
    char nomes[10][50];
    float notas[10][2];
    float media[10];

    for (int i = 0; i < 9; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(nomes[i], 51, stdin); 
       
        nomes[i][strlen(nomes[i]) - 1] = '\0'; 

        printf("Digite a nota 1 de %s: ", nomes[i]);
        scanf("%f", &notas[i][0]);
        getchar();

        printf("Digite a nota 2 de %s: ", nomes[i]);
        scanf("%f", &notas[i][1]);
        getchar();

       

        media[i] = (notas[i][0] + notas[i][1]) / 2;
    }

    printf("\nResultados:\n");
    for (int i = 0; i < 9; i++) {
        printf("Aluno: %s, Média: %.2f, Status: %s\n",
               nomes[i], media[i], media[i] >= 6.0 ? "Aprovado" : "Reprovado");
    }

    return 0;
}