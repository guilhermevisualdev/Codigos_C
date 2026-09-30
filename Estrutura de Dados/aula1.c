#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct no{
    int dado;
    struct no * prox;
} tno;

typedef struct fila {
    tno * comeco;
    tno * fim;
} tfila;

void inicializaFila(tfila * pFila){
    pFila->comeco = pFila->fim = NULL;
}

bool enfileirar(tfila * pFila, int valor){
    tno * novo = (tno *) malloc(sizeof(tno));
    if(novo == NULL){
        return false;
}
else
        if (pFila->comeco == NULL){    // processo para inserir com a fila vazia
            novo->dado = valor;
            novo->prox = NULL;
            pFila->comeco = novo;
            pFila->fim = novo;
            return true;
        }
        else{ // processo para inserir quando tenho dados na fila
            novo->dado = valor;
            novo->prox = NULL;
            (pFila -> fim)->prox = novo;
            pFila->fim = novo;
            return true;
        }
}

int main(){

    tfila * fila1; 
    inicializaFila(&fila1);

    if(enfileirar(&fila1, 1))
        printf("Sucesso!");
    else
        printf("Erro!");
    

    return 0;
}