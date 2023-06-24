#ifndef ALUNO_H_INCLUDED/*verifica se a constante ALUNO_H_INCLUDED n�o foi definida anteriormente.
Caso n�o tenha sido definida, o bloco de c�digo entre #ifndef e #endif ser� inclu�do*/
#define ALUNO_H_INCLUDED

#define TAM 4

typedef struct alunos {
    int matricula;
    char nome[30];
    float notas[TAM];
} aluno;

float media(aluno al);

#endif
