//20. Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são o número de horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se acrescenta nenhum adicional. Acima de 40h e até 60h há um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para essas horas. 

#include <stdio.h>

int main()
{
    int hora, hora_mais;
    float valor, salario, bonus50, bonus100;

    printf("Digite o numero de horas trabalhadas na semana: \n");
    scanf("%d", &hora);
    printf("Digite o valor da hora: \n");
    scanf("%f", &valor);

    if (hora <= 40)
    {
        salario = hora * valor;
        printf("O salario eh: R$%.2f\n", salario);
    }

    else if (salario > 40 && salario <= 60)
    {
        hora_mais = hora - 40;
        bonus50 = hora_mais * 1.5;
        salario = (hora * valor) + bonus50;
        printf("O salario eh: R$%.2f\n", salario);
    }
    
    else if (salario > 60)
    {
        hora_mais = hora - 60;
        bonus100 = hora_mais * 2.0;
        salario = (hora * valor) + bonus100;
        printf("O salario eh: R$%.2f\n", salario);
    }

    getchar ();
    return 0;
}