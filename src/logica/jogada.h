#ifndef SRC_JOGADA_H
#define SRC_JOGADA_H

#include "../dados/estado.h"
#include "../interface/interpretador.h"
/**
\brief Função que ao fornecer um estado e a coordenada efetua uma jogada
*/
int jogar(ESTADO *estado, COORDENADA coord);
/**
\brief Função que verifica se a jogada é válida
*/
int jogada_valida(ESTADO *estado, COORDENADA coord);
/**
\brief Função que adiciona as jogadas ao array de jogadas
*/
int adicionar_jogada(ESTADO *estado, COORDENADA coord);

#endif //SRC_JOGADA_H
