#include <stdio.h>
int main(){
    float nota1, nota2, freq;
    float media, exame, soma;
    
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a sua frequência: ");
    scanf("%f", &freq);
    
    media = (nota1 + nota2) / 2;
    
    if(media >= 6 && freq >= 75){
        printf("Você está aprovado! Sua média é %.2f", media);
    }
    
    if(media < 6 || media > 4 && freq > 60){
        printf("Você está de recuperação! No entanto, vc poderá fazer exame");
        printf("\nDigite a sua nota do exame: ");
        scanf("%f", &exame);
    }
    
    soma = media + exame;
    
    if(soma > 10){
        printf("Você foi aprovado por exame!");
    }else{
        printf("Você foi reprovado novamente!");
    }
    
    return 0;
}