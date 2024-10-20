#include <stdio.h>

float reajuste(float valor,float percent){
	return valor+(valor*percent/100);
}
int main(){
	float valor, percent,valorR;
	
	printf("Digite o valor original: ");
	scanf("%f",&valor);
	
	printf("Digite o percentual de aumento: ");
	scanf("%f",&percent);
	
	valorR=reajuste(valor,percent);
	
	printf("Valor reajustado: %.2f", valorR);
	
	return 0;
}
