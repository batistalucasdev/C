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