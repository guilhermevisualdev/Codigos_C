#include <stdio.h>
int main() {

    float alturadapessoa, sombradapessoa, sombradopredio, alturadopredio;

    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &alturadapessoa);

    printf("Digite o comprimento da sombra da pessoa (em metros): ");
    scanf("%f", &sombradapessoa);

    printf("Digite o comprimento da sombra do predio (em metros): ");
    scanf("%f", &sombradopredio);

    alturadopredio = (alturadapessoa * sombradopredio) / sombradapessoa;

    printf("A altura do predio é de: %.2f metros\n", alturadopredio);

    return 0;
}
