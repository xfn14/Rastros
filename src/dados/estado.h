#ifndef SRC_ESTADO_H
#define SRC_ESTADO_H

#include <stdlib.h>
#include "../interface/tabuleiro.h"

ESTADO *inicializar_estado();
int obter_jogador_atual(ESTADO *estado);
int obter_numero_de_jogadas(ESTADO *estado);
CASA obter_estado_casa(ESTADO *e, COORDENADA c);
void set_tabuleiro(ESTADO *e, CASA tab[8][8]);
COORDENADA obter_coordenada_peca(CASA tab[8][8]);

#endif //SRC_ESTADO_H
