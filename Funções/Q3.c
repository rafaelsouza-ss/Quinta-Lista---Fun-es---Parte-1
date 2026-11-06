/*
3. Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e 
a retorne convertida em graus Celsius. 
A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), sendo F a temperatura 
em Fahrenheit e C a temperatura em Celsius.
*/
#include <stdio.h>

// Função que recebe a temperatura em Fahrenheit e retorna o valor em Celsius
float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) * (5.0f / 9.0f);
}

int main() {
    float fahrenheit;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = fahrenheitParaCelsius(fahrenheit);

    printf("%.2f °F equivalem a %.2f °C\n", fahrenheit, celsius);

    return 0;
}


