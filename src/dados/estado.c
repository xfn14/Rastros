#include "estado.h"
/**
\brief Tabuleiro inicial
*/
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
/**
\brief Função que inicia o estado
*/
ESTADO *inicializar_estado() {
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            e->tab[i][j] = tabuleiro_inicial[i][j];
        }
    }

    // e->jogadas init is empty

    COORDENADA pos_inicial_peca;
    pos_inicial_peca.coluna = 4;
    pos_inicial_peca.linha = 3;

    e->ultima_jogada = pos_inicial_peca;
    e->jogador_atual = 1;
    e->num_jogadas = 0;

    return e;
}
/**
\brief Função que através do estado indica qual é o jogador atual
*/
int obter_jogador_atual(ESTADO *estado){
    return estado->jogador_atual;
}
/**
\brief Função que através do estado indica o numero de jogadas efetuadas
*/
int obter_numero_de_jogadas(ESTADO *estado){
    return estado->num_jogadas;
}
/**
\brief Função que através do estado e da coordenada indica o estado da casa referente a essas coordenadas
@param e Apontador para o estado
@param c A coordenada
*/
CASA obter_estado_casa(ESTADO *e, COORDENADA c){
    return e->tab[c.linha][c.coluna];
}
/**
\brief Função que desenha o tabuleiro
*/
void setTabuleiro(ESTADO *e, CASA tab[8][8]){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            e->tab[i][j] = tab[i][j];
        }
    }
}

/**
\brief Função para obter a posição da PECA
percorrendo a matriz da tabuleiro.
 */
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
