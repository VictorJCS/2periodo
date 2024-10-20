#include<stdio.h>

int main(){
	int num;
	do{
	printf("Digite numeros menores que 10 e maiores que 20: ");
	scanf("%d",&num);
	}while(num<10 || num>20);
	printf("Fim");
	return 0;
}
