#include <stdio.h>
#include "../dados/data.h"
#include "../dados/estado.h"

int jogar(ESTADO *estado, COORDENADA c){
    COORDENADA peca = obter_coordenada_peca(estado);
}

    int jogada (char x, int y){

    int lala;

    if (x=='a') lala = 1;
    if (x=='b') lala = 2;
    if (x=='c') lala = 3;
    if (x=='d') lala = 4;
    if (x=='e') lala = 5;
    if (x=='f') lala = 6;
    if (x=='g') lala = 7;
    if (x=='h') lala = 8;


    int col, l;


    int jogadac = y;
    char linha = 'A';

    char jogadal[100] = " ABCDEFGH";

    for (l=0; l<8; l++)
    {
        for (col=0; col<8; col++)
        {
            if (linha=='A' && col==7) printf ("2");
            else if (linha=='H' && col==0) printf ("1");
            else if (linha=='D' && col==4) printf ("#");
            else if (linha==jogadal[lala] && col==jogadac) printf ("*");
            else printf (".");
        }
        linha += 1;
        printf("\n");
    }

    }