#ifndef CANDIDATO_H_INCLUDED
#define CANDIDATO_H_INCLUDED

typedef struct candidatos {
    char nome[30];
    int idade;
    char cidade[30];
} candidato;

void cadastrarCandidatos(candidato *c, int numCandidatos);

#endif
