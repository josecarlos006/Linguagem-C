## Sumário <!--Sumário -->

- [Operadores Basicos](#operadores-basicos)
  - [Aritmeticos](#aritmeticos)
  - [Atribuicao](#atribuicao)
  - [Incremento e Decremento](#incremento-e-decremento)
  - [Relacionais](#relacionais)
  - [Logicos](#logicos)
  - [Bitwise](#bitwise)
  - [Ternario](#ternario)
- [Tipos de Dados](#tipos-de-dados)

# Para Que serve <!--Importancia-->

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

### Aritmeticos:

`+` : Adição<br>
`-` : Subtração<br>
`*` : Multiplicação<br>
`/` : Divisão<br>
`%` : Módulo (resto da divisão)

### Atribuicao:

`=` : Atribuição simples<br>
`+=` : Adição e atribuição (por exemplo, x += 5; é equivalente a x = x + 5;)<br>
`-=` : Subtração e atribuição<br>
`*=` : Multiplicação e atribuição<br>
`/=` : Divisão e atribuição<br>
`%=` : Módulo e atribuição

### Incremento e Decremento:

`++` : Incremento de 1 (por exemplo, x++; é equivalente a x = x + 1;)<br>
`--` : Decremento de 1 (por exemplo, y--; é equivalente a y = y - 1;)<br><br>
Pode ser utilizado tanto como operador de prefixo (++x) quanto de sufixo (x++). O comportamento pode ser ligeiramente diferente dependendo de onde é usado.

### Relacionais:

`==` : Igual a<br>
`!=` : Diferente de<br>
`<` : Menor que<br>
`>` : Maior que<br>
`<=` : Menor ou igual a<br>
`>=` : Maior ou igual a

### Logicos:

`&&` : E lógico (AND)<br>
`||` : Ou lógico (OR)<br>
`!` : Negação lógica (NOT)

### Bitwise:

`&` : AND bitwise<br>
`|` : OR bitwise<br>
`^` : XOR bitwise (OU exclusivo)<br>
`~` : NOT bitwise (complemento)<br>
`<<` : Shift left<br>
`>>` : Shift right

### Ternario:

`? e :` : Operador ternário condicional (por exemplo, x = (a > b) ? a : b; atribui a x o valor de a se a for maior que b, caso contrário, atribui o valor de b a x)

# Tipos de Dados

#### `[1°] - int`:
- Representa números inteiros.


```xml
#include <stdio.h>

int main() {
    int numero = 10; // Declaração e inicialização da variável 'numero' com o valor 10
    
    // Exibe o valor da variável 'numero'
    printf("O número é: %d \n", numero);
    
    return 0;
}
```

#### `[2°] - float`:

```
Representa números de ponto flutuante de precisão simples ou os famosos Numeros decimais.
```

#### `[3°] - char`:

```
Representa caracteres individuais.
```

#### `[4°] - double`:

```
Representa números de ponto flutuante de dupla precisão e indicar números maiores, seja na parte inteira, seja na parte decimal.
```

#### `[5°] - void`:

```
Indica a ausência de tipo. É frequentemente usado para indicar que uma função não retorna valor ou para ponteiros genéricos.
```

#### `[6°] - _Bool`:

```
Tipo de dados booleano que pode armazenar apenas os valores "0" (falso) ou "1" (verdadeiro).
```

#### `[7°] - signed`:

```
Modificador que indica que um tipo de dado pode armazenar valores positivos e negativos.
```

#### `[8°] - unsigned`:

```
Modificador que indica que um tipo de dado pode armazenar apenas valores não negativos.
```

#### `[9°] - short`:

```
Modificador que indica que um tipo de dado tem uma faixa menor de valores do que seu equivalente não modificado.
```

#### `[10°] - long`:

```
Modificador que indica que um tipo de dado tem uma faixa maior de valores do que seu equivalente não modificado.
```

#### `[11°] - Enumerations (enum)`:

```
Usado para criar um tipo de dados que consiste em um conjunto de constantes nomeadas. Por exemplo, você pode ter uma enumeração para representar os dias da semana.
```

#### `[12°] - Arrays`:

```
Coleções de elementos do mesmo tipo. Os elementos de um array são acessados por meio de um índice inteiro.
```

#### `[13°] - Structs (Estruturas)`:

```
Tipos de dados definidos pelo usuário que podem conter vários campos de tipos diferentes. Eles permitem agrupar dados relacionados em uma única unidade.
```
