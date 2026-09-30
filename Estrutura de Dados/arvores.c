#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct arv{
	char info;
	struct arv * esq;
	struct arv * dir;
};
typedef struct arv Arv;

Arv * inicializa(){
	return NULL;
}

Arv * criar(char caractere, Arv * sae, Arv * sad){
	Arv * novo = (Arv*) malloc(sizeof(Arv));
	if(novo!= NULL){
		novo->info = caractere;
		novo->esq = sae;
		novo->dir = sad;
	}
	return novo;
}

bool vazia(Arv * pA){
	return pA == NULL;
}

void imprimir(Arv * pA){
	if(!vazia(pA)){
		imprimir(pA->esq);
		imprimir(pA->dir);
		printf("%c ", pA->info);
	}
}

void inserir(Arv ** pA, char c){
	if(*pA == NULL){
		*pA = (Arv *) malloc(sizeof(Arv));
		(*pA)->info = c;
		(*pA)->esq = NULL;
		(*pA)->dir = NULL;
	}
	else{
		if(c < (*pA)->info)
			inserir(&(*pA)->esq, c);
		else
			inserir(&(*pA)->dir, c);
	}
}

bool buscar(Arv * pA, char c){
	if(pA == NULL)
		return false;

	if(pA->info == c)
		return true;

	if(c < pA->info)
		return buscar(pA->esq, c);
	else
		return buscar(pA->dir, c);
}

int altura(Arv * pA){
	if(pA == NULL)
		return 0;

	int he = altura(pA->esq);
	int hd = altura(pA->dir);

	if(he > hd)
		return he + 1;
	else
		return hd + 1;
}

int main(){

	Arv * Raiz;
	Raiz = inicializa();

	printf("Arvore esta vazia?\n");
	bool v = vazia(Raiz);

	if(v)
		printf("Sim!\n");
	else
		printf("Nao!\n");

	inserir(&Raiz,'c');
	inserir(&Raiz,'b');
	inserir(&Raiz,'a');
	inserir(&Raiz,'d');
	inserir(&Raiz,'e');

	printf("\nElementos da arvore:");
	imprimir(Raiz);

	char elemento;

	printf("\nDigite o elemento que deseja buscar: ");
	scanf(" %c", &elemento);

	if(buscar(Raiz, elemento))
		printf("Elemento %c encontrado!\n", elemento);
	else
		printf("Elemento %c nao encontrado!\n", elemento);

	printf("Altura da arvore: %d\n", altura(Raiz));

	return 0;
}