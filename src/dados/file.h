#ifndef SRC_FILE_H
#define SRC_FILE_H

#include "stdio.h"
#include <string.h>
#include "data.h"
#include "estado.h"

/**
\brief Esta função lê o Estado atual e grava o tabuleiro correspondente num ficheiro.
*/
void gr(char *file_name, ESTADO *estado);
/**
\brief Esta função lê um ficheiro e verifica o Estado do tabuleiro.
*/
void ler(char *file_name, ESTADO *estado);

#endif //SRC_FILE_H
