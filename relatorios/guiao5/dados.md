# Camada de Dados

Este módulo apresente a estrutura de dados do programa e as únicas funções capazes de alterar o Estado definido nesta estrutura.

### Data.h

Para isto, em primeiro lugar, criamos um ficheiro que definiu os vários tipos necessários para criar as funções necessárias para a realização do jogo.

Definimos os tipos:

- Casa

- Coordenada

- Jogada

- Estado, em que:

> tab - armazena informação sobre o tabuleiro
>
> ultima_jogada - a coordenada da última jogada
>
> jogadas - armazena informação sobre as jogadas
>
> num_jogadas - indica quantas jogadas foram efetuadas 
>
> jogador_atual - indica qual é o jogador a jogar


### Funções que alteram o Estado

Com os vários tipos de tipos da estrutura de dados agora definidos tinhamos como objetivos criar agora funções que conseguissem alterar o Estado.

Todas estas funções recebem um apontador para ESTADO e modificam-o. 

Estas são as únicas funções que alteram o estado! Todo o resto do programa apenas modifica o estado através destas funções.

***inicializar_estado***:
Esta função cria um estado vazio (com o tabuleiro inicializado)


***obter_jogador_atual***:
Esta função permite obter o número do jogador que tem que executar a jogada.


***obter_numero_de_jogadas***:
Esta função permite obter quantas jogadas foram efetuadas (cada jogada tem o movimento de dois jogadores)


**obter_estado_casa**
Esta função permite obter a *CASA* em determinada coordenada do tabuleiro.

