#include <stdio.h>
int main(){
	
	int	n1,n2,soma;
	
	printf("Informe 2 valores:\n");
	scanf("%d %d",&n1,&n2);
	
	soma=n1+n2;
	
	if(soma>10){
		printf("O resultado e %d", soma);
	}else{
		printf("A soma nao e maior que 10");
	}
	
	return 0;
}
