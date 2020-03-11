#include <stdio.h>

int main() {

    int l,c, jogadal, jogadac, coluna=0;
    char linha = 'A';

    printf ("jogada");
    scanf ("%d", &jogadac);
    printf ("jogada");
    scanf ("%d", &jogadal);

    for (l=0; l<8; l++)
    {
        for (c=0; c<8; c++)
        {
            if (l==0 && c==7) printf ("2");
            else if (l==7 && c==0) printf ("1");
            else if (l==3 && c==4) printf ("*");
            else if (c==jogadac && l==jogadal) printf ("*");
            else printf (".");
            coluna += c;
        }
        linha += l;
        printf("\n");
    }

    return 0;
}