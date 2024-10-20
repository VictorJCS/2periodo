#include<stdio.h>

int main(){
	float salario, media;
	int cont,quant;
	
	printf("Informe a quantidade de funcionarios: \n");
	scanf("%d",&cont);
	quant=cont;
	while(cont>0){
		printf("Informe o salario do funcionario: \n");
		scanf("%f",&salario);	
		media=media+salario;
		cont--;
	}
	media=media/quant;	
	printf("A media salarial da empresa e: %.2f",media);
	return 0;
}
