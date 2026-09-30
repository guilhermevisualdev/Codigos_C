#include <stdio.h>
#include <string.h>

#define MAX 5

char nomes[MAX][100];
float nota1[MAX], nota2[MAX], medias[MAX];
char situacao[MAX][20];
int total = 0;

void cadastrar() {
    if (total >= MAX) {
        printf("Limite de alunos atingido.\n");
        return;
    }

    int qtd;
    printf("Quantos alunos deseja cadastrar (máx %d)? ", MAX - total);
    scanf("%d", &qtd);
    if (qtd + total > MAX) qtd = MAX - total;

    for (int i = 0; i < qtd; i++) {
        printf("Nome do aluno %d: ", total + 1);
        getchar();
        fgets(nomes[total], 100, stdin);
        nomes[total][strcspn(nomes[total], "\n")] = 0;

        printf("Nota 1: ");
        scanf("%f", &nota1[total]);
        printf("Nota 2: ");
        scanf("%f", &nota2[total]);

        total++;
    }
}

void calcular() {
    for (int i = 0; i < total; i++) {
        medias[i] = (nota1[i] + nota2[i]) / 2.0;
        if (medias[i] >= 6.0)
            strcpy(situacao[i], "Aprovado");
        else
            strcpy(situacao[i], "Reprovado");
    }
}

void exibir() {
    calcular();

    FILE *arq = fopen("resultados.txt", "w");
    if (arq == NULL) {
        printf("Erro ao salvar arquivo.\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        printf("Aluno: %s\n", nomes[i]);
        printf("Notas: %.1f e %.1f\n", nota1[i], nota2[i]);
        printf("Média: %.2f\n", medias[i]);
        printf("Situação: %s\n\n", situacao[i]);

        fprintf(arq, "Aluno: %s\n", nomes[i]);
        fprintf(arq, "Notas: %.1f e %.1f\n", nota1[i], nota2[i]);
        fprintf(arq, "Média: %.2f\n", medias[i]);
        fprintf(arq, "Situação: %s\n\n", situacao[i]);
    }

    fclose(arq);
    printf("Arquivo 'resultados.txt' salvo.\n");
}

int main() {
    int op;

    while (1) {
        printf("\nMenu:\n");
        printf("1 - Cadastrar alunos e notas\n");
        printf("2 - Calcular médias e situação\n");
        printf("3 - Exibir resultados e salvar em arquivo\n");
        printf("4 - Sair\n");
        printf("Opção: ");
        scanf("%d", &op);

        if (op == 1)
            cadastrar();
        else if (op == 2)
            calcular();
        else if (op == 3)
            exibir();
        else if (op == 4)
            break;
        else
            printf("Opção inválida.\n");
    }

    return 0;
}
