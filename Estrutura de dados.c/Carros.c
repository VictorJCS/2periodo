#include<stdio.h>

#define max_carros[100]
#define max_texto[50]

typedef struct{
	char marca[max_texto];
	char modelo[max_texto];
	int ano;
	char cor[max_texto];
} carro;
int main(){

int n;
carro carro[max_carros]
printf(" Deseja registrar um carro? ");
scanf("%i",&n);

if(n>max_carros||n<=0){
	printf("O numero fornecido e invalido, informe um numero entre 1 e %i\n",max_carros);
	return 1;
}	
    for (int i = 0; i < n; i++) {
        printf("\nCarro %d\n", i + 1);
        printf("Marca: ");
        scanf(" %49[^\n]", carros[i].marca); // Lê até 49 caracteres ou até nova linha
        printf("Modelo: ");
        scanf(" %49[^\n]", carros[i].modelo); // Lê até 49 caracteres ou até nova linha
        printf("Ano: ");
        scanf("%d", &carros[i].ano);
        printf("Cor: ");
        scanf(" %49[^\n]", carros[i].cor); // Lê até 49 caracteres ou até nova linha
    }

    // Exibição dos dados dos carros
    printf("\nDados dos carros registrados:\n");
    for (int i = 0; i < n; i++) {
        printf("\nCarro %d\n", i + 1);
        printf("Marca: %s\n", carros[i].marca);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Ano: %d\n", carros[i].ano);
        printf("Cor: %s\n", carros[i].cor);
    }

    return 0;
}
