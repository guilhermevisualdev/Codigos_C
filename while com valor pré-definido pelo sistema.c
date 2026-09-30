#include <stdio.h>
int main(){
    int a = 90;
    int b;
    printf("O número do programa é: %d", a);
    
    printf("\nAgora digite um número que seja maior que 90: ");
    scanf("%d", &b);
    if(b > 90){
        printf("Correto! O número %d é maior que 90", b);
    }else{
        printf("Errado! O número %d não é maior que 90!", b);
    }

return 0;
}