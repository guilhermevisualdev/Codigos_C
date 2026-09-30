#include <stdio.h>
int main(){
    int login = 202401;
    int senha = 123456;
    int a, b;
    
    printf("Digite o login: ");
    scanf("%d", &a);
    printf("Digite a senha: ");
    scanf("%d", &b);
    
    while(a != login || b != senha){
        printf("Digite o login: ");
        scanf("%d", &a);
        printf("Digite a senha: ");
        scanf("%d", &b);
    }
    
    if(a == login && b == senha){
        printf("Você acessou o sistema!");
    }
    return 0;
}
