#include<stdio.h>

int main(){
	int a, b;

	printf("Informe dois numeros:\n");
	scanf("%d %d",&a,&b);
	
	if(a==b){
		printf("Os numeros %d e %d sao iguais",a,b);
	}else if(a<b){
		printf("O numero %d e menor que %d",a,b);
	}else{
		printf("O numero %d e maior que %d",a,b);
	}
	return 0;
}
