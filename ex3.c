#include <stdio.h>
#include <math.h>

int main(){

float a,b,c,x1,x2,d;
x1 = 0;
x2 = 0;
d = 0;

printf("Valor A: ");
scanf("%f", &a);
printf("Valor B: ");
scanf("%f", &b);
printf("Valor C: ");
scanf("%f", &c);

d = pow(b,2) - 4 * a * c;
//printf("delta: %f", d);

if (d < 0){
    printf("delta não pode ser negativo");
} else if (a == 0){
    printf("A não pode ser zero");
}else{
  x1 = (-b + sqrt(d))/(2*a);
  x2 = (-b - sqrt(d))/(2*a);
  printf("delta: %.f")



}