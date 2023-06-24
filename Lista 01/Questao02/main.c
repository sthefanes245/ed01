/*Crie um programa que receba a matricula, nome e as notas de 4 provas de 1 aluno. Use
Struct para criar um TAD Aluno e crie uma função para calcular e retornar a média.*/
#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main() {
    aluno a;
    float med;

    printf("Informe o nome do aluno: \n");
    scanf("%s", a.nome);
    printf("Informe a matricula do aluno: \n");
    scanf("%d", &a.matricula);

    for (int i = 0; i < TAM; i++) {
        printf("Informe a nota %d \n", i + 1);
        scanf("%f", &a.notas[i]);
    }

    med = media(a);

    printf("\nNome: %s \n", a.nome);
    printf("Matricula: %d \n", a.matricula);
    printf("Media das notas: %.2f \n", med);
    return 0;
}
