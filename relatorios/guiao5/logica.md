# Lógica do programa

Neste módulo trata-se a lógica do jogo em si, implementando-se a função jogar, junto com outras que a suportam.

### Jogar
Esta função recebe o estado atual e a coordenada de input do user através do interpretador.

Antes de poder-mos aplicar a jogada temos de a validar, tal é feito na função ***jogada_valida()***.

Caso a jogada seja válida, então a função muda o tabuleiro presente no estado devidamente, a função adicionar_jogada() é chamada, é eftuada uma troca de jogador, o tabuleiro é mostrado e caso algum jogador tenha gajo com esta jogada, o jogo acabar e aparece uma mensagem de vitória.

### Validar Jogada
Esta função tem como objetivo determinar se uma jogada é valida de acordo com o estado atual do jogo e a coordenada
de input. 

Deste modo, a coordenada tem de estar em volta da *PECA* e a [*CASA*](https://github.com/andreubita/li2-201920/blob/master/relatorios/guiao5/dados.md#casa)[*CASA*](https://github.com/andreubita/li2-201920/blob/master/relatorios/guiao5/dados.md#casa) da coordenada tem de ser *VAZIO*.

Se a jogada for inválida, a função da return de 0.

Se a jogada for válida, a função pode ter 3 return diferentes:
- 1 se a jogada permitir o jogador 1 vencer.
- 2 se a jogada permitir o jogador 2 vencer.
- 3 se for simplesmente uma jogada válida.

### Array de Jogadas
Para além de executar as jogadas e alterar o tabuleiro, as jogadas são armazenadas num array e o número de jogadas incrementado por 1.

Assim temos disponível todas as jogadas numa só array.