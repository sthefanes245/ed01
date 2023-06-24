#include "ordenacao.h"

int listaOrdenada(int lista[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        if (lista[i] < lista[i-1]) {
            return 0; // lista não está ordenada
        }
    }
    return 1; // lista está ordenada
}
