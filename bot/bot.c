#include "data.h"
#include "estado.h"
#include "file.c"
#include "lista.h"
#include "jogada.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "data.h"

void jog(ESTADO *estado);
LISTA jogadasProximas(ESTADO *e, LISTA L);
float distancia_eucladiana(COORDENADA coord1, COORDENADA coord2);

int main(int nr, char **args){
    ESTADO *estado = inicializar_estado();
    if(nr == 3){
        char *old = args[1];
        char *new = args[2];
        ler(old, estado);
        jog(estado);
        gr(new, estado);
    }
}

void jog(ESTADO *estado){
    COORDENADA pos1, pos2, *atual, best;
    float bestDist;
    bestDist = 100;
    LISTA lista = criar_lista();

    pos1.coluna = 7;
    pos1.linha = 0;

    pos2.coluna = 0;
    pos2.linha = 7;

    lista = jogadasProximas(estado, lista);

    while(!lista_esta_vazia(lista)){
        atual = (COORDENADA *) devolve_cabeca(lista);
        if(obter_jogador_atual(estado) == 1){
            if(estado->tab[atual->linha][atual->coluna] == POS1){
                best = *atual;
                break;
            }
            if(distancia_eucladiana(*atual,pos1) < bestDist){
                bestDist = distancia_eucladiana(*atual,pos1);
                best = *atual;
            }
        }else{
            if(estado->tab[atual->linha][atual->coluna] == POS2){
                best = *atual;
                break;
            }
            if(distancia_eucladiana(*atual,pos2) < bestDist){
                bestDist = distancia_eucladiana(*atual,pos2);
                best.linha = atual->linha;
                best.coluna = atual->coluna;
            }
        }
        lista = proximo(lista);
    }

    jogar(estado, best);

    free(lista);
}

LISTA jogadasProximas(ESTADO *e, LISTA L){
    COORDENADA peca = obter_coordenada_peca(e->tab);
    COORDENADA coord;
    COORDENADA *atual;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            atual = malloc(sizeof(COORDENADA));
            atual->linha = i;
            atual->coluna = j;

            int valida = jogada_valida(e, *atual);
            if(valida == 1 || valida == 2 || valida == 3){
                if((e->jogador_atual == 1 && e->tab[i][j] == POS1) || (e->jogador_atual == 2 && e->tab[i][j] == POS2)){
                    LISTA t = malloc(sizeof(NODO));
                    t->valor = atual;
                    t->proximo = NULL;
                    return t;
                }

                if (e->tab[i][j] == VAZIO){
                    L = insere_cabeca(L, atual);
                }
            }
        }
    }
    L->proximo = NULL;
    return L;
}

float distancia_eucladiana(COORDENADA coord1, COORDENADA coord2){
    return sqrtf(pow(coord1.linha - coord2.linha, 2) + pow(coord1.coluna - coord2.coluna, 2));
}