// Lucas Soares Batista/ Matrícula 01678004
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void questao1() {
    printf("Esta é a Questão 17.\n");

    float num, soma = 0.0;
    int contagem = 0;

    printf("Digite valores positivos. Para parar, digite um valor negativo.\n");
    printf("Digite um número: ");
    scanf("%f", &num);

    while (num >= 0) {
        soma += num;
        contagem++;
        printf("Digite um valor: ");
        scanf("%f", &num);
    }

    if (contagem == 0) {
        printf("Nenhum valor positivo foi fornecido.\n");
    } else {
        float media = soma / contagem;
        printf("A média dos valores digitados é: %.2f\n", media);
    }
}

void questao2() {
    printf("Esta é a Questão 20.\n");

    float horas_trabalhadas, valor_hora, salario;
    
    printf("Digite o número de horas trabalhadas na semana: ");
    scanf("%f", &horas_trabalhadas);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);

    if (horas_trabalhadas <= 40) {
        salario = horas_trabalhadas * valor_hora;
    } else if (horas_trabalhadas <= 60) {
        salario = 40 * valor_hora + (horas_trabalhadas - 40) * valor_hora * 1.5;
    } else {
        salario = 40 * valor_hora + 20 * valor_hora * 1.5 + (horas_trabalhadas - 60) * valor_hora * 2;
    }

    printf("O salário semanal é: R$%.2f\n", salario);
}

void questao3() {
    printf("Esta é a Questão 22.\n");

    int numeroMagico, chute, tentativas = 0;

    srand(time(0));
    numeroMagico = rand() % 501;

    printf("Bem-vindo ao jogo do número mágico!\n");
    printf("Tente adivinhar o número mágico entre 0 e 500.\n");

    do {
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        tentativas++;

        if (chute > numeroMagico) {
            printf("O número mágico é menor!\n");
        } else if (chute < numeroMagico) {
            printf("O número mágico é maior!\n");
        } else {
            printf("Parabéns! Você acertou o número mágico em %d tentativas.\n", tentativas);
            if (tentativas >= 1 && tentativas <= 3) {
                printf("Você é muito sortudo!\n");
            } else if (tentativas >= 4 && tentativas <= 6) {
                printf("Você é sortudo!\n");
            } else if (tentativas >= 7 && tentativas <= 10) {
                printf("Você é normal.\n");
            } else {
                printf("Tente novamente!\n");
            }
            break;
        }
    } while (1);
}

void questao4() {
    printf("Esta é a Questão 30.\n");

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
}

void questao5() {
    printf("Esta é a Questão 31.\n");

    int horaInicio, minutoInicio, horaTermino, minutoTermino;
    
    // Solicitar ao usuário a hora e minuto de início
    printf("Digite a hora de início do jogo (0-23): ");
    scanf("%d", &horaInicio);
    printf("Digite os minutos de início do jogo (0-59): ");
    scanf("%d", &minutoInicio);
    
    // Solicitar ao usuário a hora e minuto de término
    printf("Digite a hora de término do jogo (0-23): ");
    scanf("%d", &horaTermino);
    printf("Digite os minutos de término do jogo (0-59): ");
    scanf("%d", &minutoTermino);
    
    // Calcular e exibir a duração do jogo
    int duracao = calcularDuracaoJogo(horaInicio, minutoInicio, horaTermino, minutoTermino);
    printf("A duração do jogo é de %d minutos\n", duracao);
}
