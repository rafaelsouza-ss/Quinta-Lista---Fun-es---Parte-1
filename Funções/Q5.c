/*
5. Escreva uma função para o cálculo do volume de uma esfera:
*/

#include <stdio.h>

#define PI 3.141592

double volume_esfera(double raio) {
    return (4.0 / 3.0) * PI * (raio * raio * raio);
}

int main() {
    double raio = 4.0;
    printf("Volume da esfera: %.2f\n", volume_esfera(raio));
    return 0;
}