#include <stdio.h>
#include "dados/data.h"
#include "dados/estado.h"
#include "interface/tabuleiro.h"
#include "logica/jogada.h"

#define BUF_SIZE 1024

int main() {

    ESTADO *estado = inicializar_estado();
    //COORDENADA coord_peca = obter_coordenada_peca(estado);
    //printf("%d", coord_peca.coluna);
    //printf("%d", coord_peca.linha);

    mostrar_tabuleiro(estado);

    return 0;
}

