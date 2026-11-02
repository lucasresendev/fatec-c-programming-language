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

- **Idioma de Ensino:** 100% em Língua Inglesa (EMI - English as a Medium of Instruction), em sessões síncronas conjuntas com estudantes de intercâmbio internacional.
- **Instituição e Edital:** ARInter - CEETEPS / Fatec Taubaté via **EDITAL ARI nº 027/2026**.
- **Docente:** Luciano Gonçalves de Carvalho (`luciano.carvalho@cps.sp.gov.br`).
- **Carga Horária:** 40 horas no total (15 sessões síncronas semanais de 2 h/a = 30h ao vivo às terças-feiras, 17h00 - 18h40 via MS Teams + 10h de atividades e práticas assíncronas).
- **Documentos Oficiais de Referência:** Course Schedule oficial (`IntroductionC.pdf` - calendário executivo de 15 sessões síncronas) complementando o EDITAL ARI nº 027/2026 (desenho pedagógico preliminar).
- **Critérios de Aprovação:** Frequência mínima de 70% e Média Final $\ge$ 6,0.

### Frentes de Estudo
- **Fundamentos de Memória e Hardware:** Representação de dados, tamanho em bytes (`sizeof`), endereçamento de memória e aritmética de ponteiros.
- **Lógica Estruturada:** Modularização de código utilizando a biblioteca padrão (`stdio.h`, `stdlib.h`, `string.h`), estruturas de controle e funções.
- **Modelagem de Dados e Persistência:** Tipos definidos pelo usuário (`struct`, `typedef`) e manipulação de arquivos em disco.

---

## 🗺️ Ementa e Trilha de Práticas do Curso

| Aula | Título / Tema da Aula | Status | Módulos Práticos & Código-Fonte |
| :---: | :--- | :---: | :--- |
| 01 | Introdução à Programação em C e Pipeline de Compilação | ✅ Concluído | Pipeline de compilação GCC (`-Wall -O2`), configuração do ambiente |
| 02 | Declaração de Variáveis e Constantes, Tipos Primitivos e Entrada/Saída | ✅ Concluído | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) |
| 03 | Estruturas de Decisão: Parte 1 (`if`, `else`, verdade numérica, operadores) | ✅ Concluído | [`src/02-even-or-odd/`](src/02-even-or-odd/), [`src/03-grade-evaluator/`](src/03-grade-evaluator/) (inicial) |
| 04 | Estruturas de Decisão: Parte 2 (`else if`, condicionais aninhadas, menu) | ✅ Concluído | [`src/03-grade-evaluator/`](src/03-grade-evaluator/) (recuperação), [`src/04-one-item-shop/`](src/04-one-item-shop/) |
| 05 | Estruturas de Decisão: Parte 3 (`switch`, fallthrough, menu consolidado) | ✅ Concluído | [`src/05-dessert-shop/`](src/05-dessert-shop/), [`src/00-consolidated-menu/`](src/00-consolidated-menu/) (concepção) |
| 06 | Estruturas de Repetição: Parte 1 (`do-while`, `while`, exercícios) | ✅ Concluído | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (`do-while`/`while`), [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) (`do-while`/`while`), [`src/00-consolidated-menu/`](src/00-consolidated-menu/) (loop de eventos) |
| 07 | Estruturas de Repetição: Parte 2 (loop `for`, vetores, ordenação) | ✅ Concluído | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (`for`), [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) (`for`), [`src/08-reverse-characters/`](src/08-reverse-characters/), [`src/09-lowest-highest-numbers/`](src/09-lowest-highest-numbers/) |
| 08 | Strings, Biblioteca string.h e Matrizes (Arrays 2D) | ✅ Concluído | [`src/10-string-manipulation/`](src/10-string-manipulation/), [`src/11-matrix-addition/`](src/11-matrix-addition/) |
| 09 | Funções, Modularização e Biblioteca `<math.h>` | ✅ Concluído | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (modular), [`src/12-square-root-calculator/`](src/12-square-root-calculator/) |
| 10 | Recursividade e Pilha de Execução | ✅ Concluído | [`src/13-recursive-factorial/`](src/13-recursive-factorial/), [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/) |
| 11 | Tipos Definidos pelo Usuário (`struct`, `typedef`) | ✅ Concluído | [`src/15-academic-management-system/`](src/15-academic-management-system/) |
| 12 | Ponteiros: Parte 1 (Conceitos, Endereçamento e Operadores `&` e `*`) | ⏳ Em breve | Endereçamento de memória e desreferenciação |
| 13 | Ponteiros: Parte 2 (Aritmética de Ponteiros, Vetores e Strings) | ⏳ Em breve | Varredura de ponteiros e equivalência com vetores |
| 14 | Alocação Dinâmica de Memória (`malloc`, `free`) e Manipulação de Arquivos | ⏳ Em breve | Gerenciamento de heap e streams de arquivos |
| 15 | Avaliação Prática Final e Encerramento | ⏳ Em breve | Revisão geral e consolidação do curso |

---

## 🔄 Trilha Evolutiva dos Algoritmos

Ao longo do semestre, problemas computacionais fundamentais foram revisitados e aprimorados em diferentes aulas à medida que novos conceitos da linguagem C eram introduzidos:

### 1. Progressão do Fatorial ($n!$)
- **Aula 06 (Estruturas de Repetição):** Implementado inicialmente de forma iterativa com acumuladores em `do...while` (pós-teste) e `while` (pré-teste), exibindo a cadeia de multiplicações em [`src/06-factorial-calculator/`](src/06-factorial-calculator/).
- **Aula 07 (Loop Contado):** Refatorado com o comando `for`, reunindo inicialização, condição de parada e decremento no cabeçalho.
- **Aula 09 (Decomposição Modular):** Encapsulado em função procedural dedicada (`calculate_factorial_modular`) recebendo `selected_number` por valor.
- **Aula 10 (Salto para o Paradigma Recursivo):** Reconstruído com chamadas auto-referenciais, guarda de caso base ($N < 1$) e passagem de acumulador na pilha de execução em [`src/13-recursive-factorial/`](src/13-recursive-factorial/). Na exploração preliminar (preservada em notas), experimentei também alocação dinâmica com `malloc`/`free` e ponteiros inspirados no CS50x antes de fechar a solução canônica.

### 2. Progressão da Sequência de Fibonacci
- **Aula 06 (Limites Numéricos e Contagem de Termos):** Desenvolvido com `do...while` e `while` em dois modos: interrupção por teto de valor e contagem exata de termos com decomposição passo a passo das somas ($1+1=2, 1+2=3, \dots$) em [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/).
- **Aula 07 (Geração Contada com `for`):** Reestruturado com o comando `for` e validação defensiva de entrada estritamente positiva (`limit > 0`).
- **Aula 10 (Recorrência Recursiva):** Decomposto em duas funções recursivas complementares (`make_fibonacci_sequence` e `make_fibonacci_sum`) em [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/), substituindo variáveis de estado pelo empilhamento de parâmetros.

### 3. Evolução do Menu Consolidado
- **Aula 05:** Idealizado inicialmente como um seletor de opções com `switch-case`.
- **Aula 06:** Transformado em aplicação interativa encapsulada em um loop de eventos `do...while`.
- **Aulas 07 a 11:** Expandido semanalmente para integrar vetores, strings, matrizes, funções matemáticas modulares, rotinas recursivas e estruturas heterogêneas (`struct`), totalizando 18 opções em [`src/00-consolidated-menu/`](src/00-consolidated-menu/).

---

## 📝 Índice de Exercícios

| # | Exercício | Aula de Origem | Código & Documentação | Conceitos Principais |
| :-: | :--- | :---: | :--- | :--- |
| 00 | **Menu Consolidado - Exercícios do Curso** | Aulas 05-11 | [`src/00-consolidated-menu/`](src/00-consolidated-menu/) | Menu interativo unificando os exercícios práticos do semestre em um único programa executável com repetição contínua em `do...while`. |
| 01 | **Tipos Básicos, E/S e Tamanho de Memória** | Aula 02 | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) | Tipos primitivos (`char`, `int`, `float`, `long`, `double`), operador `sizeof()`, `%zu`, `printf()` e `scanf()` formatados. |
| 02 | **Verificador de Par ou Ímpar** | Aula 03 | [`src/02-even-or-odd/`](src/02-even-or-odd/) | Operador módulo (`%`), exclusividade mútua (`if/else`), limpeza do buffer de entrada (`scanf(" %c")`), repetição com `do...while`. |
| 03 | **Avaliador de Notas Acadêmicas** | Aulas 03 e 04 | [`src/03-grade-evaluator/`](src/03-grade-evaluator/) | Cálculo de média aritmética, reaproveitamento de variáveis, condicionais aninhadas (`if` dentro de `else`), recuperação (`retakeExam`). |
| 04 | **One Item Shop - Seletor de Descontos** | Aula 04 | [`src/04-one-item-shop/`](src/04-one-item-shop/) | Cadeia `else if`, comparação de caracteres (`'a' \|\| 'A'`), escape de porcentagem literal (`%%`), fluxo estruturado sem `return` prematuro. |
| 05 | **Loja de Sobremesas - Switch & Fallthrough** | Aula 05 | [`src/05-dessert-shop/`](src/05-dessert-shop/) | Ramificação com `switch/case`, controle com `break`, *fallthrough* intencional para preços acumulados, tratamento com `default`. |
| 06 | **Calculador de Fatorial** | Aulas 06, 07, 09 | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) | Acumulador de produto fatorial ($n!$), formatação do desenvolvimento multiplicativo (`5 x 4 x 3 x 2 x 1 = 120`), submenu comparativo com `while`, `do...while`, `for` e função modular. |
| 07 | **Sequência de Fibonacci** | Aulas 06 e 07 | [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) | Recorrência com janela deslizante ($F_n = F_{n-1} + F_{n-2}$), decomposição de somas, limite por valor vs. quantidade de termos, repetição de validação defensiva de entrada (`limit > 0`), versões com `do...while`, `while` e `for`. |
| 08 | **Caracteres em Ordem Reversa** | Aula 07 | [`src/08-reverse-characters/`](src/08-reverse-characters/) | Arrays com tamanho em tempo de execução (VLA), índice começando em zero, `for` nos dois sentidos, limpeza do buffer com `scanf(" %c")`. |
| 09 | **Maior e Menor Número** | Aula 07 | [`src/09-lowest-highest-numbers/`](src/09-lowest-highest-numbers/) | Array de inteiros com entrada limitada (até 30), bubble sort em uma cópia do array, busca do menor e do maior valor, `for` aninhados. |
| 10 | **Manipulação de Strings** | Aula 08 | [`src/10-string-manipulation/`](src/10-string-manipulation/) | Vetores de caracteres, terminador nulo `\0`, loop de cópia manual, cópia com `strcpy()`, comparação com `strcmp()` e concatenação com `strcat()`. |
| 11 | **Soma de Matrizes** | Aula 08 | [`src/11-matrix-addition/`](src/11-matrix-addition/) | Matrizes bidimensionais, disposição contígua na memória RAM (row-major), validação defensiva de dimensões, loops `for` aninhados e soma termo a termo. |
| 12 | **Calculadora de Raiz Quadrada** | Aula 09 | [`src/12-square-root-calculator/`](src/12-square-root-calculator/) | Funções modulares, `<math.h>` (`sqrt`), retenção em vetores de entradas e saídas, validação de reais negativos, flag `-lm`. |
| 13 | **Fatorial Recursivo** | Aula 10 | [`src/13-recursive-factorial/`](src/13-recursive-factorial/) | Acumulador recursivo, caso base ($N < 1$), expansão aritmética ($N \times \dots \times 1 = \text{resultado}$), análise de Heap (CS50x) vs. Stack. |
| 14 | **Fibonacci Recursivo** | Aula 10 | [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/) | Recorrência em cauda ($F_n = F_{n-1} + F_{n-2}$), complexidade espacial linear, decomposição em sequência e passos de soma. |
| 15 | **Sistema de Gerenciamento Acadêmico** | Aula 11 | [`src/15-academic-management-system/`](src/15-academic-management-system/) | Estruturas heterogêneas compostas (`struct`), pseudônimos com `typedef`, vetor de registros, repetição contínua com confirmação `(y/n)`. |

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
│   ├── 09-lowest-highest-numbers/
│   │   ├── lowest_highest_numbers.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 10-string-manipulation/
│   │   ├── string_manipulation.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 11-matrix-addition/
│   │   ├── matrix_addition.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 12-square-root-calculator/
│   │   ├── square_root_calculator.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 13-recursive-factorial/
│   │   ├── recursive_factorial.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 14-recursive-fibonacci/
│   │   ├── recursive_fibonacci.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   └── 15-academic-management-system/
│       ├── academic_management_system.c
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
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu -lm && ./dist/consolidated_menu

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

# Exercício 10: Manipulação de Strings
mkdir -p dist && clang -Wall -O2 src/10-string-manipulation/string_manipulation.c -o dist/string_manipulation && ./dist/string_manipulation

# Exercício 11: Soma de Matrizes
mkdir -p dist && clang -Wall -O2 src/11-matrix-addition/matrix_addition.c -o dist/matrix_addition && ./dist/matrix_addition

# Exercício 12: Calculadora de Raiz Quadrada
mkdir -p dist && clang -Wall -O2 src/12-square-root-calculator/square_root_calculator.c -o dist/square_root_calculator -lm && ./dist/square_root_calculator

# Exercício 13: Fatorial Recursivo
mkdir -p dist && clang -Wall -O2 src/13-recursive-factorial/recursive_factorial.c -o dist/recursive_factorial && ./dist/recursive_factorial

# Exercício 14: Fibonacci Recursivo
mkdir -p dist && clang -Wall -O2 src/14-recursive-fibonacci/recursive_fibonacci.c -o dist/recursive_fibonacci && ./dist/recursive_fibonacci

# Exercício 15: Sistema de Gerenciamento Acadêmico
mkdir -p dist && clang -Wall -O2 src/15-academic-management-system/academic_management_system.c -o dist/academic_management_system && ./dist/academic_management_system
```

---

## 📚 Bibliografia

- **KERNIGHAN, Brian W.; RITCHIE, Dennis M.** *C Programming Language: ANSI C Version*. 2. ed. Prentice Hall, 1988.
- **GRAHAN, Darrel L.** *C Programming Language: A Step by Step Beginner's Guide to Learn C Programming in 7 Days*. Createspace, 2016.

---

<div align="center">
  Desenvolvido por <b><a href="https://github.com/lucasresendev">Lucas Resende</a></b> 🚀
</div>
