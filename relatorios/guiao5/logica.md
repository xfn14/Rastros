# Lógica do programa
<<<<<<< HEAD
Neste módulo trata-se a lógica do jogo em si, implementando-se a função jogar, junto com outras que a suportam.
=======
##### Neste módulo trata-se a lógica do jogo em si, implementando-se a função jogar.
***jogar*** : Esta função deverá receber o estado atual e uma coordenada e modificar o estado ao jogar 
na casa correta se a jogada for válida. No fim da jogada, a função mostra o tabuleiro através da função
**mostrar_tabuleiro** explicada no módulo da camada de interface.
>>>>>>> e3fab1c799d36f31ec9f761bc3a886eb6aa9d94f

### Jogar
Esta função recebe o estado atual e a coordenada de input do user através do interpretador.

Antes de poder-mos aplicar a jogada temos de a validar, tal é feito na função ***jogada_valida()***.

Caso a jogada seja válida, então a função muda o tabuleiro presente no estado devidamente, a função adicionar_jogada() é chamada, é eftuada uma troca de jogador, o tabuleiro é mostrado e caso algum jogador tenha gajo com esta jogada, o jogo acabar e aparece uma mensagem de vitória.

### Validar Jogada
Esta função tem como objetivo determinar se uma jogada é valida de acordo com o estado atual do jogo e a coordenada
de input. 

Deste modo, a coordenada tem de estar em volta da *PECA* e a *CASA* da coordenada tem de ser *VAZIO*.

Se a jogada for inválida, a função da return de 0.

Se a jogada for válida, a função pode ter 3 return diferentes:
- 1 se a jogada permitir o jogador 1 vencer.
- 2 se a jogada permitir o jogador 2 vencer.
- 3 se for simplesmente uma jogada válida.

### Array de Jogadas
Para além de executar as jogadas e alterar o tabuleiro, as jogadas são armazenadas num array e o número de jogadas incrementado por 1.

Assim temos disponível tod