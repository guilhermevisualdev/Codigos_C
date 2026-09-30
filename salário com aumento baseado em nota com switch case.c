#include <stdio.h>

int main()
{
    double salario;
    int nota;
    
    printf("Digite seu salario: ");
    scanf("%lf", &salario);
    printf("Digite sua nota: ");
    scanf("%d", &nota);

    switch(nota) {
        case 1:
            printf("O salario permanece o mesmo: %.2lf\n", salario);
            break;

        case 2:
            salario = salario * 1.05;
            printf("O salario aumentou 5 por cento: %.2lf\n", salario);
            break;

        case 3:
            salario = salario * 1.10;
            printf("O salario aumentou 10 por cento: %.2lf\n", salario);
            break;

        case 4:
            salario = salario * 1.15;
            printf("O salario aumentou 15 por cento: %.2lf\n", salario);
            break;

        case 5:
            salario = salario * 1.20;
            printf("O salario aumentou 20 por cento: %.2lf\n", salario);
            break;

        default:
            printf("Nota inválida\n");
    }

    return 0;
}
