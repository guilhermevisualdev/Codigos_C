#include <stdio.h>
#include<string.h>

void executarOpção(char *opção){

    if(strcmp(opção, "iniciar") == 0){
        printf("Iniciando o sistema...");
    }else if (strcmp(opção, "parar") == 0){
        printf("Parando o sistema...");
    }else if (strcmp (opção, "reiniciar") == 0){
        printf("Reiniciando o sistema...");
    }else{
        printf("Opção Inválida");
    }
}
int main(){
    char opção[20];

    printf("Digite a opção desejada: iniciar, parar, reiniciar");
    scanf("%s", opção);
    executarOpção(opção);
    return 0;
}