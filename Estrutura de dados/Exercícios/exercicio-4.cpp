#include<stdio.h>

int main(){
	
	int n;
	
	printf("Informe um numero: ");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("O numero:%d e par",n);
	}else{
		printf("O numero:%d e impar",n);		
	}
	return 0;
}
