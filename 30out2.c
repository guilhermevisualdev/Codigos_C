#include <stdio.h>
int main() {
    
    int populacaoA = 5000000;
    int populacaoB = 7000000; 
    float taxaA = 0.03;   
    float taxaB = 0.02;       
    int anos = 0;             

    while (populacaoA <= populacaoB) {

        populacaoA += (int)(populacaoA * taxaA); 
        populacaoB += (int)(populacaoB * taxaB);  
        anos++;                                 
    }
    printf("O Tempo necessário (em anos) para que o país A ultrapasse o país B é de: %d anos.\n", anos);

    return 0;
}