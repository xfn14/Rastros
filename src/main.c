#include <stdio.h>
#include "dados/data.h"
#include "dados/estado.h"
#include "interface/tabuleiro.h"
#include "logica/jogada.h"

#define BUF_SIZE 1024

int main() {
    ESTADO *estado = inicializar_estado();
    mostrar_tabuleiro();

    return 0;
}

