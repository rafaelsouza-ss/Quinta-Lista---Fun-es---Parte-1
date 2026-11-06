/*
10. Faça uma função que recebe a data de nascimento de uma pessoa em apresente sua idade expressa em dias, meses e anos.
*/
#include <stdio.h>

// Retorna 1 se o ano for bissexto, senao 0
int eh_bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Retorna a quantidade de dias no mes especificado
int dias_no_mes(int mes, int ano) {
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && eh_bissexto(ano)) {
        return 29;
    }
    return dias[mes - 1];
}

void calcular_idade(int dia_nasc, int mes_nasc, int ano_nasc, 
                    int dia_atual, int mes_atual, int ano_atual) {
    int anos, meses, dias;

    if (dia_atual < dia_nasc) {
        mes_atual -= 1;
        int mes_anterior = (mes_atual == 0) ? 12 : mes_atual;
        int ano_ajustado = (mes_atual == 0) ? ano_atual - 1 : ano_atual;
        dia_atual += dias_no_mes(mes_anterior, ano_ajustado);
    }

    if (mes_atual < mes_nasc) {
        ano_atual -= 1;
        mes_atual += 12;
    }

    dias = dia_atual - dia_nasc;
    meses = mes_atual - mes_nasc;
    anos = ano_atual - ano_nasc;

    printf("Idade: %d ano(s), %d mes(es) e %d dia(s).\n", anos, meses, dias);
}

int main() {
    int d = 15, m = 8, a = 1995;
    int d_atual = 6, m_atual = 11, a_atual = 2026;

    calcular_idade(d, m, a, d_atual, m_atual, a_atual);

    return 0;
}