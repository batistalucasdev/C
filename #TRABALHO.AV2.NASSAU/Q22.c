/*22. Faça um programa que sorteie um número aleatório entre 0 e 500 e pergunte ao usuário qual é o "número mágico". O programa deverá indicar se a tentativa efetuada pelo usuário é maior ou menor que o número mágico e contar o número de tentativas. Quando o usuário conseguir acertar o número o programa deverá classiﬁcar o usuário como: 
a.	De 1 a 3 tentativas: muito sortudo
b.	De 4 a 6 tentativas: sortudo
c.	De 7 a 10 tentativas: normal
d.	> 10 tentativas: tente novamente
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroMagico, chute, tentativas = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(0));
    numeroMagico = rand() % 501; // Sorteia um número entre 0 e 500

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

    return 0;
}
