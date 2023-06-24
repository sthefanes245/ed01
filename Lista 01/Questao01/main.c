#include <stdio.h>
#include <stdlib.h>
#include "agenda.h"

int main() {
    agenda a[TAM];

    printf("Agenda telefonica: \n");
    for (int i = 0; i < TAM; i++) {
        printf("Nome: \n");
        scanf("%s", a[i].nome);
        printf("Email: \n");
        scanf("%s", a[i].email);
        printf("Telefone: \n");
        scanf("%s", a[i].telefone);
    }

    imprime(a);

    return 0;
}

/*O arquivo main.c � outro arquivo de c�digo-fonte e cont�m a fun��o main, que � o ponto de entrada do programa.
Aqui, voc� solicita ao usu�rio que insira os dados dos contatos e chama a fun��o imprime para exibir os dados da agenda. */
