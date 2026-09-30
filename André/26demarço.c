#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MEDICAMENTOS 100

typedef struct {
    int id;
    char nome[50];
    char descricao[200];
    char finalidade[100];
} Medicamento;

void salvarMedicamentosEmArquivo(Medicamento novo) {
    FILE *arquivo = fopen("medicamentos.txt", "a");

    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo para escrita!\n");
        return;
    }

    fprintf(arquivo, "%d;%s;%s;%s\n",
            novo.id, novo.nome, novo.descricao,
            novo.finalidade);

    fclose(arquivo);
    printf("\nMedicamento salvo no arquivo 'medicamentos.txt'!\n");
}

void cadastrarMedicamento() {
    Medicamento novo;
    FILE *arquivo = fopen("medicamentos.txt", "r");

    int ultimoID = 0;
    if (arquivo != NULL) {
        while (fscanf(arquivo, "%d;%*[^;];%*[^;];%*[^;]\n", &ultimoID) == 1);
        fclose(arquivo);
    }

    novo.id = ultimoID + 1;
    printf("\nDigite o nome: ");
    scanf(" %49[^\n]", novo.nome);
    printf("Digite a descricao: ");
    scanf(" %199[^\n]", novo.descricao);
    printf("Digite a finalidade: ");
    scanf(" %99[^\n]", novo.finalidade);

    salvarMedicamentosEmArquivo(novo);
    printf("\nMedicamento cadastrado com sucesso!\n");
}

void listarMedicamentos() {
    FILE *arquivo = fopen("medicamentos.txt", "r");
    if (arquivo == NULL) {
        printf("\nNenhum medicamento cadastrado.\n");
        return;
    }

    printf("\nLista de Medicamentos:\n");
    Medicamento medicamento;
    while (fscanf(arquivo, "%d;%49[^;];%199[^;];%99[^\n]\n",
                  &medicamento.id, medicamento.nome, medicamento.descricao,
                  medicamento.finalidade) == 4) {
        printf("ID: %d | Nome: %s | Descricao: %s | Finalidade: %s\n",
               medicamento.id, medicamento.nome, medicamento.descricao, medicamento.finalidade);
    }

    fclose(arquivo);
}

void consultarMedicamento() {
    int id;
    printf("\nDigite o ID do Medicamento: ");
    scanf("%d", &id);

    FILE *arquivo = fopen("medicamentos.txt", "r");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo!\n");
        return;
    }

    Medicamento medicamento;
    while (fscanf(arquivo, "%d;%49[^;];%199[^;];%99[^\n]\n",
                  &medicamento.id, medicamento.nome, medicamento.descricao,
                  medicamento.finalidade) == 4) {
        if (medicamento.id == id) {
            printf("\nMedicamento encontrado:\n");
            printf("ID: %d\nNome: %s\nDescricao: %s\nFinalidade: %s\n",
                   medicamento.id, medicamento.nome, medicamento.descricao, medicamento.finalidade);
            fclose(arquivo);
            return;
        }
    }

    printf("\nMedicamento não encontrado.\n");
    fclose(arquivo);
}

void menu() {
    int opcao;
    do {
        printf("\n=== Menu ===\n");
        printf("1. Cadastrar Medicamento\n");
        printf("2. Listar Medicamentos\n");
        printf("3. Consultar Medicamento por ID\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarMedicamento();
                break;
            case 2:
                listarMedicamentos();
                break;
            case 3:
                consultarMedicamento();
                break;
            case 4:
                printf("\nSaindo do programa.\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);
}

int main() {
    menu();
    return 0;
}
