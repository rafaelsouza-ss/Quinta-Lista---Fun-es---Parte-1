/*
1. Escreva uma função que receba por parâmetro dois números e retorne o maior deles.
*/
#include <stdio.h>

// Função que compara dois números e retorna o maior
double maior_numero(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    double num1 = 12.5;
    double num2 = 45.8;

    double maior = maior_numero(num1, num2);

    printf("O maior numero entre %.2f e %.2f e: %.2f\n", num1, num2, maior);

    return 0;
}