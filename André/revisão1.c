#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    FILE *arquivo;

    printf("Digite o nome: ");
    fgets(nome, 100, stdin);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    arquivo = fopen("dados.txt", "w");
    fprintf(arquivo, "Nome: %sIdade: %d\n", nome, idade);
    fclose(arquivo);

    return 0;
}