# Estudando Lógica e Pensamento Computacional Ⅰ

- [Aulas](https://github.com/josecarlos006/Linguagens-C/tree/main/Aulas)

### Onde utilizar e executar a linguagem C/C++/C#

- [Dev C++](https://sourceforge.net/projects/orwelldevcpp/files/Portable%20Releases/Dev-Cpp%205.11%20TDM-GCC%20x64%204.9.2%20Portable.7z/download)
- [GDB Online - Compiler C](https://www.onlinegdb.com/online_c_compiler)

## Sumário <!--Sumário -->

- [Historia e Fundamentos](#historia-e-fundamentos)
  - [Origens da Linguagem C](#origens-da-linguagem-c)
  - [Caracteristicas da Linguagem C](#caracteristicas-da-linguagem-c)
  - [Importancia da Linguagem C](#importancia-da-linguagem-c)
- [Estrutura e Sintaxe](#estrutura-e-sintaxe)
  - [Estruturas Basicas](#estruturas-basicas)
  - [Ponteiros e Alocacao de Memoria](#ponteiros-e-alocacao-de-memoria)
  - [Estrutura de Dados e Arquivos](#estrutura-de-dados-e-arquivos)
- [Boas Praticas e Aplicacoes](#boas-praticas-e-aplicacoes)
  - [Boas Praticas de Programacao](#boas-praticas-de-programacao)
  - [Aplicacoaes e Exemplos](#aplicacoaes-e-exemplos)
  - [Futuro da Limguagem C](#futuro-da-limguagem-c)

# Historia e Fundamentos

### Origens da Linguagem C

- Origem e Criação:

  - A linguagem C foi originalmente desenvolvida por Dennis Ritchie na década de 1970 nos Laboratórios Bell, da AT&T (American Telephone and Telegraph Company).
  - Ritchie inicialmente desenvolveu C como uma extensão da linguagem de programação B, que por sua vez era uma adaptação da linguagem BCPL.
  - A criação do C foi fortemente influenciada pelo desejo de construir um sistema operacional portável chamado UNIX.

- Portabilidade:

  - Uma das características distintivas da linguagem C é sua portabilidade.
  - A portabilidade refere-se à capacidade do código escrito em C ser compilado e executado em diferentes plataformas sem a necessidade de alterações significativas.
  - Isso é possível devido à implementação de um compilador C para cada sistema de destino, que traduz o código-fonte em instruções de máquina específicas da arquitetura alvo.

- Eficiência:

  - A linguagem C é conhecida por sua eficiência em termos de consumo de recursos de computação, como memória e tempo de execução.
  - Ela fornece aos programadores acesso direto à memória e recursos do sistema, permitindo um controle preciso sobre o desempenho de seus programas.
  - O código C geralmente é compilado diretamente em instruções de máquina eficientes, proporcionando um desempenho próximo ao máximo possível da máquina.

- Simplicidade Sintática:
  - A sintaxe da linguagem C é relativamente simples e direta, o que a torna fácil de aprender e entender para programadores iniciantes e experientes.
  - A linguagem C possui um conjunto relativamente pequeno de palavras-chave e regras de sintaxe, tornando-a menos verbosa do que algumas linguagens mais recentes.
  - Essa simplicidade sintática contribui para a legibilidade e manutenção do código, permitindo que os programadores se concentrem na lógica e na estrutura de seus programas.

### Caracteristicas da Linguagem C

- Controle de Hardware :
  - A linguagem C oferece aos programadores um alto grau de controle sobre o hardware do computador. Isso permite que eles enviem código que manipule diretamente os registradores de hardware, endereços de memória e outros recursos de baixo nível.

- Eficiência e Desempenho :
  - A linguagem C é conhecida por sua eficiência e desempenho. Ela permite que os programadores escrevam código otimizado que seja executado rapidamente e utilize recursos do sistema de forma eficiente.
  - Essa eficiência torna a linguagem C uma escolha popular para o desenvolvimento de sistemas operacionais, drivers de dispositivos e outros softwares que desativam alto desempenho.

- Manipulação de Bits e Bytes :
  - A linguagem C oferece suporte robusto para manipulação de bits e bytes. Os operadores de bit e as estruturas de dados de baixo nível, como as uniões, permitem que os programadores realizem operações de manipulação de dados em nível de bit, o que é útil em muitas aplicações, como protocolos de comunicação e disponibilização de dados.

- Acesse a Memória :
  - A linguagem C oferece aos programadores acesso direto à memória do computador por meio de ponteiros. Isso permite a implementação eficiente de estruturas de dados complexas e algoritmos de baixo nível.
  - Embora o acesso direto à memória apresente grande flexibilidade, ele também requer cuidado para evitar erros de programação, como vazamentos de memória e falhas de segmentação.

- Flexibilidade Linguística :
  - A linguagem C é uma linguagem de programação de propósito geral, o que significa que ela pode ser usada para uma ampla variedade de aplicativos, desde o desenvolvimento de sistemas até o desenvolvimento de aplicativos de usuário final.
  - Além disso, a sintaxe flexível da linguagem permite que os programadores escolham entre diferentes estilos de organização, tornando-a adaptável a uma variedade de preferências e padrões de ordem.

- Tipagem Estática :
  - Na linguagem C, os tipos de dados das variáveis ​​são determinados no tempo de construção e não podem ser alterados durante a execução do programa. Isso significa que o tipo de cada variável deve ser declarado explicitamente antes de ser utilizado.
  - A tipagem estática permite uma seleção mais rigorosa de erros de tipo durante a compilação, o que pode ajudar a evitar muitos erros comuns durante o desenvolvimento do software.

- Simplicidade :
  - A linguagem C é conhecida por sua sintaxe simples e direta. Ela possui um conjunto limitado de palavras-chave e regras de sintaxe, o que facilita a escrita e a compreensão do código.
  - A simplicidade da linguagem C torna uma escolha popular para desenvolvedores que valorizam a clareza e a legibilidade do código.

- Grande Biblioteca Padrão :
  - A linguagem C possui uma grande biblioteca padrão que fornece funções para realizar uma ampla variedade de tarefas comuns, como entrada/saída de dados, manipulação de strings, alocação de memória, ordenação e busca, entre outras.
  - Essa biblioteca padrão torna mais fácil para os programadores escreverem código eficiente e reutilizável, evitando a necessidade de reinventar a roda para tarefas comuns.

- Alto desempenho :
  - A linguagem C é conhecida por sua alta performance. Ela oferece acesso direto à memória e recursos de baixo nível, permitindo que os programadores escrevam código altamente eficiente e otimizado.
  - Os programas escritos em C podem ser compilados diretamente em instruções de máquina eficientes, o que resulta em tempos de execução rápidos e baixo consumo de recursos do sistema.

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
- [Exemplos de cada um e muito mais...](https://github.com/josecarlos006/Linguagens-C/tree/main/Observações)

- Variáveis e Tipos de Dados:
  - Variáveis ​​Primitivas :
    - Inteiro (``int``): Armazena números inteiros, positivos ou negativos.
    - Ponto Flutuante (``float``): Armazena números de ponto flutuante de precisão simples.
    - Duplo (``double``): Armazena números de ponto flutuante de isolamento duplo.
    - Caractere (``char``): Armazena caracteres individuais.

  - Tipos de dados modificados :
    - Sem Sinal (``unsigned``): Modificador usado com tipos inteiros para representar apenas valores não negativos.
    - Longo (``long``): Modificador usado com tipos inteiros para representar números inteiros mais longos.
    - Curto (``short``): Modificador usado com tipos inteiros para representar números inteiros mais curtos.

  - Tipos de dados compostos :
    - Array (``[]``): Coleção de elementos do mesmo tipo, acessível por um índice.
    - Estrutura (``struct``): Agrupa diferentes tipos de dados em uma única unidade.
    - União (``union``): Semelhante a uma estrutura, mas todos os seus membros unidos ao mesmo espaço de memória.

  - Outros tipos de dados :
    - Ponto Flutuante de Longa Precisão (``long double``): Tipo de ponto flutuante com maior precisão do que floatou double.
    - Void (``void``): Tipo especial que representa a ausência de tipo.

- Estruturas de Controle:

  - Estruturas Condicionais:
    - ``if``: Permite a execução condicional de um bloco de código com base em uma expressão booleana.
    - ``else``: Opcionalmente acompanha um if e executa um bloco de código se a condição do if não for atendida.
    - ``else if``: Utilizado após um if para verificar condições adicionais se a condição do if não for atendida.
    - ``switch``: Permite a seleção de um dos vários blocos de código para execução com base no valor de uma expressão inteira ou caractere.

  - Estruturas de Repetição:
    - ``while``: Executa um bloco de código repetidamente enquanto uma condição especificada for verdadeira.
    - ``do-while``: Executa um bloco de código pelo menos uma vez e, em seguida, repetidamente enquanto uma condição especificada for verdadeira.
    - ``for``: Utilizado para executar um bloco de código um número específico de vezes, geralmente com um contador.

  - Controle de Fluxo:
    - ``break``: Interrompe a execução de um loop for, while ou do-while, ou a execução de um bloco switch.
    - ``continue``: Pula a execução da iteração atual de um loop for, while ou do-while, e continua com a próxima iteração.

  - Outras Estruturas:
    - ``goto``: Permite transferir o controle do programa para um rótulo especificado em outro lugar no código.
    - ``return``: Utilizado para finalizar a execução de uma função e retornar um valor opcional para o chamador.

- ## Funções e Bibliotecas Padrão:

### Ponteiros e Alocacao de Memoria

- Conceito de Ponteiros:

  -

- Alocação Dinâmica de Memória:

  -

- ## Utilização de Ponteiros:

### Estrutura de Dados e Arquivos

- Arrays e Estruturas:

  -

- Manipulação de Arquivos:

  -

- ## Bibliotecas Específicas:

# Boas Praticas e Aplicacoes

### Boas Praticas de Programacao

- Clareza e Legibilidade

  -

- Comentários e Documentação

  -

- ## Padrões de Codificação

### Aplicacoaes e Exemplos

- Sistemas Embarcados

  -

- Desenvolvimento de Sistemas Operacionais

  -

- ## Programação de Dispositivos

### Futuro da Limguagem C

- Relevância Continua

  -

- Adoção em Novos Domínios

  -

- ## Evolução e Atualizações
