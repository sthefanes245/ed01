#ifndef ALUNO_H_INCLUDED/*verifica se a constante ALUNO_H_INCLUDED não foi definida anteriormente.
Caso não tenha sido definida, o bloco de código entre #ifndef e #endif será incluído*/
#define ALUNO_H_INCLUDED

#define TAM 4

typedef struct alunos {
    int matricula;
    char nome[30];
    float notas[TAM];
} aluno;

float media(aluno al);

#endif
