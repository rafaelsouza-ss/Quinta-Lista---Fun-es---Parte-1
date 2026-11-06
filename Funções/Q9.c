/*
9. Faça um procedimento que receba, por parâmetro, uma matriz 61x10. O procedimento deve somar individualmente as colunas da matriz e armazenar o resultado na 61a linha da matriz. O procedimento deve retornar a matriz alterada.
*/
#include <stdio.h>

void somar_colunas(int mat[61][10]) {
    for (int j = 0; j < 10; j++) {
        int soma = 0;
        for (int i = 0; i < 60; i++) {
            soma += mat[i][j];
        }
        mat[60][j] = soma; // 61ª linha (indice 60)
    }
}