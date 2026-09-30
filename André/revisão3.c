#include <stdio.h>

void media(float a, float b, float c) {
    float m = (a + b + c) / 3;
    printf("Media: %.2f\n", m);
}

int main() {
    float x, y, z;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &x, &y, &z);

    media(x, y, z);

    return 0;
}