/*
30. Fazer uma função que recebe um mês e um ano como parâmetros e retorna o número de dias daquele mês daquele ano. Dica: um ano é bissexto quando é múltiplo de 4 e não múltiplo de 100, ou também quando é múltiplo de 400.
*/

#include <stdio.h>

// Função para verificar se um ano é bissexto
int ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

// Função para retornar o número de dias em um mês de um determinado ano
int diasNoMes(int mes, int ano) {
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (ehBissexto(ano)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return -1; // Valor inválido para mês
    }
}

int main() {
    int mes, ano;

    printf("Digite o mês (1-12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    int dias = diasNoMes(mes, ano);
    if (dias == -1) {
        printf("Mês inválido.\n");
    } else {
        printf("O mês %d do ano %d tem %d dias.\n", mes, ano, dias);
    }

    return 0;
}
