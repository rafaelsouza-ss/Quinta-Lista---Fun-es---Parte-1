/* 6. Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).

a) Opção: a vista com 10% de desconto

b) Opção: em duas vezes (preço da etiqueta)

c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção). 
*/
#include <stdio.h>

int menu_opcoes(void) {
    int op;
    printf("\n--- Opcoes de Pagamento ---\n");
    printf("1 - A vista com 10%% de desconto\n");
    printf("2 - Em duas vezes (preco da etiqueta)\n");
    printf("3 - De 3 ate 10 vezes com 3%% de juros ao mes (compras > R$ 100,00)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &op);
    return op;
}

void pagar_a_vista(float total) {
    float final = total * 0.90f;
    printf("Pagamento a vista com 10%% de desconto: R$ %.2f\n", final);
}

void pagar_duas_vezes(float total) {
    float parcela = total / 2.0f;
    printf("Total: R$ %.2f em 2x de R$ %.2f sem juros.\n", total, parcela);
}

void pagar_parcelado(float total) {
    int parcelas;
    if (total <= 100.0f) {
        printf("Esta opcao so e valida para compras acima de R$ 100,00.\n");
        return;
    }

    printf("Digite o numero de parcelas (3 a 10): ");
    scanf("%d", &parcelas);

    if (parcelas < 3 || parcelas > 10) {
        printf("Quantidade de parcelas invalida!\n");
        return;
    }

    // Juros simples de 3% ao mês aplicado ao total
    float juros = total * (0.03f * parcelas);
    float total_com_juros = total + juros;
    float valor_parcela = total_com_juros / parcelas;

    printf("Total com juros: R$ %.2f em %dx de R$ %.2f\n", total_com_juros, parcelas, valor_parcela);
}

int main() {
    float total_gasto;
    printf("Informe o valor total gasto: R$ ");
    scanf("%f", &total_gasto);

    int opcao = menu_opcoes();

    switch (opcao) {
        case 1:
            pagar_a_vista(total_gasto);
            break;
        case 2:
            pagar_duas_vezes(total_gasto);
            break;
        case 3:
            pagar_parcelado(total_gasto);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}