/*aqui vem a implementa��o da fun��o*/
#include "remocao.h"

void remov(int lista[], int *tamanho, int elem) { /*o tamanho foi passado como *tamanho pq quero atualizar o valor da variavel
dentro da fun��o. Se pass�ssemos o tamanho como uma vari�vel normal (int tamanho), qualquer altera��o feita dentro da fun��o
n�o afetaria a vari�vel original na fun��o main*/
    int i, j, contador;

    contador = 0;

    for (i = 0; i < *tamanho; i++) { //contagem de vezes que o elemento aparece
        if (lista[i] == elem) {
            contador++;
        }
    }
    //remo��o do elemento
    j = 0;
    for (i = 0; i < *tamanho; i++) {
        if (lista[i] != elem) { /*Verificamos se o elemento atual (lista[i]) � diferente do elemento a ser removido.
        Se for diferente, significa que encontramos um elemento que deve ser mantido na lista.*/
            lista[j] = lista[i];
        /*Copiamos o elemento atual (lista[i]) para a posi��o j da lista.
    Isso substitui o elemento a ser removido pela pr�xima ocorr�ncia v�lida na lista.*/
            j++;
        }
    }

    *tamanho -= contador;
}
