#include <stdio.h>
int main(){
    char letra;
    
    printf("Digite uma letra para saber se é vogal ou consoante: ");
    scanf("%c", &letra);
    
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("A letra '%c' é vogal", letra);
    }else{
        printf("A letra '%c' é consoante", letra);
    }
    return 0;
}