#include <stdio.h>
#include <math.h>

int calcular_raizes(float a, float b, float c, float *raiz1, float *raiz2){
    float delta = (b * b) - (4 * a * c);
    if (delta < 0) return 0; // Sem Raízes reais

    *raiz1 = (-b + sqrt(delta)) / (2 * a);
    *raiz2 = (-b - sqrt(delta)) / (2 * a);

    return 1; // Raízes reais encontradas
}

int main(){
    float a, b, c, r1, r2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f", &a, &b, &c);

    if (a == 0){
        printf("Erro: 'a' não pode ser zero em uma equação do segundo grau.\n");
    }else{
        if(calcular_raizes (a, b, c, &r1, &r2))
        printf("As raízes da equação são: %.2f e %.2f\n", r1, r2);
    else
        printf("A equação não possui raízes reais.\n");
    }
    return 0;
}
