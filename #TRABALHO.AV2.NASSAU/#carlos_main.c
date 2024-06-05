#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "arquivo.h"

int opcao (){
    // Declaraçao de variaveis 
    int a;

    // Menu
    printf("---------------Menu------------\n");
    printf("1. Calcular a média dos valores positivos \n");
    printf("2. Calculadora Sálario Semanal \n");
    printf("3. Sorteie um número mágico \n");
    printf("4. Cálculo da quantidade de dias em um mês \n");
    printf("5. Contador de partidar em minutos \n");
    printf("0. Sair \n");
    scanf("%d",&a);

    //saida de dados 
    return (a);
}

int main (){
    // Declaraçao de variaveis 
    int menu; 
    //Declaraçao de variaveis da questao 31
    int horasInicio,minutosInicio,horasFim,minutosFim,duracao;

    // Reconhecer os caracteres especiais
    setlocale(LC_ALL,"Portuguese_Brazil");

    // Oparaçoes determinadas
    do{
        menu = opcao();
        switch (menu){
        case 1: 
            questao17();
            break;
        case 2: 
            questao20();
            break;
        case 3: 
            questao22();
            break;
        case 4: 
            questao30();
            break;
        case 5:
            //Entrada de dados 
            printf("Digite as horas de inicio do jogo (HH : MM)\n");
            scanf("%d %d",&horasInicio,&minutosInicio);
            printf("Digite as horas do fim do jogo (HH : MM)\n");
            scanf("%d %d",&horasFim,&minutosFim);

            // Inicializando o funçao 
            duracao = questao31(horasInicio,minutosInicio,horasFim,minutosFim);

            //Saída de dados
            printf("A duração do jogo foi de %d em minutos\n",duracao);
            break;
        case 0: 
            printf("Finalizada");
            break;
        default:
            printf("Opçao invalidade. Tente novamente");
            break;
        }
    }while (menu != 0);

    return 0;
}