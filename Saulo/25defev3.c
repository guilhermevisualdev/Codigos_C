#include <stdio.h>

void converter_tempo(int total_segundos, int *horas, int *minutos, int *segundos){

    *horas = total_segundos / 3600;
    *minutos = (total_segundos % 3600) / 60;
    *segundos = total_segundos % 60;
}
int main(){
    int total_segundos, h, m, s;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &total_segundos);

    if (total_segundos < 0)
    printf("Erro: o tempo não pode ser negativo.\n");
    else {

        converter_tempo(total_segundos, &h, &m, &s);

        printf("Tempo convertido: %d horas,  %d minutos e %d segundos\n", h, m, s);
    }
    return 0;
    }