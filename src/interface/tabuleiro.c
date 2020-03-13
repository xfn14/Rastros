#include <stdio.h>
#include "tabuleiro.h"

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

void mostrar_tabuleiro(ESTADO *e){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            CASA cs = e->tab[i][j];
            if(cs == POS1) putchar('1');
            if(cs == POS2) putchar('2');
            if(cs == RASTRO) putchar('#');
            if(cs == PECA) putchar('*');
            if(cs == VAZIO) putchar('.');
            /*switch (e->tab[i][j]){
                case POS1:
                    putchar('1');
                    break;
                case POS2:
                    putchar('2');
                    break;
                case RASTRO:
                    putchar('#');
                    break;
                case PECA:
                    putchar('*');
                    break;
                case VAZIO:
                    putchar('.');
                    break;
            }*/
        }
        putchar('\n');
    }
}