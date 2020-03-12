#include "estado.h"
#include <stdlib.h>

ESTADO *inicializar_estado(){
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));

    *e = (ESTADO *)
            {
        .tab = tabuleiro_inicial,
        .jogadas = {},
        .jogador_atual = 1,
        .num_jogadas = 0
            };

    return e;
}

int obter_jogador_atual(ESTADO *estado){

}

int obter_numero_de_jogadas(ESTADO *estado){

}

CASA obter_estado_casa(ESTADO *e, COORDENADA c){

}