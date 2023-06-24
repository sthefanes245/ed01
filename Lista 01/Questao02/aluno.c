#include "aluno.h"

float media(aluno al) {
    float resul = 0.0;
    for (int i = 0; i < TAM; i++) {
        resul += al.notas[i];
    }
    return resul / TAM;
}

