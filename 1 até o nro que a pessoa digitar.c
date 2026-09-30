#include <stdio.h>
int main(){
    int nro, i;
    
    printf("Digite um número: ");
    scanf("%d", &nro);
    
    for(i = 1; i <= nro; i++){
        printf("%d ", i);
    }
    return 0;
} 

#include <stdio.h>
int main(){
    int i, a;
    
    printf("Digite um número: ");
    scanf("%d", &a);
    
    for(i = 100; i >= a; i--){
    printf("\n%d", i);
}
}