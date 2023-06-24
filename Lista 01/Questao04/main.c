/*Considerando listas estáticas, faça uma função em C que verifique se a lista está ordenada.*/
#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"

int main() {
    int tam;
    printf("Informe o tamanho da lista: \n");
    scanf("%d", &tam);

    int val[tam];

    printf("\n");

    for (int i = 0; i < tam; i++) {
        printf("Informe o elemento %d da lista \n", i+1);
        scanf("%d", &val[i]);
    }

    if (listaOrdenada(val, tam)) {
        printf("A lista esta ordenada \n");
    } else {
        printf("A lista não esta ordenada \n");
    }

    return 0;
}
