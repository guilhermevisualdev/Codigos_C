#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef struct no{
    int dado;
    struct no * prox;
} tno;

typedef struct fila{
    tno * comeco;
    tno * fim;
} tfila;

void inicializaFila(tfila * ptfila){
    ptfila->comeco = NULL;
    ptfila->fim = NULL;
}

bool enfileirar(tfila * ptfila, int valor){
    tno * novo = (tno *) malloc(sizeof(tno));
    if(novo == NULL) return false;

    novo->dado = valor;
    novo->prox = NULL;

    if(ptfila->comeco == NULL){
        ptfila->comeco = novo;
        ptfila->fim = novo;
    } else {
        ptfila->fim->prox = novo;
        ptfila->fim = novo;
    }

    return true;
}

bool desinfileirar(tfila * ptfila, int * retornaValor){
    if(ptfila->comeco != NULL){
        tno * aux = ptfila->comeco;
        *retornaValor = aux->dado;
        ptfila->comeco = aux->prox;
        if(ptfila->comeco == NULL)
            ptfila->fim = NULL;
        free(aux);
        return true;
    }
    return false;
}

int tamanhoFila(tfila * ptfila){
    int cont = 0;
    tno * aux = ptfila->comeco;
    while(aux != NULL){
        cont++;
        aux = aux->prox;
    }
    return cont;
}

void delay(){
    for(long i = 0; i < 300000000; i++){}
}

int main(){

    tfila filas[5];
    for(int i = 0; i < 5; i++){
        inicializaFila(&filas[i]);
    }

    srand(time(NULL));

    int clienteID = 1;

    for(int ciclo = 1; ciclo <= 20; ciclo++){

        printf("\nCICLO %d\n", ciclo);


        int qualFila = rand() % 5 + 1;
        enfileirar(&filas[qualFila-1], clienteID);
        printf("Cliente %d entrou na fila %d\n", clienteID, qualFila);
        clienteID++;

        int filaAtendimento = rand() % 5 + 1;
        int atendido;
        if(desinfileirar(&filas[filaAtendimento-1], &atendido)){
            printf("Cliente %d atendido na fila %d\n", atendido, filaAtendimento);
        } else {
            printf("Fila %d vazia\n", filaAtendimento);
        }

        printf("\nEstado das filas:\n");
        for(int i = 0; i < 5; i++){
            printf("Fila %d: %d clientes\n", i + 1, tamanhoFila(&filas[i]));
        }

        delay();
    }

    return 0;
}