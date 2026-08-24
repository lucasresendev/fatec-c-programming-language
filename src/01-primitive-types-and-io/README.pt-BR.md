<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Tipos Básicos, Entrada/Saída e Tamanho de Memória em C (`primitive_types_and_io.c`)

</div>

---

## 🎯 Enunciado

Declarar variáveis utilizando os tipos de dados primitivos padrão da linguagem C (`char`, `int`, `float`, `long`, `double`), consultar o tamanho em bytes alocado em memória através do operador `sizeof`, imprimir os valores iniciais com formatação e capturar entradas interativas do usuário via `scanf`.

---

## 💻 Código Fonte

```c
// Introduction to Basic Types, I/O, and Memory Sizing in C
#include <stdio.h>

int main(void) {
    // 1. Declarations
    char letter;        // 1 byte (character)
    int number;         // 4 bytes (standard integer)
    float real;         // 4 bytes (single-precision floating point)
    long longNumber;    // 4 or 8 bytes depending on OS/architecture
    double doubleReal;  // 8 bytes (double-precision floating point)

    // 2. Initial Assignments
    letter = 'a';
    number = 10;
    real = 0.5010f;
    longNumber = 999999999L;
    doubleReal = -0.912083;

    // 3. Display Initial Values and Type Sizes (%zu for size_t)
    printf("--- Default Values ---\n"
           "The letter is %c, size: %zu byte(s)\n"
           "The integer number is %d, size: %zu byte(s)\n"
           "The real number is %.2f, size: %zu byte(s)\n"
           "The long number is %ld, size: %zu byte(s)\n"
           "The double real number is %lf, size: %zu byte(s)\n\n",
           letter, sizeof(letter), 
           number, sizeof(number), 
           real, sizeof(real), 
           longNumber, sizeof(longNumber), 
           doubleReal, sizeof(doubleReal));

    // 4. User Input (Interactive I/O)
    printf("Enter a letter: ");
    scanf(" %c", &letter); // Leading space consumes any leftover newline/whitespace

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter a float: ");
    scanf("%f", &real);

    printf("Enter a long integer: ");
    scanf("%ld", &longNumber);

    printf("Enter a double: ");
    scanf("%lf", &doubleReal);

    // 5. Display User Input
    printf("\n--- User Input ---\n"
           "The letter is %c, size: %zu byte(s)\n"
           "The integer number is %d, size: %zu byte(s)\n"
           "The real number is %.2f, size: %zu byte(s)\n"
           "The long number is %ld, size: %zu byte(s)\n"
           "The double real number is %lf, size: %zu byte(s)\n",
           letter, sizeof(letter), 
           number, sizeof(number), 
           real, sizeof(real), 
           longNumber, sizeof(longNumber), 
           doubleReal, sizeof(doubleReal));

    return 0;
}
```

---

## 🖥️ Saída no Terminal

```text
--- Default Values ---
The letter is a, size: 1 byte(s)
The integer number is 10, size: 4 byte(s)
The real number is 0.50, size: 4 byte(s)
The long number is 999999999, size: 8 byte(s)
The double real number is -0.912083, size: 8 byte(s)

Enter a letter: z
Enter an integer: 42
Enter a float: 3.1415
Enter a long integer: 1234567890
Enter a double: 2.718281828

--- User Input ---
The letter is z, size: 1 byte(s)
The integer number is 42, size: 4 byte(s)
The real number is 3.14, size: 4 byte(s)
The long number is 1234567890, size: 8 byte(s)
The double real number is 2.718282, size: 8 byte(s)
```

---

## 💡 Conceitos Aplicados

- **Os 3 Pilares da Programação:** Uma linguagem se estabelece como linguagem de programação quando suporta **variáveis** (armazenar e alterar dados na memória), **estruturas de decisão** (ramificar fluxos) e **estruturas de repetição** (iterar processos).
- **Regras de Identificadores em C:** Nomes de variáveis não podem iniciar com dígitos, não podem coincidir com palavras reservadas da linguagem (como `int`, `float`, `return`) e só aceitam letras, dígitos e sublinhado (`_`).
- **Tipos Primitivos e Alocação de Memória:**
  - `char`: 1 byte (caractere único ou inteiro pequeno).
  - `int`: 4 bytes (inteiro com sinal padrão).
  - `float`: 4 bytes (ponto flutuante de precisão simples).
  - `long`: 4 ou 8 bytes (inteiro estendido, variando conforme a arquitetura do sistema operacional).
  - `double`: 8 bytes (ponto flutuante de dupla precisão).
- **Inspeção de Memória (`sizeof`):** O operador `sizeof` retorna o tamanho em bytes ocupado pelo tipo ou variável, impresso via especificador `%zu` (`size_t`).
- **Saída Formatada (`printf`):** Exibição de variáveis com especificadores (`%c`, `%d`, `%ld`, `%lf`, `%zu`) e controle de casas decimais com `%.2f`.
- **Entrada Formatada (`scanf`):** Captura de dados pelo teclado passando o endereço de memória com o operador `&`. O espaço no início do formato `" %c"` ignora caracteres de quebra de linha (`\n`) deixados no buffer de entrada.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io

# Ou compilar e executar com Clang (padrão no macOS)
mkdir -p dist && clang -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io
```
