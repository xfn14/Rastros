#ifndef SRC_DATA_H
#define SRC_DATA_H

typedef enum CASA CASA;
typedef struct COORDENADA COORDENADA;
typedef struct JOGADA JOGADA;
typedef struct ESTADO ESTADO;

enum CASA {
    VAZIO,
    RASTRO,
    PECA,
    POS1,
    POS2
};

struct COORDENADA {
    int coluna;
    int linha;
};

struct JOGADA {
    COORDENADA jogador1;
    COORDENADA jogador2;
};
typedef JOGADA JOGADAS[32];

struct ESTADO{
    CASA tab[8][8];
    COORDENADA ultima_jogada;
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
};

#endif //SRC_DATA_H
