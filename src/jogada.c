#include <stdio.h>

    int jogada (int x, int y){

    int c, l;
    int jogadac = y;
    char linha = 'A';

    char jogadal[100] = " ABCDEFGH";

    for (l=0; l<8; l++)
    {
        for (c=0; c<8; c++)
        {
            if (linha=='A' && c==7) printf ("2");
            else if (linha=='H' && c==0) printf ("1");
            else if (linha=='D' && c==4) printf ("#");
            else if (linha==jogadal[x] && c==jogadac) printf ("*");
            else printf (".");
        }
        linha += 1;
        printf("\n");
    }

    }