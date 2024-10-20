#include<stdio.h>

int main(){

	int n1,n2,n3,n4,c;

	printf("Informe 4 valores:\n");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	if(n1>50){
		printf("O 1: %d e maior que 50\n", n1);
		c++;
	}if(n2>50){
		printf("O 2: %d e maior que 50\n", n2);
		c++;
	}if(n3>50){
		printf("O 3: %d e maior que 50\n", n3);
		c++;
	}if(n4>50){
		printf("O 4: %d e maior que 50\n", n4);
		c++;
	}
	printf("%d numero(s) sao maiores que 50",c);
	return 0;
}
