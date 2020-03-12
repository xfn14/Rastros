#ifndef SRC_TABULEIRO_H
#define SRC_TABULEIRO_H

#include "../dados/data.h"

CASA tabuleiro_inicial[8][8] =
        {
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, BRANCA},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, PECA, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {PRETA, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO}
        };

void mostrar_tabuleiro();

#endif //SRC_TABULEIRO_H

