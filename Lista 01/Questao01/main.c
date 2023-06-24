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

/*O arquivo main.c é outro arquivo de código-fonte e contém a função main, que é o ponto de entrada do programa.
Aqui, você solicita ao usuário que insira os dados dos contatos e chama a função imprime para exibir os dados da agenda. */
