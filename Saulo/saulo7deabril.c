#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    float preco;
    int quantidade;
} Produto;

void cadastrarProduto(Produto *produto) {
    printf("\nVamos cadastrar um novo produto!\n");
    printf("Qual o nome? ");
    fgets(produto->nome, 30, stdin);
    produto->nome[strcspn(produto->nome, "\n")] = 0;
    
    printf("Qual o preco? ");
    scanf("%f", &produto->preco);
    
    printf("Quantos temos em estoque? ");
    scanf("%d", &produto->quantidade);
    getchar();
}

void listarProdutos(Produto produtos[], int quantidade) {
    printf("\nAqui esta nossa lista de produtos:\n");
    if (quantidade == 0) {
        printf("Ops, ainda nao temos produtos cadastrados!\n");
        return;
    }
    
    for (int i = 0; i < quantidade; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Preco: R$%.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n", produtos[i].quantidade);
    }
}

void atualizarPreco(Produto *produto) {
    printf("\nBeleza, vamos atualizar o preco!\n");
    printf("Produto: %s", produto->nome);
    printf("Preco atual: R$%.2f\n", produto->preco);
    printf("Qual o novo preco? R$");
    scanf("%f", &produto->preco);
    printf("Pronto, preco atualizado!\n");
}

int main() {
    Produto estoque[100];
    int totalProdutos = 0;
    int opcao;
    
    do {
        printf("\nOi! O que voce quer fazer hoje?\n");
        printf("1. Cadastrar um produto\n");
        printf("2. Ver todos os produtos\n");
        printf("3. Atualizar um preco\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();
        
        switch (opcao) {
            case 1:
                if (totalProdutos < 100) {
                    cadastrarProduto(&estoque[totalProdutos]);
                    totalProdutos++;
                } else {
                    printf("Desculpe, nosso estoque esta lotado!\n");
                }
                break;
                
            case 2:
                listarProdutos(estoque, totalProdutos);
                break;
                
            case 3:
                if (totalProdutos == 0) {
                    printf("Nao temos produtos para atualizar ainda!\n");
                } else {
                    int indice;
                    listarProdutos(estoque, totalProdutos);
                    printf("\nQual produto quer atualizar? (1-%d): ", totalProdutos);
                    scanf("%d", &indice);
                    if (indice > 0 && indice <= totalProdutos) {
                        atualizarPreco(&estoque[indice - 1]);
                    } else {
                        printf("Numero invalido, tente novamente!\n");
                    }
                }
                break;
                
            case 0:
                printf("Tchau, ate a proxima!\n");
                break;
                
            default:
                printf("Ops, essa opcao nao existe!\n");
        }
    } while (opcao != 0);
    
    return 0;
}