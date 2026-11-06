/*
4. Escreva uma função que receba por parâmetro a altura e o raio de um cilindro 
circular e retorne o volume desse cilindro. O volume de um cilindro circular é calculado 
por meio da seguinte fórmula: 
em que π = 3.1414592
*/
#include <stdio.h>

#define PI 3.141592

double volume_cilindro(double raio, double altura) {
    return PI * (raio * raio) * altura;
}

int main() {
    double raio = 3.0, altura = 5.0;
    printf("Volume do cilindro: %.2f\n", volume_cilindro(raio, altura));
    return 0;
}