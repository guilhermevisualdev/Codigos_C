#include <stdio.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int paginas;
};

int main() {
    struct Livro livro;

    printf("Digite o titulo do livro: ");
    fgets(livro.titulo, 100, stdin);

    printf("Digite o autor do livro: ");
    fgets(livro.autor, 100, stdin);

    printf("Digite o numero de paginas: ");
    scanf("%d", &livro.paginas);

    printf("Titulo: %sAutor: %sPaginas: %d\n", livro.titulo, livro.autor, livro.paginas);

    return 0;
}