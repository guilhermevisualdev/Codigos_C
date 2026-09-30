#include <stdio.h>
int main(){
    int nro, senha, saque, novosaldo;
    int saldo = 50000;
    
    printf("Digite o número da conta: ");
    scanf("%d", &nro);
    
    printf("Digite a senha da conta: ");
    scanf("%d", &senha);
    
    if(nro != 12345 || senha != 3345){
        printf("Número da conta e/ou senha incorreto(s)");
    }else{
        printf("Conta acessada com sucesso!");
        printf("\nDigite o valor a ser retirado da conta: ");
        scanf("%d", &saque);
        
        if(saque > saldo){
            printf("Saldo insuficiente!");
        }else{
        
        novosaldo = saldo - saque;
        
        printf("Saldo atualizado. Novo saldo: %d", novosaldo);
        }
    }    
        
    return 0;
}