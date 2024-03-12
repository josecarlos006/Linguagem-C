# Estudando Lógica e Pensamento Computacional Ⅰ

#### Instituição: Escola Técnica Estadual Senador Wilson Campos
#### Módulo Ⅰ - Desenvolvimento de Sistemas

## Sumário  <!--Sumário -->

- [Historia e Fundamentos](#historia-e-fundamentos)
  - [Origens da Linguagem C](#origens-da-linguagem-c)
  - [Caracteristicas da Linguagem C](#caracteristicas-da-linguagem-c)
  - [Importancia da Linguagem C](#importancia-da-linguagem-c)
- [Estrutura e Sintaxe](#estrutura-e-sintaxe)
    - [Estruturas Basicas](#estruturas-basicas)
    - [Ponteiros e Alocacao de Memoria](#ponteiro-e-alocacao-memoria)
    - [Estrutura de Dados e Arquivos](#estrutura-de-dados-e-arquivos)
- [Boas Praticas e Aplicacoes](#boas-praticas-e-aplicacoes)
    - [Boas Praticas de Programacao](#boas-praticas-de-programacao)
    - [Aplicacoaes e Exemplos](#aplicacoes-e-exemplos)
    - [Futuro da Limguagem C](#futuro-da-linguagem-c)

# Para Que serve C/C++/C# <!--Importancia-->

- C:
  - C é uma linguagem de programação de propósito geral amplamente usada, especialmente em sistemas operacionais, como o Linux e o Windows.
  - Também é frequentemente usado em sistemas embarcados e no desenvolvimento de drivers de dispositivos de hardware, devido à sua eficiência e capacidade de acesso de baixo nível ao hardware do sistema.

- C++:

  - C++ é uma extensão de C que adiciona recursos de programação orientada a objetos, como classes e herança.
  - É amplamente utilizado em jogos, aplicativos de desktop, sistemas embarcados, software de sistema, software de servidor e muitas outras áreas de desenvolvimento de software.
  - Sua eficiência e flexibilidade o tornam uma escolha popular para o desenvolvimento de software que exige alto desempenho e controle direto sobre o hardware.

- C# (C Sharp):

  - C# é uma linguagem de programação desenvolvida pela Microsoft e é amplamente utilizada para o desenvolvimento de aplicativos para a plataforma Windows.
  - É especialmente popular para o desenvolvimento de aplicativos de desktop, aplicativos da web (usando o framework .NET), e jogos (com o framework Unity).
  - C# também é comumente usado para desenvolvimento de software empresarial e aplicativos móveis (usando o framework Xamarin).

# Operadores Basicos

- Aritméticos:

``+`` : Adição<br>
``-`` : Subtração<br>
``*`` : Multiplicação<br>
``/`` : Divisão<br>
``%`` : Módulo (resto da divisão)

- Atribuição:

``=`` : Atribuição simples<br>
``+=`` : Adição e atribuição (por exemplo, x += 5; é equivalente a x = x + 5;)<br>
``-=`` : Subtração e atribuição<br>
``*=`` : Multiplicação e atribuição<br>
``/=`` : Divisão e atribuição<br>
``%=`` : Módulo e atribuição

- Incremento e Decremento:

``++`` : Incremento de 1 (por exemplo, x++; é equivalente a x = x + 1;)<br>
``--`` : Decremento de 1 (por exemplo, y--; é equivalente a y = y - 1;)<br><br>
  Pode ser utilizado tanto como operador de prefixo (++x) quanto de sufixo (x++). O comportamento pode ser ligeiramente diferente dependendo de onde é usado.

- Relacionais:

``==`` : Igual a<br>
``!=`` : Diferente de<br>
``<`` : Menor que<br>
``>`` : Maior que<br>
``<=`` : Menor ou igual a<br>
``>=`` : Maior ou igual a

- Lógicos:

``&&`` : E lógico (AND)<br>
``||`` : Ou lógico (OR)<br>
``!`` : Negação lógica (NOT)

- Bitwise:

``&`` : AND bitwise<br>
``|`` : OR bitwise<br>
``^`` : XOR bitwise (OU exclusivo)<br>
``~`` : NOT bitwise (complemento)<br>
``<<`` : Shift left<br>
``>>`` : Shift right

- Ternário:

``? e :`` : Operador ternário condicional (por exemplo, x = (a > b) ? a : b; atribui a x o valor de a se a for maior que b, caso contrário, atribui o valor de b a x)


# Historia e Fundamentos

### Origens da Linguagem C

- Criação de Dennis Ritchie:
  - Desenvolvida por Dennis Ritchie em 1972 para reescrever o sistema operacional UNIX.

- Portabilidade e Eficiência:
  - Reconhecida pela sintaxe simples e elegante, facilitando o entendimento para programadores iniciantes.


- Simplicidade Sintática:
  - Destacou-se pela portabilidade e eficiência com linguagens anteriores.

### Caracteristicas da Linguagem C

- Portabilidade e Modularidade:
  - Pertence a uma família de linguagens com ênfase em portabilidade e modularidade.


- Complicação Separada:
  - Suporta complicação separada, facilitando o desenvolvimento de grandes projetos.

- Recursos de Baixo Nível:
  - Oferece recursos de baixo nível, permitindo um controle preciso do hardware.


### Importancia da Linguagem C

- Ampla Ultilização:

Amplamente conhecida e ultilizando como linguagem de referência.


- Base para Outras Linguagens:
  - Serviu de base para o desenvolvimento de outras linguagens de programação como:

    - C++: 
        - Desenvolvida como uma extensão da linguagem C, o C++ adiciona recursos de programação orientada a objetos, como classes e herança, além de outras características, como templates e manipulação de exceções.

    - Objective-C: 
        - Utilizado principalmente no desenvolvimento de aplicativos para dispositivos Apple, o Objective-C é uma extensão da linguagem C que adiciona recursos de orientação a objetos baseados no paradigma Smalltalk.

    - C# (C Sharp): 
        - Desenvolvida pela Microsoft, C# foi fortemente influenciada pela sintaxe e pela estrutura da linguagem C, mas introduziu recursos como gerenciamento automático de memória e suporte completo a orientação a objetos.

    - Java: 
        - Embora não seja diretamente derivada de C, a sintaxe e a estrutura de Java são fortemente influenciadas pela linguagem C, tornando-a mais acessível para programadores familiarizados com C e C++.

    - Objective-C++: 
        - Uma mistura de Objective-C e C++, esta linguagem permite que os desenvolvedores utilizem características de ambas as linguagens em um único projeto.


- Versatilidade:
  - Aplicável em uma variedade de domínios, desde sistemas operacionais até aplicativos de usuários final.


# Estrutura e Sintaxe

### Estruturas Basicas

