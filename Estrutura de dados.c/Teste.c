#include<stdio.h>

typedef struct{
	int ano;
	int mes;
	int dia;
}idade;

typedef struct{
	char nome[100];
	int cpf;
	idade idade;
} usuario;

int main(){
	usuario usuario1;
	usuario usuario2={"Carlos",9213512, {1992,9,25}};
	printf("Registre o primeiro usuario!\n");
	printf("Nome: ");
	scanf("%s", &usuario1.nome);
	printf("Cpf: ");
	scanf("%i", &usuario1.cpf);
	printf("Ano: ");
	scanf("%i",&usuario1.idade.ano);
	printf("Mes: ");
	scanf("%i",&usuario1.idade.mes);
	printf("Dia: ");
	scanf("%i",&usuario1.idade.dia);
	printf("\nNome: %s\nCpf:%i\nData de nascimento: %i/%i/%i",usuario1.nome,usuario1.cpf,usuario1.idade.ano,usuario1.idade.mes,usuario1.idade.dia);
	printf("\nNome: %s\nCpf:%i\nData de nascimento: %i/%i/%i",usuario2.nome,usuario2.cpf,usuario2.idade.ano,usuario2.idade.mes,usuario2.idade.dia);
	return 0;
}
