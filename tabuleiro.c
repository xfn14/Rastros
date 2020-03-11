#include <stdio.h>

int main() {

    int c, l, jogadac;
    char jogadal;
    char linha = 'A';

    printf ("Jogada\n");
    scanf ("%d", &jogadac);
    scanf ("%c", &jogadal);

    for (l=0; l<8; l++)
    {
        for (c=0; c<8; c++)
        {
            if (linha=='A' && c==7) printf ("2");
            else if (linha=='H' && c==0) printf ("1");
            else if (linha=='C' && c==4) printf ("*");
            else if (linha==jogadal && c==jogadac) printf ("*");
            else printf (".");
        }
        linha += 1;
        printf("\n");
    }

    return 0;
}
