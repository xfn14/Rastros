#include "estado.h"
#include <stdlib.h>

ESTADO *inicializar_estado(){
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));

    *e = (ESTADO)
            {
        .tab = tabuleiro_inicial,
        .jogadas = {},
        .jogador_atual = 1,
        .num_jogadas = 0
            };

    return e;
}

int obter_jogador_atual(ESTADO *estado){
    return estado->jogador_atual;
}

int obter_numero_de_jogadas(ESTADO *estado){
    return estado->num_jogadas;
}

CASA obter_estado_casa(ESTADO *e, COORDENADA c){
    return e->tab[c.coluna][c.linha];
}