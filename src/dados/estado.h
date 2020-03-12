#ifndef SRC_ESTADO_H
#define SRC_ESTADO_H

#include "../interface/tabuleiro.h"
#include "data.h"

ESTADO *inicializar_estado();
int obter_jogador_atual(ESTADO *estado);
int obter_numero_de_jogadas(ESTADO *estado);
CASA obter_estado_casa(ESTADO *e, COORDENADA c);
COORDENADA obter_coordenada_peca(ESTADO *e);

#endif //SRC_ESTADO_H
