#include<stdio.h>
typedef struct{
	char dia[20];
	int mes;
	int ano;
}Data;

	int main(){
		Data data1;
		Data data2 = {"terca", 7, 2022};
		printf("Informe a data de visita! ");
		printf("\nDia: ");
		scanf("%s",&data1.dia);
		printf("\nMes: ");
		scanf("%i",&data1.mes);
		printf("\nAno: ");
		scanf("%i",&data1.ano);
		printf("A primeira visita foi marcada para :%s/%i/%i",data1.dia,data1.mes,data1.ano);
		printf("\n A segunda visita foi marcada para :%s/%i/%i",data2.dia,data2.mes,data2.ano);
	return 0;
	}

