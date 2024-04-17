#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: \n");
    scanf("%d",&num);
   if (num % 2 == 0)
   {
    printf("Esse numero eh par! \n");
   }
   else
   {
    printf("Esse numero NAO eh par! \n");
   }
    getchar();
    return 0;
}