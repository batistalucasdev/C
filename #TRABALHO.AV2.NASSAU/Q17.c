//17. Fazer um programa no qual o usuário vai entrando sucessivamente com valores positivos. Quando o usuário entrar com um valor negativo o programa pára de pedir valores e calcula a média dos valores já fornecidos.

#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    int contagem = 0;

    printf("Digite valores positivos. Para parar, digite um valor negativo.\n");

    printf("Digite um valor: ");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        contagem++;

        printf("Digite um valor: ");
        scanf("%f", &valor);
    }

    if (contagem == 0) {
        printf("Nenhum valor positivo foi fornecido.\n");
    } else {
        float media = soma / contagem;
        printf("A média dos valores fornecidos é: %.2f\n", media);
    }

    return 0;
}