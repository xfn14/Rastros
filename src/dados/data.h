/**
@file data.h
Definição do estado e das funções que o manipulam
*/
#ifndef SRC_DATA_H
#define SRC_DATA_H

/**
\brief Tipo de dados para a casa
*/
typedef enum{
    VAZIO,
    RASTRO,
    PECA,
    POS1,
    POS2
}CASA;

/**
\brief Tipo de dados para as coordenadas
*/
typedef struct {
    int coluna;
    int linha;
}COORDENADA;

/**
\brief Tipo de dados para a jogada
*/
typedef struct {
    COORDENADA jogador1;
    COORDENADA jogador2;
}JOGADA;

/**
\brief Tipo de dados para as jogadas
*/
typedef JOGADA JOGADAS[32];

/**
\brief Tipo de dados para o estado
*/
typedef struct{
    /** O tabuleiro */
    CASA tab[8][8];
    /** As coordenadas da ultima jogada */
    COORDENADA ultima_jogada;
    /** As jogadas */
    JOGADAS jogadas;
    /** O número de jogadas, usado no prompt */
    int num_jogadas;
    /** O nº do comando, usado no prompt */
    int jogador_atual;
}ESTADO;

#endif //SRC_DATA_H
