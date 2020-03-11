#include <stdio.h>
#include "tabuleiro.h"
#include "jogada.h"

int main() {

    int jogadac, x;

    tabuleiro();

    printf ("Jogada\n");
    scanf ("%d", &x);
    scanf ("%d", &jogadac);

    jogada (x, jogadac);

    return 0;
}