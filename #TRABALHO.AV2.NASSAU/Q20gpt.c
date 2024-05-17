#include <stdio.h>

int main() {
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

    return 0;
}
