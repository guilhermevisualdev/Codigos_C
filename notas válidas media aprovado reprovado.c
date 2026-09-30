#include <stdio.h>
int main(){
    float a, b;
    float media;
    
    printf("Digite a sua primeira nota: ");
    scanf("%f", &a);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &b);
    
    if (a < 0 || a > 10 || b < 0 || b > 10){
        printf("\nNota(s) inválida(s)!");
    }else{
        printf("\nNota(s) válida(s)!");
    
    media = (a + b) / 2.0;
    
    printf("\nA média das duas notas é: %.2f", media);
    
    if(media >= 6){
        printf("\nAluno aprovado!");
    }else{
        printf("\nAluno reprovado!");
    }
    }
    return 0;
}
