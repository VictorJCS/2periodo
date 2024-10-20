#include <stdio.h>

int main(){
	char nome[60];
	float saldo;
	int cont=1;
	
	while(cont<=10){
		
		printf("Informe o nome do cliente:\n ");
		scanf("%s[59]",&nome);
		
		printf("Infome o saldo do cliente:\n ");
		scanf("%f",&saldo);
		
		if(saldo>0){
			printf("Cliente:%s esta com a conta normal!\n",nome);
		}else{
			printf("Cliente:%s esta com a conta estourada!\n",nome);
		}
		
	}
	
	return 0;
}
