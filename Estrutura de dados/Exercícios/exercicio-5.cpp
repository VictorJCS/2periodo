#include<stdio.h>

int main(){
	int n1, n2, soma;
	printf("Informe 2 numeros:\n");
	scanf("%d %d",&n1,&n2);
	soma=n1+n2;
	if(soma>=10){
		soma=soma+5;
		printf("O resultado e %d",soma);
	}else{
		soma=soma-7;
		printf("O resultado e %d",soma);
	}
	return 0;
}
