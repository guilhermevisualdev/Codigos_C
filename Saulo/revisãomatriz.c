#include <stdio.h>

void main(){
    int n [3][3];
    int diagonalprincipal = 0, i, j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("n[%d][%d]: ", i, j);
            scanf("%d", &n[j][j]);
        }
    for (j = 0; j < 3; j++)
    if (i == j)
    diagonalprincipal += n[i][j];
    }
    printf("A soma da diagonalprincipal é: %d", diagonalprincipal);
    
}
