#include <stdio.h>
#include <stdlib.h>

struct livro {
    char titulo[100];
    char autor[100];
    int ano;
};

int main() {
    struct livro *vetlivro = (struct livro *)calloc(3, sizeof(struct livro));
    if (vetlivro == NULL) {
        printf("Erro ao alocar mem�ria para o vetor livro\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("Digite o t�tulo do livro %d: ", i + 1);
        scanf(" %[^\n]", vetlivro[i].titulo); // Adicionando espa�o antes do formato
        printf("Digite o autor do livro %d: ", i + 1);
        scanf(" %[^\n]", vetlivro[i].autor);
        printf("Digite o ano do livro %d: ", i + 1);
        scanf("%d", &vetlivro[i].ano); // Corrigido para int
    }

    printf("\nLivros cadastrados:\n");
    for (int i = 0; i < 3; i++) {
        printf("Livro %d:\nT�tulo: %s\nAutor: %s\nAno: %d\n", 
               i + 1, vetlivro[i].titulo, vetlivro[i].autor, vetlivro[i].ano);
    }

    // Realocando mem�ria para adicionar 2 livros
    vetlivro = (struct livro *)realloc(vetlivro, 5 * sizeof(struct livro));
    if (vetlivro == NULL) {
        printf("Erro ao realocar a mem�ria para o vetor de livros\n");
        return 1;
    }

    for (int i = 3; i < 5; i++) {
        printf("Digite o t�tulo do livro %d: ", i + 1);
        scanf(" %[^\n]", vetlivro[i].titulo);
        printf("Digite o autor do livro %d: ", i + 1);
        scanf(" %[^\n]", vetlivro[i].autor);
        printf("Digite o ano do livro %d: ", i + 1);
        scanf("%d", &vetlivro[i].ano); // Corrigido para int
    }

    printf("\nLivros cadastrados ap�s a realoca��o:\n");
    for (int i = 0; i < 5; i++) {
        printf("Livro %d:\nT�tulo: %s\nAutor: %s\nAno: %d\n", 
               i + 1, vetlivro[i].titulo, vetlivro[i].autor, vetlivro[i].ano);
    }

    // Liberando a mem�ria alocada
    free(vetlivro);
    
    return 0;
}

