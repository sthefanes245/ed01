/*aqui vem a implementação da função*/
#include "remocao.h"

void remov(int lista[], int *tamanho, int elem) { /*o tamanho foi passado como *tamanho pq quero atualizar o valor da variavel
dentro da função. Se passássemos o tamanho como uma variável normal (int tamanho), qualquer alteração feita dentro da função
não afetaria a variável original na função main*/
    int i, j, contador;

    contador = 0;

    for (i = 0; i < *tamanho; i++) { //contagem de vezes que o elemento aparece
        if (lista[i] == elem) {
            contador++;
        }
    }
    //remoção do elemento
    j = 0;
    for (i = 0; i < *tamanho; i++) {
        if (lista[i] != elem) { /*Verificamos se o elemento atual (lista[i]) é diferente do elemento a ser removido.
        Se for diferente, significa que encontramos um elemento que deve ser mantido na lista.*/
            lista[j] = lista[i];
        /*Copiamos o elemento atual (lista[i]) para a posição j da lista.
    Isso substitui o elemento a ser removido pela próxima ocorrência válida na lista.*/
            j++;
        }
    }

    *tamanho -= contador;
}
