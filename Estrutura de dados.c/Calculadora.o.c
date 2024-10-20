#include<stdio.h>
int main(){
	int n1,n2,i;
	printf("Informe a operacao que deseja efetuar!");
	printf("[1]soma[2]subtracao[3]multiplicacao[4]divisao");
	scanf("%i",&i);
	if(i==1){
		printf("Informe o primeiro valor"),
		scanf("%i",&n1);
		printf("Informe o segundo valor"),
		scanf("%i",&n2);
		int soma(int n1,int n2);
		printf("O resultado da soma é:%i",r(int n1 + int n2));
	}
	return 0;
}
