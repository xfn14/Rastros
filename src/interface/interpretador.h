#ifndef SRC_INTERPRETADOR_H
#define SRC_INTERPRETADOR_H

#include <stdio.h>
#include <string.h>
#include "../logica/jogada.h"
#include "../dados/file.h"

int quit;
/**
\brief Esta função interpreta o comando a executar e chamar a função correspondente do interface ou da lógica do programa.
*/
int interpretador(ESTADO *e);

#endif //SRC_INTERPRETADOR_H
