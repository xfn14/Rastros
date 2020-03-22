#ifndef SRC_ESTADO_H
#define SRC_ESTADO_H

#include <stdlib.h>
#include "../interface/tabuleiro.h"
/**
\brief Inicializa o estado
*/
ESTADO *inicializar_estado();
/**
\brief Função para obter o jogador atual
*/
int obter_jogador_atual(ESTADO *estado);
/**
\brief Função para obter o número de jogadas efetuadas
*/
int obter_numero_de_jogadas(ESTADO *estado);
/**
\brief Função que através do estado e da coordenada indica o estado da casa referente a essas coordenadas
*/
CASA obter_estado_casa(ESTADO *e, COORDENADA c);
/**
\brief Função para desenhar o tabuleiro
*/
void setTabuleiro(ESTADO *e, CASA tab[8][8]);
/**
\brief Função para obter a posição atual da PECA
*/
COORDENADA obter_coordenada_peca(CASA tab[8][8]);

#endif //SRC_ESTADO_H
