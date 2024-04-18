#include <stdio.h>

int main()
{
    char x;
    float num1, num2;

    printf("Digite dois numeros: \n");
    scanf("%f %f",&num1, &num2);
    printf("Digite a operacao que deseja realizar: + (soma), - (subtracao), / (divisao) ou * (multiplicacao) ");
    scanf(" %c",&x);
    if (x == '+')
    {
        printf("A soma dos números é: %0.2f\n",num1 + num2);
    }
    else if (x == '-')
    {
        printf("A subtracao dos números é: %0.2f\n",num1 - num2);
    }
    else if (x == '/')
    {
        printf("A divisao dos números é: %0.2f\n",num1 / num2);
    }
    else if (x == '*')
    {
        printf("A multiplicacao dos números é: %0.2f\n",num1 * num2);
    }
    else
    {
        printf("Operador invalido.\n");
    }
    getchar();
    return 0;
}