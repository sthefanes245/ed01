#define AGENDA_H_INCLUDED

#define TAM 2

typedef struct Lista {
    char nome[30];
    char email[20];
    char telefone[15];
} agenda;

void imprime(agenda al[]);



/*agenda.h da as informa��es necess�rias para que outros arquivos saibam como usar a estrutura agenda e a fun��o imprime.
� utilizado para declarar as estruturas de dados e as assinaturas das fun��es que ser�o utilizadas em outros arquivos do projeto*/
