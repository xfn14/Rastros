/**
@file file.h
Definição do
*/
#ifndef SRC_FILE_H
#define SRC_FILE_H

#include "stdio.h"
#include <string.h>
#include "../dados/data.h"
#include "../dados/estado.h"
#include "../logica/jogada.h"

/**
\brief Esta função lê o Estado atual e grava o tabuleiro correspondente num ficheiro.
@param file_name O nome do ficheiro
@param estado O estado atual
*/
void gr(char *file_name, ESTADO *estado);
/**
\brief Esta função lê um ficheiro e verifica o Estado do tabuleiro.
@param file_name O nome do ficheiro
@param estado O estado atual
*/
void ler(char *file_name, ESTADO *estado);
/**
\brief Esta função através do estado indica quais foram as jogadas efetuadas pelos jogadores
@param estado O estado atual
*/
void movs(ESTADO *estado);

void pos(ESTADO *estado, int jogada);

#endif //SRC_FILE_H
