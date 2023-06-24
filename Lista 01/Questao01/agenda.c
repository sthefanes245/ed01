#include <stdio.h>
#include "agenda.h"

void imprime(agenda al[]) {
    printf("\n\n");
    printf("------Lista Telefonica------- \n");
    for (int i = 0; i < TAM; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s\n", al[i].nome);
        printf("E-mail: %s\n", al[i].email);
        printf("Telefone: %s\n", al[i].telefone);
        printf("-----------------------\n");
    }
}

/*O arquivo agenda.c � um arquivo de c�digo-fonte que cont�m a implementa��o da fun��o imprime
Onde encontra o c�digo real da fun��o imprime que foi declarada no arquivo de cabe�alho. */
