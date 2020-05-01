#include "bot.h"
#include "../src/dados/data.h"
#include "../src/dados/estado.h"
#include "../src/interface/file.h"
#include "../src/dados/lista.h"

int main(int nr, char **args){
    ESTADO *estado = inicializar_estado();
    if(nr == 3){
        char *old = args[1];
        char *new = args[2];
        ler(old, estado);
        jog2(estado);
        gr(new, estado);
    }
}