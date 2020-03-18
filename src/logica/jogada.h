#ifndef SRC_JOGADA_H
#define SRC_JOGADA_H

#include "../dados/estado.h"
#include "../interface/interpretador.h"

int jogar(ESTADO *estado, COORDENADA coord);
int jogada_valida(ESTADO *estado, COORDENADA coord);
int adicionar_jogada(ESTADO *estado, COORDENADA coord);

#endif //SRC_JOGADA_H
