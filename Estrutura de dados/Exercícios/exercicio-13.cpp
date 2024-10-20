#include <stdio.h>

int main(){
	int i;
	float nota,maior=-1,menor=11;
	for(i=0; i<5; i++){
		printf("Informe a nota do aluno: ");
		scanf("%f",&nota);
		if(nota>maior){
			maior=nota;
		}
		if(nota<menor){
			menor=nota;
		}
		
	}
	
	printf("A menor nota foi %.2f maior nota foi: %.2f",menor,maior);
	return 0;
}
