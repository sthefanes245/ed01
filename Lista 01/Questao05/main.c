/*Para listas est ́aticas, implemente uma fun ̧c ̃ao que elimine de uma determinada lista, todas as
ocorrˆencias de um dado elemento. Considere que a lista est ́a ordenada.*/
#include <stdio.h>
#include <stdlib.h>
#include "remocao.h"

int main() {
    int tam, elemento, i;

    printf("Informe o tamanho da lista: \n");
    scanf("%d", &tam);

    int val[tam];

    printf("\n");
    for (int i = 0; i < tam; i++) {
        printf("Informe o elemento %d da lista \n", i+1);
        scanf("%d", &val[i]);
    }

    printf("Digite o elemento que deseja remover da lista: ");
    scanf("%d", &elemento);

    remov(val, &tam, elemento);

    printf("\nLista atualizada \n");
    for (i = 0; i < tam; i++) {
        printf("%d ", val[i]);
    }

    return 0;
}
