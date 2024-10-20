#include <stdio.h>
typedef struct{
	char rua[100];
	int	numero;
	char cidade[50];
	char estado[50];
	int	cep;
}endereco;
typedef struct{
	char titulo[100];
	char autor[100];
	int ano;
	int isbn;
}livro;
typedef struct{
	char nome[100];
	endereco endereco;
	livro livro;
}biblioteca;
int main(){
	biblioteca biblioteca1={"Sky way",{"alameda",13,"anjos","ceu",55},{"alfa","solomon",1500,990012}};
	
	printf("%s\n%s\n%d\n%s\n%s\n%d\n%s\n%s\n%d\n%d",
	biblioteca1.nome,biblioteca1.endereco.rua,biblioteca1.
	endereco.numero,biblioteca1.endereco.cidade,biblioteca1.
	endereco.estado,biblioteca1.endereco.cep,biblioteca1.livro.
	titulo,biblioteca1.livro.autor,biblioteca1.livro.ano,
	biblioteca1.livro.isbn);
	
	return 0;
}
