/*Num processo seletivo para admissão de alunos em uma escola e precisa cadastrar os dados dos
candidatos. Para isso, construir um programa que armazene o nome, idade e cidade onde reside
cada candidato. Armazene essas informações em uma estrutura de dados e utilize alocação
dinâmica de memória para inserir cada candidato informado pelo usuário.*/
#include <stdio.h>
#include <stdlib.h>
#include "candidato.h"

int main() {
    int numCandidatos;
    candidato *c;

    printf("Digite o numero de candidatos: ");
    scanf("%d", &numCandidatos);

    c = malloc(numCandidatos * sizeof(candidato));
    /*alocando memoria, Multiplica o número de candidatos (numCandidatos) pelo tamanho de
    cada candidato (sizeof(candidato)) para obter o tamanho total necessário em bytes*/
    if (c == NULL) {
        printf("Erro de alocacaoo de memoria.\n");
        return 1;
    }

    cadastrarCandidatos(c, numCandidatos);

    printf("\nDados dos candidatos cadastrados:\n");
    for (int i = 0; i < numCandidatos; i++) {
        printf("\nCandidato %d:\n", i + 1);
        printf("Nome: %s\n", c[i].nome);
        printf("Idade: %d\n", c[i].idade);
        printf("Cidade: %s\n", c[i].cidade);
    }

    free(c); /*libera o bloco quando não estiver mais o usando*/
    return 0;
}
