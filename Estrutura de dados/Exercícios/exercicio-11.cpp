#include<stdio.h>

int main(){
	int num, soma;
	do{
	printf("Infome apenas numeros impares: ");
	scanf("%d",&num);
	if(num%2!=0){
		soma=soma+num;
	}
}while(num%2!=0);
	printf("A soma dos numeros impares foi: %d",soma);
	return 0;
}
