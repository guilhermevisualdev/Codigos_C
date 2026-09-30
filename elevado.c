#include <stdio.h>
int main(){
    int nro = 1;
    int elevado = 1;
    int resultado = 1;
    
    printf("Digite um número: ");
    scanf("%d", &nro);
    printf("Digite o elevado: ");
    scanf("%d", &elevado);
    
    for (int i = 0; i < elevado; i++){
        resultado = resultado * nro;
    }
    printf("O número %d elevado a %d é: %d", nro, elevado, resultado);
    
    return 0;
}