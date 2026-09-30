#include <stdio.h>

void calcular_divisao(int dividendo, int divisor, int *quociente, int *resto){
    *quociente = dividendo / divisor;
    *resto = dividendo % divisor;
}
int main(){
    int dividendo, divisor, quociente, resto;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0){
        printf("Erro: divisão por zero não é permitida.\n");

    }else{
        calcular_divisao(dividendo, divisor, &quociente, &resto);
        
        printf("Quociente: %d, Resto: %d\n", quociente, resto);
    }
    return 0;
}