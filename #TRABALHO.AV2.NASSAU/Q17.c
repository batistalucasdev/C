//17. Fazer um programa no qual o usuário vai entrando sucessivamente com valores positivos. Quando o usuário entrar com um valor negativo o programa pára de pedir valores e calcula a média dos valores já fornecidos.

#include <stdio.h>

int main() {
    float num, soma = 0.0;
    int contagem = 0;

    printf("Digite valores positivos. Para parar, digite um valor negativo.\n");

    printf("Digite um número: ");
    scanf("%f", &num);

    while (num >= 0)
    {
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

    return 0;
}