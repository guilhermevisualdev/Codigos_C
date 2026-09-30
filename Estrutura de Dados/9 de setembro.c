#include <stdio.h>
#include <stdlib.h>  // biblioteca para trabalhar com malloc

struct ListaSimples {
    int info;
    struct listaSimples *next;
};
typedef struct listaSimples Lista;

Lista * inicializaLista (){
    return NULL;
}

Lista * inserir(Lista * pL, int valor){
    Lista * novo;
    novo = (Lista *) malloc(sizeof(Lista));
    if (novo != NULL){
        novo->info = valor;
        novo->next = pL;
    }
    return novo;
}

void imprimir (Lista * pL){
    while (pL != NULL){
        printf("No [%d] -> ", pL ->info);
        pL = pL -> next;
    }
}

int main(){
    Lista * L;
    L = inicializaLista();

    L = inserir (L, 1);
    L = inserir (L, 10);
    L = inserir (L, 100);
    L = inserir (L, 1000);

    imprimir(L);

    return 0;
}

