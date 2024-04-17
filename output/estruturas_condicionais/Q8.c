#include <stdio.h>

//O primeiro termo da sequência de Fibonacci é 1 e o segundo termo da sequência de Fibonacci também é 1. Do terceiro termo em diante, devemos somar os dois termos anteriores para construir a sequência. Isso significa que o terceiro termo é 2, pois 1+1=2.

int main()
{
    int num1 = 1, num2 = 1,num;

    for (num1 = 1; num2 = 1, num++)
    {
        printf("A sequencia de Fibonacci eh: 1, 1, %d");
    }

    printf("Digite dois numeros: \n");
    scanf("%f %f",&num);
   
    getchar();
    return 0;
}