// Lucas Soares Batista/ Matrícula 01678004
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "questoes.h"

void questao1();
void questao2();
void questao3();
void questao4();
void questao5();

int ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        return 1;
    }
    else
    {
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
            if (ehBissexto(ano))
            {
                return 29;
            }
            else
            {
                return 28;
            }
        default:
            return -1; // Valor inválido para mês
    }
}

int calcularDuracaoJogo(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino) {
    // Converter hora e minuto de início para minutos desde o início do dia
    int inicioEmMinutos = horaInicio * 60 + minutoInicio;
    
    // Converter hora e minuto de término para minutos desde o início do dia
    int terminoEmMinutos = horaTermino * 60 + minutoTermino;
    
    // Calcular a duração do jogo em minutos
    int duracao;
    if (terminoEmMinutos >= inicioEmMinutos) {
        duracao = terminoEmMinutos - inicioEmMinutos;
    } else {
        // Caso o jogo termine no dia seguinte
        duracao = (24 * 60 - inicioEmMinutos) + terminoEmMinutos;
    }
    
    return duracao;
}

int main() {
    int escolha;

    do {
        printf("\nEscolha a questao que voce quer responder:\n");
        printf("1. Questão 17\n");
        printf("2. Questão 20\n");
        printf("3. Questão 22\n");
        printf("4. Questão 30\n");
        printf("5. Questão 31\n");
        printf("0. Sair\n");
        printf("Digite a sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                questao1();
                break;
            case 2:
                questao2();
                break;
            case 3:
                questao3();
                break;
            case 4:
                questao4();
                break;
            case 5:
                questao5();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Escolha inválida! Por favor, tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}