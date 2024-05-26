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