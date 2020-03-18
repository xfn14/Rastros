#ifndef SRC_DATA_H
#define SRC_DATA_H

typedef enum{
    VAZIO,
    RASTRO,
    PECA,
    POS1,
    POS2
}CASA;

typedef struct {
    int coluna;
    int linha;
}COORDENADA;

typedef struct {
    COORDENADA jogador1;
    COORDENADA jogador2;
}JOGADA;
typedef JOGADA JOGADAS[32];

typedef struct{
    CASA tab[8][8];
    COORDENADA ultima_jogada;
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
}ESTADO;

#endif //SRC_DATA_H
