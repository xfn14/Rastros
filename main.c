#include <stdio.h>
#include "tabuleiro.h"
#include "jogada.h"

int main() {

    int jogadac;
    char x;



    tabuleiro();

    printf ("Jogada\n");
    scanf (" %c", &x);
    scanf ("%d", &jogadac);

    jogada (x, jogadac);

    return 0;
}