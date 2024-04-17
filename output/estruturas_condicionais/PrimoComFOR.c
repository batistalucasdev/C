#include <stdio.h>

int main (){
	int i;
	int num = 0;
	int contadorPrimo;
	printf("VERIFICAR SE O NUMERO EH PRIMO\n");
	printf("Digite o valor: ");
	scanf("%d",&num);
	
	contadorPrimo=0;
	for(i = 1; i <= num; i++){
		printf("Testando com: %d\n", i);
  	    if (num % i == 0){
		   contadorPrimo++;
		}
	}
	
	if ((contadorPrimo == 1)||(contadorPrimo == 2)){
		printf("Eh primo! contadorPrimo = %d",contadorPrimo);
	}else{
		printf("NAO eh primo! contadorPrimo = %d",contadorPrimo-);
	}
	
	getchar();
	return 0;
}