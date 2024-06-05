#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "arquivo.h"

int opcao (){
    // Declara�ao de variaveis 
    int a;

    // Menu
    printf("---------------Menu------------\n");
    printf("1. Calcular a m�dia dos valores positivos \n");
    printf("2. Calculadora S�lario Semanal \n");
    printf("3. Sorteie um n�mero m�gico \n");
    printf("4. C�lculo da quantidade de dias em um m�s \n");
    printf("5. Contador de partidar em minutos \n");
    printf("0. Sair \n");
    scanf("%d",&a);

    //saida de dados 
    return (a);
}

int main (){
    // Declara�ao de variaveis 
    int menu; 
    //Declara�ao de variaveis da questao 31
    int horasInicio,minutosInicio,horasFim,minutosFim,duracao;

    // Reconhecer os caracteres especiais
    setlocale(LC_ALL,"Portuguese_Brazil");

    // Opara�oes determinadas
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

            // Inicializando o fun�ao 
            duracao = questao31(horasInicio,minutosInicio,horasFim,minutosFim);

            //Sa�da de dados
            printf("A dura��o do jogo foi de %d em minutos\n",duracao);
            break;
        case 0: 
            printf("Finalizada");
            break;
        default:
            printf("Op�ao invalidade. Tente novamente");
            break;
        }
    }while (menu != 0);

    return 0;
}