#include "candidato.h"
#include <stdio.h>

void cadastrarCandidatos(candidato *c, int numCandidatos) {
    for (int i = 0; i < numCandidatos; i++) {
        printf("\nCandidato %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %s", c[i].nome);
        printf("Idade: ");
        scanf("%d", &c[i].idade);
        printf("Cidade: ");
        scanf(" %s", c[i].cidade);
    }
}
