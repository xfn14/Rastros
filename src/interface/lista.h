#ifndef SRC_LISTA_H
#define SRC_LISTA_H

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "../dados/data.h"
#include "interpretador.h"
/**
\brief Tipo de dados para os nodos
*/
typedef struct nodo {
    void *valor;
    struct nodo *proximo;
} NODO, *LISTA;

/**
\brief Cria uma lista vazia
@returns lista vazia
*/
LISTA criar_lista();
/**
\brief Insere um valor à cabeça da lista
@param L lista
@param valor valor pretendido
@returns L retorna a lista apenas com o valor, t insere o valor à cabeça de uma lista
*/
LISTA insere_cabeca(LISTA L, void *valor);
/**
\brief Devolve a cabeça de uma lista
@param L Lista
*/
void *devolve_cabeca(LISTA L);
/**
\brief Devolve a cauda de uma lista
@param L Lista
@returns Retorna a cauda da lista
*/
LISTA proximo(LISTA L);
/**
\brief Remove a cabeça de uma lista, libertando o espaço ocupado
@param L Lista
@returns Retorna a cauda da lista
*/
LISTA remove_cabeca(LISTA L);
/**
\brief Verifica se uma lista está vazia
@param L Lista
@returns Retorna verdadeiro se a lista estiver vazia
*/
int lista_esta_vazia(LISTA L);
/**
\brief Funçao que efetua uma jogada para o jogador atual
@param estado estado atual
*/
void jog(ESTADO *estado);
/**
\brief Funçao que verifica quais sao as jogadas proximas da coordenada atual
@param e estado atual
@param L Lista
@returns Retorna uma lista com as jogadas proximas
*/
LISTA jogadasProximas(ESTADO *e, LISTA L);
/**
\brief Funçao que calcula a distancia para um dos jogadores ganhar
*/
float distancia_eucladiana(COORDENADA coord1, COORDENADA coord2);

#endif //SRC_LISTA_H
