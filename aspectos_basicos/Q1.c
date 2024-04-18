#include <stdio.h>

int main()
{
    int segundo, minuto, hora, resto_segundo;

    printf("Digite um numero inteiro de segundos: \n");
    scanf("%d",&segundo);
    minuto = resto_segundo / 60;
    resto_segundo = minuto % 3600;
    hora = segundo / 3600;
    printf("%d corresponde a: %d horas, %d minutos e %d segundos.\n", segundo, hora, minuto, segundo);
    getchar();
    return 0;
}