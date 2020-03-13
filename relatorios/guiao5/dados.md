# Camada de Dados

Esta módulo tinha como objetivo ter a estrutura de dados do programa.

Para isto criamos um ficheiro que definiu os vários tipos necessários para criar as funções necessárias para a realização do jogo.

Pretendia-se também que fossem criadas funções que alterassem a estrutura de dados. 
Todas estas funções recebem um apontador para ESTADO e modificam-o. 
Estas são as únicas funções que alteram o estado! Todo o resto do programa apenas modifica o estado através destas funções.

### Data

Definimos os tipos:
-Casa
-Coordenada
-Jogada
-Estado, em que:
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

> inicializar_estado - Esta função cria um estado vazio (com o tabuleiro inicializado)
>
> obter_jogador_atual - Esta função permite obter o número do jogador atual
>
> obter_estado_casa - Esta função permite obter o estado atual da casa
>
> obter_numero_de_jogadas -Esta função permite obter quantas jogadas foram efetuadas (cada jogada tem o movimento de dois jogadores)
