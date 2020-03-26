#include "jogada.h"

int jogar(ESTADO *estado, COORDENADA coord){

    int validar = jogada_valida(estado, coord);
    if(validar == 1 || validar == 2 || validar == 3) {
        estado->tab[coord.linha][coord.coluna] = PECA;
        estado->tab[estado->ultima_jogada.linha][estado->ultima_jogada.coluna] = RASTRO;
        estado->ultima_jogada = coord;

        // Adicionar jogada ao array de jogadas
        adicionar_jogada(estado, coord);

        if(obter_jogador_atual(estado) == 1){
            estado->jogador_atual = 2;
        }else{
            estado->jogador_atual = 1;
        }

        putchar('\n');
        mostrar_tabuleiro(estado);

        if(validar == 1 || validar == 2){
            printf("\nJogador %d vence.", validar);
            quit = 1;
        }
        return 1;
    }else{
        printf("Jogada invalida.\n");
    }
    return 0;
}

int jogada_valida(ESTADO *estado, COORDENADA coord){
    int x1 = estado->ultima_jogada.coluna, y1 = estado->ultima_jogada.linha;
    int x2 = coord.coluna, y2 = coord.linha;

    // Validar casas em volta da PECA
    if(((x1 == x2) && (((abs(y1-y2))==1))) // Cima e baixo
       || (((abs(x2-x1))==1) && ((abs(y2-y1))==1 || y2 == y1 ))) // Esquerda e Direita
    {
        CASA casa_coord = obter_estado_casa(estado, coord);

        // Tabuleiro com a jogada efetuada
        CASA new_tab[8][8];
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                new_tab[i][j] = estado->tab[i][j];
            }
        }
        new_tab[coord.linha][coord.coluna] = PECA;
        new_tab[estado->ultima_jogada.linha][estado->ultima_jogada.coluna] = RASTRO;

        if((new_tab[abs(coord.linha-1)][abs(coord.coluna-1)] == RASTRO)
        && (new_tab[abs(coord.linha-1)][abs(coord.coluna)] == RASTRO)
        && (new_tab[abs(coord.linha-1)][abs(coord.coluna+1)] == RASTRO)
        && (new_tab[abs(coord.linha+1)][abs(coord.coluna-1)] == RASTRO)
        && (new_tab[abs(coord.linha+1)][abs(coord.coluna)] == RASTRO)
        && (new_tab[abs(coord.linha+1)][abs(coord.coluna+1)] == RASTRO)
        && (new_tab[abs(coord.linha)][abs(coord.coluna+1)] == RASTRO)
        && (new_tab[abs(coord.linha)][abs(coord.coluna-1)] == RASTRO)){
            return obter_jogador_atual(estado);
        }

         if(casa_coord == POS1) {
             return 1;
         }else if(casa_coord == POS2){
             return 2;
         }
         return 3;
    }
    return 0;
}

int adicionar_jogada(ESTADO *estado, COORDENADA coord){
    if(obter_jogador_atual(estado) == 1){
        JOGADA jog;
        jog.jogador1 = coord;
        estado->jogadas[estado->num_jogadas] = jog;
    }else{
        JOGADA jog = estado->jogadas[estado->num_jogadas];
        jog.jogador2 = coord;
        estado->jogadas[estado->num_jogadas] = jog;
        estado->num_jogadas = obter_numero_de_jogadas(estado) + 1;
    }
}
