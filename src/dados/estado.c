#include "estado.h"

const CASA tabuleiro_inicial[8][8] =
        {
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, POS2},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, PECA, VAZIO, VAZIO,  VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {POS1, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO}
        };

ESTADO *inicializar_estado() {
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            e->tab[i][j] = tabuleiro_inicial[i][j];
        }
    }

    for(int i = 0; i < 32; i++){
        COORDENADA nula;
        nula.coluna = -1;
        nula.linha = -1;

        e->jogadas[i].jogador1 = nula;
        e->jogadas[i].jogador2 = nula;
    }

    COORDENADA pos_inicial_peca;
    pos_inicial_peca.coluna = 4;
    pos_inicial_peca.linha = 3;

    e->ultima_jogada = pos_inicial_peca;
    e->jogador_atual = 1;
    e->num_jogadas = 0;

    return e;
}

int obter_jogador_atual(ESTADO *estado){
    return estado->jogador_atual;
}

int obter_numero_de_jogadas(ESTADO *estado){
    return estado->num_jogadas;
}

CASA obter_estado_casa(ESTADO *e, COORDENADA c){
    return e->tab[c.linha][c.coluna];
}

void setTabuleiro(ESTADO *e, CASA tab[8][8]){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            e->tab[i][j] = tab[i][j];
        }
    }
}

COORDENADA obter_coordenada_peca(CASA tab[8][8]){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(tab[i][j] == PECA){
                COORDENADA coord = {
                        .coluna = j,
                        .linha = i
                };
                return coord;
            }
        }
    }
}
