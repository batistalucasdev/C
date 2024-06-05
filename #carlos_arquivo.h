#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void questao17() {
    // Declaração de variáveis 
    int contador = 0;
    float valor, soma = 0;
    
    // Entrada de dados
    printf("--------------Calcular a média dos valores positivos------------\n");
    printf("Digite um valor positivo (negativo irá finalizar a adição):\n");
    
    // Manipulação de dados 
    while (1) {
        printf("Digite o valor:\n");
        scanf("%f", &valor);
        
        // Finaliza o loop caso o valor seja menor que 0
        if (valor < 0) {
            break;
        }
        
        soma += valor;
        contador++;
    }
    
    // Encerra o loop / saída de dados
    if (contador > 0) {
        float media = soma / contador;
        printf("A média dos valores fornecidos é: %.2f\n", media);
    } else {
        printf("Nenhum valor positivo foi fornecido.\n");
    }
}

void questao20 (){
    // Declaraçao de variaveis 
    float horas, valor, salario, porcentagem;
    
    // Entrada de dados 
    printf("----------Calculadora Sálario Semanal---------- \n");
    printf("Digite o número de horas trabalhadas: ");
    scanf("%f",&horas);
    printf("Digite o valor da hora: ");
    scanf("%f",&valor);

    // Manipulaçao dos dado / calculo das salario
    salario = horas * valor;

    // Bonificaçao 
    if (horas > 40 && horas < 60){
        porcentagem = salario * 50 / 100;   
        salario = salario + porcentagem;      
    }else if(horas > 60 ){
        porcentagem = salario * 100 / 100;   
        salario = salario + porcentagem;  
    }

    //saida de dados 
    printf("O salário do funcionario e de %.2f \n",salario);
}

void questao22 (){
    printf("--------------Sorteie um número mágico------------\n");

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Gera o número aleatório entre 0 e 500
    int numeroMagico = rand() % 1;
    int palpite, tentativas = 0;

    printf("Adivinhe o numero magico entre 0 e 500!\n");

    // Loop até o usuário acertar o número
    do {
        // Entrada de dado
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroMagico) {
            printf("Seu palpite e menor que o numero magico.\n");
        } else if (palpite > numeroMagico) {
            printf("Seu palpite e maior que o numero magico.\n");
        }
    } while (palpite != numeroMagico);
    
    // Saida de dados 
    printf("Voce acertou o numero magico %d em %d tentativas.\n", numeroMagico, tentativas);

    // Classificação do usuário com base no número de tentativas
    printf("Sua Classificação: ");
    if (tentativas <= 3) {
        printf("Parabens! Voce e muito sortudo!\n");
    } else if (tentativas <= 6) {
        printf("Parabens! Voce e sortudo!\n");
    } else if (tentativas <= 10) {
        printf("Voce e normal.\n");
    } else {
        printf("Tente novamente.\n");
    }

}

void questao30 (){
    // Declaraçao de variaveis     
    int mes, ano;
    //entrada de dados
    printf("--------------Cálculo da quantidade de dias em um mês------------\n");
    printf("Insira um mes 1-12\n");
    scanf("%d", &mes);
    printf("Insira o ano\n");
    scanf("%d", &ano);
    //Determina a quantidade de dias
    int dias;
    switch (mes)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        dias = 31;
        break;
    case 4: case 6: case 9: case 11:
    dias = 30;
        break;
        case 2:
    //calculo do ano bisexto
    if((ano % 4 == 0 && ano % 100!=0) || (ano % 400 == 0)){
        dias = 29;
    }else{
        dias = 28;
    }
    break;
    default:
        printf("Mês inválido\n");
        break;
    }
    //saída de dados
    printf("O mes %d do ano %d tem %d dias\n", mes, ano, dias);
}
int questao31 (int horasInicio, int minutosInicio, int horasFim, int minutosFim){
    //Declaraçao de variaveis 
    int iniciosEmMinutos = horasInicio * 60 + minutosInicio;
    int fimEmMinutos =  horasFim * 60 + minutosFim;
    int duracao;

    //Caso o fim for antes do inicio em outro dia adiciona 24 horas
    if (fimEmMinutos < iniciosEmMinutos){
        fimEmMinutos += 24 * 60;
    }

    duracao = fimEmMinutos - iniciosEmMinutos;
    return duracao;
}