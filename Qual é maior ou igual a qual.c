#include <stdio.h>
int main(){
    int a, b;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("O número %d é maior que %d", a, b);
    }else{

    if(a < b){
        printf("O número %d é maior que %d", b, a);
    }else{
        printf("Ambos os números são iguais");
    }
    }
return 0;
}
