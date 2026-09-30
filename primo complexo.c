#include<stdio.h>
int main() {
 int nro, a, final;
 
 printf("Digite um número: ");
 scanf("%d", &nro);
 
 if (nro < 0){
    printf("%d não é um número primo", nro);
    
 }else{
     
    for (a = 2; a <= nro / 2; a++) {
    if (nro % a == 0) {
       final++;
       break;
    }
 }
 
 if (final == 0 && nro != 1 && nro != 0){
    printf("%d é um número primo", nro);
 }else{
    printf("%d não é um número primo", nro);
 }
 }
 return 0;
}