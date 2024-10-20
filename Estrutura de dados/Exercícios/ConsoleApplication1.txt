#ifndef FUNCOES_H
#define FUNCOES_H

void cad(int* matricula, char* nome, size_t nome_size);

int soma(int x, int y, int z);

int sub(int x, int y, int z);

int mult(int x, int y);

int divdir(int x, int y);

int pot(int x, int y);

int rad(int x);

void swap(int* x, int* y);

typedef struct
{
	char nome[50];
	int matricula;
	int n1;
	int n2;
	int n3;
}Aluno;
#endif

----------------------------------------------------------------------------


#include <stdio.h>
#include <math.h>
#include "struAlunos.h"

void cad(int* matricula, char* nome, size_t nome_size) {
    printf("Digite sua matricula: \n");
    scanf_s("%i", matricula);
    printf("Digite seu nome: \n");
    scanf_s("%s", nome, nome_size);
}

int soma(int x, int y, int z) {
    return x + y + z;
}

int sub(int x, int y, int z) {
    return x - y - z;
}

int mult(int x, int y) {
    return x * y;
}

int dividir(int x, int y) {
    if (y != 0) {
        return x / y;
    }
    else {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
}

int pot(int x, int y) {
    return pow(x, y);
}

int rad(int x) {
    return sqrt(x);
}

void swap(int* x, int* y) {
    int troca = *x;
    *x = *y;
    *y = troca;
    printf("\nSwap realizado: %d <-> %d\n", *x, *y);
}

int main() {
    Aluno aluno1;

    aluno1.n1 = 15;
    aluno1.n2 = 5;
    aluno1.n3 = 1;

    int somar = soma(aluno1.n1, aluno1.n2, aluno1.n3);
    printf("\nSoma: %i", somar);

    int subtrair = sub(aluno1.n1, aluno1.n2, aluno1.n3);
    printf("\nSubtracao: %i", subtrair);

    int multiplicar = mult(aluno1.n1, aluno1.n2);
    printf("\nMultiplicacao: %i", multiplicar);

    int div = dividir(aluno1.n1, aluno1.n2);
    printf("\nDivisao: %i", div);

    int potenciacao = pot(aluno1.n1, 2);
    printf("\nPotencia: %i", potenciacao);

    int raizQuadrada = rad(aluno1.n1);
    printf("\nRaiz Quadrada: %i", raizQuadrada);

    swap(&aluno1.n1, &aluno1.n2);

    return 0;
}
