#include<stdio.h>

#define max_carros 100 

typedef struct{
	char marca[100];
	char modelo[100];
	int ano;
	char cor[30];
}carros;

int main(){
	carros carro[max_carros];
	int c;
	printf("Quantos carros deseja cadastrar? ");
	scanf("%d",&c);
	for(int i=0;i<c;i++){
		printf("Carro %d: \n",i+1);
		printf("Qual a marca:");
		scanf("%s", carro[i].marca);
		printf("\nQual o modelo: ");
		scanf("%s",carro[i].modelo);
		printf("\nQual o ano do carro: ");
		scanf("%d",&carro[i].ano);
		printf("\nQual a cor do carro: ");
		scanf("%s",carro[i].cor);
	}
	printf("\nCarros cadastrados:\n");
	for(int i=0;i<c;i++){
		printf("Marca:%s\nModelo:%s\nAno:%d\nCor:%s",
		carro[i].marca,carro[i].modelo,carro[i].ano,carro[i].cor);
	}
	return 0;
}
