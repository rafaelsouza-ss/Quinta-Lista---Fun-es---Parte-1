/*
8. Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:
a linha 2 com a linha 8;
a coluna 4 com a coluna 10;
a diagonal principal com a secundária;
a linha 5 com a coluna 10;
O procedimento deve retornar a matriz alterada.
*/
#include <stdio.h>

void trocar_elementos(int mat[10][10]) {
    int temp;

    // 1. Troca a linha 2 (indice 1) com a linha 8 (indice 7)
    for (int j = 0; j < 10; j++) {
        temp = mat[1][j];
        mat[1][j] = mat[7][j];
        mat[7][j] = temp;
    }

    // 2. Troca a coluna 4 (indice 3) com a coluna 10 (indice 9)
    for (int i = 0; i < 10; i++) {
        temp = mat[i][3];
        mat[i][3] = mat[i][9];
        mat[i][9] = temp;
    }

    // 3. Troca a diagonal principal com a diagonal secundaria
    for (int i = 0; i < 10; i++) {
        temp = mat[i][i];
        mat[i][i] = mat[i][9 - i];
        mat[i][9 - i] = temp;
    }

    // 4. Troca a linha 5 (indice 4) com a coluna 10 (indice 9)
    for (int i = 0; i < 10; i++) {
        temp = mat[4][i];
        mat[4][i] = mat[i][9];
        mat[i][9] = temp;
    }
}