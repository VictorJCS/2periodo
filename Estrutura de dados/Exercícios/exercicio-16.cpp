#include<stdio.h>

typedef struct{
	char nome[100];
	int idade;
	int dia;
	int mes;
	int ano_n;
}ficha;

int main(){
	ficha ficha1;
	printf("Informe o nome:");
	scanf("%s",ficha1.nome);
	printf("Informe a idade:");
	scanf("%d",&ficha1.idade);
	printf("Informe o dia de nascimento:");
	scanf("%d",&ficha1.dia);
	printf("Informe o mes de nascimento:");
	scanf("%d",&ficha1.mes);
	printf("Informe o ano de nascimento:");
	scanf("%d",&ficha1.ano_n);
	printf("Sua ficha e:\nNome:%s\nIdade:%d\nData de nascimento:%d/%d/%d",
	ficha1.nome,ficha1.idade,ficha1.dia,ficha1.mes,ficha1.ano_n);
	
	return 0;
}
