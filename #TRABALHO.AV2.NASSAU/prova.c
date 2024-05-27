/*
todas as questoes
fazer com switch case

*/
#include <stdio.h>

int questoes(){
	int questao = 0;
	do{
		printf("Qual questao voce deseja responder?\n");
		printf("1 - Questao 17\n");
		printf("2 - Questao 20\n");
		printf("3 - Questao 22\n");
		printf("4 - Questao 30\n");
        printf("5 - Questao 31\n");
		scanf("%d",&questao);
		if (!((questao >=1 )&&(questao <= 5))){
			printf("Opcao invalida! Digite um valor de 1 a 5:\n");
		}
	}while (!((questao >=1 )&&(questao <= 5)));
	return questao;
}


#include <stdio.h>

// Declaração das funções
void questao1();
void questao2();
void questao3();

int main() {
    int escolha;

    do {
        // Menu principal
        printf("\nEscolha uma das questões para executar:\n");
        printf("1. Questão 1\n");
        printf("2. Questão 2\n");
        printf("3. Questão 3\n");
        printf("0. Sair\n");
        printf("Digite a sua escolha: ");
        scanf("%d", &escolha);

        // Chamando a função apropriada com base na escolha do usuário
        switch (escolha) {
            case 1:
                questao1();
                break;
            case 2:
                questao2();
                break;
            case 3:
                questao3();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Escolha inválida! Por favor, tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}

// Implementação das funções

void questao1() {
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
}

void questao2() {
    printf("Esta é a implementação da Questão 2.\n");
    // Adicione o código da questão 2 aqui
}

void questao3() {
    printf("Esta é a implementação da Questão 3.\n");
    // Adicione o código da questão 3 aqui
}
