#include "lista.h"

// Cria uma lista vazia
LISTA criar_lista(){
    LISTA lista1 = malloc(sizeof(NODO));
    lista1->valor = NULL;
    return lista1;
}

// Insere um valor na cabeça da lista
LISTA insere_cabeca(LISTA L, void *valor){
    if (L->valor == NULL) {
        L->valor = valor;
        return L;
    } else {
        LISTA t = malloc(sizeof(NODO));
        t->valor = valor;
        t->proximo = L;
        return t;
    }
}

// Devolve a cabeça da lista
void *devolve_cabeca(LISTA L){
    return L->valor;
}

// Devolve a cauda da lista
LISTA proximo(LISTA L){
    return L->proximo;
}

// Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda
LISTA remove_cabeca(LISTA L){
    LISTA tail = proximo(L);
    free(L);
    return tail;
}

// Devolve verdareiro se a lista é vazia
int lista_esta_vazia(LISTA L){
    return L == NULL || (L->valor == NULL && L->proximo == NULL);
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
    printf("%d\n", best.coluna);
    printf("%d", best.linha);

    jogar(estado, best);

    free(lista);
}

void jog2(ESTADO *estado){
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
    printf("%d\n", best.coluna);
    printf("%d", best.linha);

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
            if((e->jogador_atual == 1 && e->tab[i][j] == POS1) || (e->jogador_atual == 2 && e->tab[i][j] == POS2)){
                int valida = jogada_valida(e, *atual);
                if(valida == 1 || valida == 2 || valida == 3){
                    LISTA t = malloc(sizeof(NODO));
                    t->valor = atual;
                    t->proximo = NULL;
                    return t;
                }
            }

            if (e->tab[i][j] == VAZIO){
                int valida = jogada_valida(e, *atual);
                if(valida == 1 || valida == 2 || valida == 3){
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