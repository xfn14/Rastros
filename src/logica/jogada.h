#ifndef SRC_JOGADA_H
#define SRC_JOGADA_H

#include "../dados/data.h"
#include "../dados/estado.h"

int jogar(ESTADO *estado, COORDENADA coord);
int jogada_valida(ESTADO *estado, COORDENADA coord);

#endif //SRC_JOGADA_H
