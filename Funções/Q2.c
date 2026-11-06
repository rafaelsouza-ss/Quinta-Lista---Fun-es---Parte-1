/* 2. Faça uma função que receba um número inteiro entre 1 a 12 e imprima em 
tela o mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. 
Exemplo: Entrada = 4. Saída = abril.
*/
#include <stdio.h>

void exibir_mes_e_dias(int mes) {
    switch (mes) {
        case 1:
            printf("Janeiro - 31 dias\n");
            break;
        case 2:
            printf("Fevereiro - 28 ou 29 dias\n");
            break;
        case 3:
            printf("Marco - 31 dias\n");
            break;
        case 4:
            printf("Abril - 30 dias\n");
            break;
        case 5:
            printf("Maio - 31 dias\n");
            break;
        case 6:
            printf("Junho - 30 dias\n");
            break;
        case 7:
            printf("Julho - 31 dias\n");
            break;
        case 8:
            printf("Agosto - 31 dias\n");
            break;
        case 9:
            printf("Setembro - 30 dias\n");
            break;
        case 10:
            printf("Outubro - 31 dias\n");
            break;
        case 11:
            printf("Novembro - 30 dias\n");
            break;
        case 12:
            printf("Dezembro - 31 dias\n");
            break;
        default:
            printf("Numero invalido! Digite um valor entre 1 e 12.\n");
            break;
    }
}

int main() {
    int numero;

    printf("Digite o numero do mes (1-12): ");
    scanf("%d", &numero);

    exibir_mes_e_dias(numero);

    return 0;
}