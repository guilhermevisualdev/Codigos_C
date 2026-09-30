#include <stdio.h>
int main (){
    int numero = 0;
    do{
        printf("\nEntre com a opcao: \n");
        printf("1 - Cadastrar alunos \n");
        printf("2 - Inserir notas \n");
        printf("3 - Calcular média \n");
        printf("4 - Exibir resultados \n");
        printf("5 - Sair do programa \n");
        scanf("%d", &numero);
    }while (numero != 5);



    return 0;
}