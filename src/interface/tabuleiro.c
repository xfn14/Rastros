#include <stdio.h>
#include "tabuleiro.h"

const CASA tabuleiro_inicial[8][8] =
        {
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, BRANCA},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, PECA, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO},
                {PRETA, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO, VAZIO}
        };

void mostrar_tabuleiro(ESTADO *e){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            switch (e->tab[i][j]){
                case PRETA:
                    putchar('1');
                    break;
                case BRANCA:
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
            }
        }
        putchar('\n');
    }
}