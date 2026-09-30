#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARQUIVO "alunos.csv"

void cadastrar() {
    FILE *f = fopen(ARQUIVO, "a");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return;
    }

    char nome[100];
    int idade;
    float nota;

    printf("Nome: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Nota: ");
    scanf("%f", &nota);
    getchar();

    fprintf(f, "%s;%d;%.2f\n", nome, idade, nota);
    fclose(f);
    printf("Aluno cadastrado!\n");
}

void listar() {
    FILE *f = fopen(ARQUIVO, "r");
    if (f == NULL) {
        printf("Arquivo vazio ou não encontrado.\n");
        return;
    }

    char linha[150];
    while (fgets(linha, sizeof(linha), f)) {
        char nome[100];
        int idade;
        float nota;

        sscanf(linha, "%[^;];%d;%f", nome, &idade, &nota);
        printf("Nome: %s | Idade: %d | Nota: %.2f\n", nome, idade, nota);
    }

    fclose(f);
}

void deletar() {
    FILE *f = fopen(ARQUIVO, "w");
    if (f == NULL) {
        printf("Erro ao apagar.\n");
        return;
    }
    fclose(f);
    printf("Base apagada.\n");
}

int main() {
    int op;

    do {
        printf("\n1 - Cadastrar Aluno\n");
        printf("2 - Listar Alunos\n");
        printf("3 - Deletar base de dados\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);
        getchar();

        if (op == 1) {
            cadastrar();
        } else if (op == 2) {
            listar();
        } else if (op == 3) {
            deletar();
        } else if (op == 4) {
            printf("Saindo...\n");
        } else {
            printf("Opcao invalida!\n");
        }

    } while (op != 4);

    return 0;
}
