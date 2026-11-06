/*
7. Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade de filmes retirados por seus clientes durante o ano de 2020. Agora, esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna um vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito. 
*/
#include <stdio.h>

#define TAM 500

void calcular_locacoes_gratis(const int A[TAM], int gratis[TAM]) {
    for (int i = 0; i < TAM; i++) {
        gratis[i] = A[i] / 15;
    }
}

int main() {
    int locacoes[TAM];
    int gratuidade[TAM];

    // Exemplo de preenchimento para teste
    for (int i = 0; i < TAM; i++) {
        locacoes[i] = (i + 1) * 3;
    }

    calcular_locacoes_gratis(locacoes, gratuidade);

    printf("Cliente 0 retirou %d filmes e ganhou %d locacao(oes) gratis.\n", locacoes[0], gratuidade[0]);
    printf("Cliente 9 retirou %d filmes e ganhou %d locacao(oes) gratis.\n", locacoes[9], gratuidade[9]);

    return 0;
}