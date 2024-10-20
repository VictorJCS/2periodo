#include<stdio.h>

int main(){
	
	int	n1,n2,n3,n4,soma;
	soma=0;
	printf("Informe 4 numeros:\n");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	if(n1%2==0){
		soma=soma+n1;
	}if(n2%2==0){
		soma=soma+n2;
	}if(n3%2==0){
		soma=soma+n3;
	}if(n4%2==0){
		soma=soma+n4;
	}
	printf("A soma dos numeros pares e: %d", soma);
	
	return 0;
}
