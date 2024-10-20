#include<stdio.h>

float conv(float pol){
	return pol*2.54;
}

int main(){
	float pol, cent;
	
	printf("Digite o valor em polegads");
	scanf("%f",&pol);
	
	cent=conv(pol);
	
	printf("%.2f polegadas e igual a %.2f centimetros. \n",pol,cent);
	
	return 0;
}
