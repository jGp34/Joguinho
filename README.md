# Sobre o jogo:

Esse é a Aplicação Gráfica para o trabalho final de Fundamentos de Computação Gráfica realizado pela dupla João Gabriel Eberhardt Pereira e Rodrigo Brock.

Escolhemos desenvolver um jogo em que o jogador controla um dragão que deve atirar bolas de fogo em inimigos para destrui-los e adquirir pontos, ao mesmo tempo que evita ser atingido por esses inimigos para não perder vida do dragão e seus pontos.  

Conforme a pontuação do jogador aumenta, inimigos aparecem de forma mais rápida, fazendo com que o jogador se concentre mais para evitar ser atingido pelos inimigos multiplas vezes. Caso a vida do dragão atinja zero, a pontuação atual do jogador é zerada. Entretanto, a pontuação mais alta adquirida pelo jogador é guardada para servir como uma espécie de placar. 

## Contribuições:
João Gabriel E. Pereira realizou as seguintes tarefas do jogo:
- A criação do espaço em que ocorre o jogo (definiu onde ficaria o chão, o modelo do dragão, os inimgios).
- A movimentação do dragão que é controlado pelo jogador.
- O disparo de projéteis (bolas de fogo) pelo dragão.
- A movimentação dos inimigos junto à lógica de spawn deles.
- A colisão entre inimigos x dragão, inimigo x projétil, projétil x plano (as bolas de fogo colidem contra uma parede invisível que impede elas de se moverem eternamente na cena virtual), inimigos x plano (mesmo motivo dos projéteis).
- Câmeras virtuais look-at e câmera livre.
- Modelo de iluminação de Lambert e Blinn-Phong.
- Interpolação de Phong para iluminação.
- Escolha de texturas para o jogo.

Rodrigo Brock realizou as seguintes tarefasd do jogo:
- Implementação das curvas de Bezzier
- Inimigos especiais, os quais possuem um tipo de movimentação diferente dos demais.
- Interpolação de Gouraud para iluminação.

## Uso do Copilot:
- Foi utilizado para corrigir erros sintáticos nos arquivos de vertex shader e fragment shader, os quais o VScode não contava com um corretor sintático build-in, como é o caso para arquivos C++ e C. 
- Foi utilizado também esclarecer dúvidas de funções como glm::mix utilizadas no código e não entendidas muito bem pelo grupo utilizando apenas a documentação na internet.

##Conceitos de Computação Gráfica:
Transformações geométricas foram utilizadas para controlar o movimento do dragão, bem como o movimento dos inimigos e dos projéteis do drãgão.

Instâncias de objetos do tipo esfera foram utilizadas abrangentemente no trabalho, já que os inimigos compartilham a mesma instânci, da mesma forma que as bolas de fogo também. Além disso, o piso do jogo foi feito utilizando várias instâncias do objeto "plano".

As animações de todos os inimigos, projéteis e dragão foram implementadas baseadas em tempo.

Câmera livre foi utilizada para possibilitar ao jogador mudar a posição com que ele deseje jogar o jogo. Dessa maneira, se o jogador quiser sair da posição padrão onde a câmera está posicionada, ele tem essa liberdade. 

Câmera look-at foi utilizada para a visualização da cena virtual, de forma que o dragão seja o objeto para o qual a câmera está voltada, justamente para facilitar que ele seja controlado pelo jogador. 

Testes de intersecção foram usados para detectar quando o dragão é atingido pelos inimigos, para saber quando é necessário diminuir sua vida. Além disso, eles foram utilizados para saber quando os inimigos se colidem contra as bolas de fogo do dragão, de forma a destruí-los. Mais do que isso, os testes estão presentes também para detectar quando os projéteis (bolas de fogo) e os inimigos se colidem contra os limites da cena virtual (paredes invisíveis), para assim saber quando destruí-los. 

Modelos de iluminação de Lambert foi utilizado para todos os objetos da cena a não ser o dragão. Para o dragão foi utilizado o modelo Blinn-Phong. O modelo de interpolação de Phong foi utilizado para todos os objetos com excessão das bolas de fogo, em que o modelo de Gouraud foi utilizado. 

Mapeamento de texturas estão disponíveis para todos os objetos da cena, que foram feitos através de imagens. 

Curvas de Bezzier foram aplicadas para a movimentação do inimigo especial, que se move em um padrão de movimento diferente.


## Manual de utilização da aplicação:
Tecla ESC: Fecha o jogo.
Tecla W: Desloca o dragão para o centro.
Tecla S: Desloca o dragão para o centro também.
Tecla A: Desloca o dragão para a esquerda.
Tecla D: Desloca o dragão para a direita.
Tecla E: Atira bolas de fogo.
Botão esquerdo do mouse: segurar e mover o mouse para mexer a câmera do jogo.
Scroll do mouse: diminui ou aumenta o zoom.


## Como executar:
O trabalho foi desenvolvido no VScode, então a maneira mais simples de rodá-lo é a partir dele. Ao baixar os arquivos do trabalho, basta abrir no VScode a pasta do jogo, selecionar a versão do GCC, montar o projeto (o VScode vai sugerir montá-lo com CMake caso a extensão do CMake esteja baixada) e executar o jogo no ícone "Lauch the selected target in the terminal window".

