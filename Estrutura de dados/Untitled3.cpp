#include <stdio.h>
#include <stdlib.h>

struct pessoa {
    char nome[80];
    int idade;
};

int main() {
    // Alocando memória
    float *vetfloat = (float *)malloc(5 * sizeof(float));
    if (vetfloat == NULL) {
        printf("Erro ao alocar memória para o vetor float\n");
        return 1;
    }

    int *vetint = (int *)malloc(5 * sizeof(int));
    if (vetint == NULL) {
        printf("Erro ao alocar memória para o vetor int\n");
        free(vetfloat);
        return 1;
    }

    char *vetchar = (char *)malloc(5 * sizeof(char));
    if (vetchar == NULL) {
        printf("Erro ao alocar memória para o vetor char\n");
        free(vetfloat);
        free(vetint);
        return 1;
    }

    struct pessoa *vetpessoa = (struct pessoa *)malloc(5 * sizeof(struct pessoa));
    if (vetpessoa == NULL) {
        printf("Erro ao alocar memória para vetor pessoa\n");
        free(vetfloat);
        free(vetint);
        free(vetchar);
        return 1;
    }

    // Inicializando e imprimindo os valores do vetor de floats
    for (int i = 0; i < 5; i++) {
        vetfloat[i] = (float)(i + 1) * 1.1;
        printf("vetor float[%d]: %.2f\n", i, vetfloat[i]);
    }

    // Inicializando e imprimindo os valores do vetor de ints
    for (int i = 0; i < 5; i++) {
        vetint[i] = i + 1;
        printf("vetor int[%d]: %d\n", i, vetint[i]);
    }

    // Inicializando e imprimindo os valores do vetor de chars
    for (int i = 0; i < 5; i++) {
        vetchar[i] = 'A' + i; // Atribuindo letras de A a E
        printf("vetor char[%d]: %c\n", i, vetchar[i]);
    }

    // Inicializando e imprimindo os valores do vetor de structs
    for (int i = 0; i < 5; i++) {
        snprintf(vetpessoa[i].nome, sizeof(vetpessoa[i].nome), "pessoa %d", i + 1);
        vetpessoa[i].idade = 20 + i;
        printf("vetpessoa[%d]: nome: %s, idade: %d\n", i, vetpessoa[i].nome, vetpessoa[i].idade);
    }

    // Liberando a memória alocada
    free(vetfloat);
    free(vetint);
    free(vetchar);
    free(vetpessoa);

    return 0;
}

