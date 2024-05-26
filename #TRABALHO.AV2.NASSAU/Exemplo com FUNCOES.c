#include <stdio.h>

#define MAX 5

int opcoes(){
	int opcao = 0;
	do{
		printf("Qual operacao que vc deseja realizar?\n");
		printf("1 - Soma\n");
		printf("2 - Subtracao\n");
		printf("3 - Multiplicacao\n");
		printf("4 - Sair\n");
		scanf("%d",&opcao);
		if (!((opcao >=1 )&&(opcao <= 4))){
			printf("Opcao invalida! Digite escolha entre 1 a 4:\n");
		}
	}while (!((opcao >=1 )&&(opcao <= 4)));
	return opcao;
}


void q1(){
	printf("Questão 01: Faz ....\n");
	//1 - Declaracao de variáveis
	int num;
	int somaTotal=0;
	int i;
	
	for (i=1; i<=MAX; i++){
		//2 - Entrada dados
		printf("Digite um numero:");
		scanf("%d",&num);
		//3 - Lógica da problema
		if(num%2 == 1){ //teste para saber se eh impar.
			somaTotal = somaTotal + num;
		 // i++  <=>  i = i + 1
		}
	}
	//4 - Apresentar os resultados
	printf("A soma total dos numeros impares eh: %d",somaTotal);
	
}

void main(){
	int op;
	// informaçoes para o usuário
	switch(op){
	case 1: q1();
		break;
	default:
		break;
	}
	
	
}