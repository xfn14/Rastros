# Camada de interface
Neste módulo tratamos de duas tarefas:

    1. Mostrar o tabuleiro
   
    2. Criar um interpretador de comandos.

Para cada tarefa seguem se as suas descrições.

####Mostrar o tabuleiro
***mostrar_tabuleiro***: Função que recebe um estado e imprime o tabuleiro para esse estado.

####Interpretador de comandos
Para o interpretador eram pedidos os seguintes tópicos:
   
    1.Ler uma linha (usando fgets)
   
    2.Separar a linha por espaços (por exemplo utilizando sscanf ou strtok)
   
    3.Conforme o comando a executar, chamar a função correspondente do interface ou da lógica
    do programa e depois do interface.
    
***Interpretador***: Função que recebe o estado atual e através dos argumentos da função **jogar**, neste caso, 
as coordenadas, aplica a jogada.