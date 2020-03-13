#include "dados/data.h"
#include "dados/estado.h"
#include "interface/interpretador.h"

int main() {
    ESTADO *estado = inicializar_estado();
    mostrar_tabuleiro(estado);
    interpretador(estado);
    //COORDENADA coord_peca = obter_coordenada_peca(estado);
    //printf("%d", coord_peca.coluna);
    //printf("%d", coord_peca.linha);
    return 0;
}

