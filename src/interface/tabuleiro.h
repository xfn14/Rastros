#ifndef SRC_TABULEIRO_H
#define SRC_TABULEIRO_H

#include "../dados/data.h"

const CASA tabuleiro_inicial[8][8];

/**
/brief Função que recebe um estado e imprime o tabuleiro para esse estado.
*/
void mostrar_tabuleiro(ESTADO *e);

#endif //SRC_TABULEIRO_H

