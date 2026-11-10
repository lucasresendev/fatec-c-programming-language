<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Tipos Básicos, Entrada/Saída e Tamanho de Memória em C (`primitive_types_and_io.c`)

</div>

> **Origem:** Aula 02 (Declaração de Variáveis, Constantes, Tipos Primitivos e Entrada/Saída)  
> **Tópico:** Tipos de Dados Primitivos, Operador `sizeof` e Formatação de I/O Padrão

---

## 🎯 Enunciado do Problema

Neste exercício, declarei variáveis usando os tipos primitivos da linguagem C (`char`, `int`, `float`, `long`, `double`), consultei o tamanho em bytes de cada uma na memória com o operador `sizeof`, exibi os valores iniciais formatados no terminal e capturei novos valores digitados pelo usuário com `scanf`.

---

## 💻 Código-Fonte

O código completo está em [primitive_types_and_io.c](primitive_types_and_io.c).

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

## 💡 Principais Conceitos Aplicados

- **Os Três Pilares da Programação:** Programar fica mais fácil de entender quando trabalhamos com **variáveis** (armazenar e alterar dados na memória), **estruturas de decisão** (ramificar fluxos) e **estruturas de repetição** (repetir comandos).
- **Regras para Nomes de Variáveis:** Nomes de variáveis em C não podem começar com números, não podem coincidir com palavras reservadas da linguagem (como `int`, `float`, `return`) e aceitam apenas letras, números e sublinhado (`_`).
- **Tipos Primitivos e Espaço em Memória:**
  - `char`: 1 byte (caractere único ou inteiro pequeno).
  - `int`: 4 bytes (número inteiro padrão).
  - `float`: 4 bytes (ponto flutuante de precisão simples).
  - `long`: 4 ou 8 bytes (inteiro estendido, dependendo do sistema operacional e do compilador).
  - `double`: 8 bytes (ponto flutuante de dupla precisão).
- **Consulta de Memória com `sizeof`:** O operador `sizeof` retorna o tamanho em bytes ocupado pelo tipo ou pela variável, exibido com o formato `%zu` (`size_t`).
- **Saída Formatada (`printf`):** Impressão de dados usando formatos (`%c`, `%d`, `%ld`, `%lf`, `%zu`) e controle de casas decimais com `%.2f`.
- **Entrada Formatada (`scanf`):** Leitura de dados pelo teclado passando o endereço da variável com o operador `&`. O espaço no início do formato `" %c"` limpa quebras de linha (`\n`) que sobraram no buffer de entrada.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io

# Ou compilar e executar com Clang (padrão no macOS)
mkdir -p dist && clang -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io
```
