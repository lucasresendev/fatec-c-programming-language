<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Introdução à Linguagem de Programação C | Fatec & ARInter

  ### **Práticas, Programação de Sistemas e Gerenciamento de Memória em C Padrão**

  [![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](https://en.cppreference.com/w/c)
  [![GCC](https://img.shields.io/badge/GCC-00599C?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
  [![Clang](https://img.shields.io/badge/Clang-000000?style=for-the-badge&logo=llvm&logoColor=white)](https://clang.llvm.org/)
  [![ARInter - CPS](https://img.shields.io/badge/ARInter-CPS-003366?style=for-the-badge)](https://arinter.cps.sp.gov.br/)
  [![Fatec Taubaté](https://img.shields.io/badge/Fatec-Taubaté-B22222?style=for-the-badge)](https://fatectaubate.edu.br/)

</div>

---

## 🎯 Sobre o Curso

Repositório dedicado ao registro de práticas laboratoriais e exercícios do curso **Introduction to the C Programming Language**, iniciativa de internacionalização promovida pela **Assessoria de Relações Internacionais (ARInter - CEETEPS)** em parceria com a **Fatec Taubaté**.

- **Idioma de Ensino:** 100% em Língua Inglesa (aulas síncronas e colaboração com estudantes internacionais).
- **Carga Horária:** 40 horas no total (20 encontros síncronos semanais).
- **Objetivo:** Solucionar problemas computacionais por meio da lógica de programação e do desenvolvimento de software em C de alto desempenho.

### Frentes de Estudo
- **Fundamentos de Memória e Hardware:** Representação de dados, tamanho em bytes (`sizeof`), endereçamento de memória e aritmética de ponteiros.
- **Lógica Estruturada:** Modularização de código utilizando a biblioteca padrão (`stdio.h`, `stdlib.h`, `string.h`), estruturas de controle e funções.
- **Modelagem de Dados e Persistência:** Tipos definidos pelo usuário (`struct`, `typedef`) e manipulação de arquivos em disco.

---

## 🗺️ Cronograma e Ementa do Curso

| Aula | Conteúdo Programático | Status |
| :---: | :--- | :---: |
| 01 | Introdução à Programação em C e Pipeline de Compilação | ✅ Concluído |
| 02 | Declaração de Variáveis e Constantes, Tipos Primitivos e Entrada/Saída | ✅ Concluído |
| 03 | Estruturas de Decisão: Parte 1 (`if`, `else`, verdade numérica, operadores) | ✅ Concluído |
| 04 | Estruturas de Decisão: Parte 2 (`else if`, condicionais aninhadas, menu) | ✅ Concluído |
| 05 | Estruturas de Decisão: Parte 3 (`switch`, fallthrough, menu consolidado) | ✅ Concluído |
| 06 | Estruturas de Repetição: Parte 1 (`do-while`, `while`, exercícios de repetição) | ✅ Concluído |
| 07 | Estruturas de Repetição: Parte 2 (loop `for`, arrays, bubble sort) | ✅ Concluído |
| 08 | Trabalho Prático 1 | ⏳ Em breve |
| 09 | Vetores (Arrays Unidimensionais) | ⏳ Em breve |
| 10 | Manipulação de Strings | ⏳ Em breve |
| 11 | Matrizes (Arrays Multidimensionais) | ⏳ Em breve |
| 12 | Ponteiros: Parte 1 (Endereçamento e Desreferenciação) | ⏳ Em breve |
| 13 | Ponteiros: Parte 2 (Ponteiros com Vetores e Funções) | ⏳ Em breve |
| 14 | Funções e Modularização | ⏳ Em breve |
| 15 | Recursividade | ⏳ Em breve |
| 16 | Tipos Definidos pelo Usuário (`struct`, `typedef`) | ⏳ Em breve |
| 17 | Manipulação de Arquivos e Streams | ⏳ Em breve |
| 18 | Trabalho Prático 2 | ⏳ Em breve |
| 19 | Revisão e Avaliação do Curso | ⏳ Em breve |
| 20 | Vista de Provas e Feedback Final | ⏳ Em breve |

---

## 📝 Índice de Exercícios

| # | Exercício | Código & Documentação | Conceitos Principais |
| :-: | :--- | :--- | :--- |
| 00 | **Menu Consolidado - Exercícios do Curso** | [`src/00-consolidated-menu/`](src/00-consolidated-menu/) | Menu interativo unificando os exercícios práticos do semestre em um único programa executável com repetição contínua em `do...while`. |
| 01 | **Tipos Básicos, E/S e Tamanho de Memória** | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) | Tipos primitivos (`char`, `int`, `float`, `long`, `double`), operador `sizeof()`, `%zu`, `printf()` e `scanf()` formatados. |
| 02 | **Verificador de Par ou Ímpar** | [`src/02-even-or-odd/`](src/02-even-or-odd/) | Operador módulo (`%`), exclusividade mútua (`if/else`), limpeza do buffer de entrada (`scanf(" %c")`), repetição com `do...while`. |
| 03 | **Avaliador de Notas Acadêmicas** | [`src/03-grade-evaluator/`](src/03-grade-evaluator/) | Cálculo de média aritmética, reaproveitamento de variáveis, condicionais aninhadas (`if` dentro de `else`), recuperação (`retakeExam`). |
| 04 | **One Item Shop - Seletor de Descontos** | [`src/04-one-item-shop/`](src/04-one-item-shop/) | Cadeia `else if`, comparação de caracteres (`'a' \|\| 'A'`), escape de porcentagem literal (`%%`), fluxo estruturado sem `return` prematuro. |
| 05 | **Loja de Sobremesas - Switch & Fallthrough** | [`src/05-dessert-shop/`](src/05-dessert-shop/) | Ramificação com `switch/case`, controle com `break`, *fallthrough* intencional para preços acumulados, tratamento com `default`. |
| 06 | **Calculador de Fatorial** | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) | Acumulador de produto fatorial ($n!$), formatação do desenvolvimento multiplicativo (`5 x 4 x 3 x 2 x 1 = 120`), submenu comparativo com `while`, `do...while` e `for`. |
| 07 | **Sequência de Fibonacci** | [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) | Recorrência com janela deslizante ($F_n = F_{n-1} + F_{n-2}$), decomposição de somas, limite por valor vs. quantidade de termos, repetição de validação defensiva de entrada (`limit > 0`), versões com `do...while`, `while` e `for`. |
| 08 | **Caracteres em Ordem Reversa** | [`src/08-reverse-characters/`](src/08-reverse-characters/) | Arrays com tamanho em tempo de execução (VLA), índice começando em zero, `for` nos dois sentidos, limpeza do buffer com `scanf(" %c")`. |
| 09 | **Maior e Menor Número** | [`src/09-lowest-highest-numbers/`](src/09-lowest-highest-numbers/) | Array de inteiros com entrada limitada (até 30), bubble sort em uma cópia do array, busca do menor e do maior valor, `for` aninhados. |

---

## 📂 Estrutura do Projeto

```text
.
├── src/
│   ├── 00-consolidated-menu/
│   │   ├── consolidated_menu.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 01-primitive-types-and-io/
│   │   ├── primitive_types_and_io.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 02-even-or-odd/
│   │   ├── even_or_odd.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 03-grade-evaluator/
│   │   ├── grade_evaluator.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 04-one-item-shop/
│   │   ├── one_item_shop.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 05-dessert-shop/
│   │   ├── dessert_shop.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 06-factorial-calculator/
│   │   ├── factorial_calculator.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 07-fibonacci-sequence/
│   │   ├── fibonacci_sequence.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 08-reverse-characters/
│   │   ├── reverse_characters.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   └── 09-lowest-highest-numbers/
│       ├── lowest_highest_numbers.c
│       ├── README.md
│       └── README.pt-BR.md
│
├── .gitignore
├── README.md           # Documentação em Inglês
└── README.pt-BR.md     # Documentação em Português
```

---

## 🚀 Como Executar

### Pré-requisitos
- Compilador C instalado: [GCC](https://gcc.gnu.org/) ou [Clang](https://clang.llvm.org/) (padrão no macOS).

### Compilação e Execução de Exercícios
Compile e execute diretamente a partir da raiz do repositório:

```bash
# Menu Consolidado de Exercícios
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu

# Exercício 1: Tipos Básicos, E/S e Tamanho de Memória
mkdir -p dist && clang -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io

# Exercício 2: Verificador de Par ou Ímpar
mkdir -p dist && clang -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd

# Exercício 3: Avaliador de Notas Acadêmicas
mkdir -p dist && clang -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator

# Exercício 4: One Item Shop - Seletor de Descontos
mkdir -p dist && clang -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop

# Exercício 5: Loja de Sobremesas - Switch & Fallthrough
mkdir -p dist && clang -Wall -O2 src/05-dessert-shop/dessert_shop.c -o dist/dessert_shop && ./dist/dessert_shop

# Exercício 6: Calculador de Fatorial
mkdir -p dist && clang -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator

# Exercício 7: Sequência de Fibonacci
mkdir -p dist && clang -Wall -O2 src/07-fibonacci-sequence/fibonacci_sequence.c -o dist/fibonacci_sequence && ./dist/fibonacci_sequence

# Exercício 8: Caracteres em Ordem Reversa
mkdir -p dist && clang -Wall -O2 src/08-reverse-characters/reverse_characters.c -o dist/reverse_characters && ./dist/reverse_characters

# Exercício 9: Maior e Menor Número
mkdir -p dist && clang -Wall -O2 src/09-lowest-highest-numbers/lowest_highest_numbers.c -o dist/lowest_highest_numbers && ./dist/lowest_highest_numbers
```

---

## 📚 Bibliografia

- **KERNIGHAN, Brian W.; RITCHIE, Dennis M.** *C Programming Language: ANSI C Version*. 2. ed. Prentice Hall, 1988.
- **GRAHAN, Darrel L.** *C Programming Language: A Step by Step Beginner's Guide to Learn C Programming in 7 Days*. Createspace, 2016.

---

<div align="center">
  Desenvolvido por <b><a href="https://github.com/lucasresendev">Lucas Resende</a></b> 🚀
</div>
