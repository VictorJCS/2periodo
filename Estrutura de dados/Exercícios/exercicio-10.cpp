#include<stdio.h>

int main(){
	int ctrl,maior;
	printf("Digite um numero: ");
	scanf("%d",&ctrl);
	
	while(ctrl!=9999){
		if(maior<ctrl){
		maior=ctrl;
	}
		printf("Digite um numero: ");
		scanf("%d",&ctrl);
	}
	printf("\n Maior valor informado: %d",maior);
	return 0;
}
