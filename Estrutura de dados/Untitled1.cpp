#include<stdio.h>
	typedef struct{
		char titulo[50];
		char autor[50];
		int ano;
		float preco;
	}livro;
int main(){
	
	livro livro1;
	
	printf("Digite o titulo do livro:");
	scanf("%s",&livro1.titulo);
	
	printf("Digite o autro do livro:");
	scanf("%s",&livro1.autor);

	printf("Digite o ano do livro:");
	scanf("%d",&livro1.ano);
	
	printf("Digite o preco do livro:");
	scanf("%f",&livro1.preco);
	
	printf("titulo:%s\n",livro1.titulo);
	printf("autor:%s\n",livro1.autor);
	printf("ano:%d\n",livro1.ano);
	printf("preco:R$%.2f\n",livro1.preco);
	
	return 0;
}
