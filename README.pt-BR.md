<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Introdução à Linguagem de Programação C | Fatec & ARInter

  ### **Meus Exercícios de Aula, Práticas e Avaliação Final em C Padrão**

  [![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](https://en.cppreference.com/w/c)
  [![GCC](https://img.shields.io/badge/GCC-00599C?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
  [![Clang](https://img.shields.io/badge/Clang-000000?style=for-the-badge&logo=llvm&logoColor=white)](https://clang.llvm.org/)
  [![ARInter - CPS](https://img.shields.io/badge/ARInter-CPS-003366?style=for-the-badge)](https://arinter.cps.sp.gov.br/)
  [![Fatec](https://img.shields.io/badge/Fatec-CEETEPS-B22222?style=for-the-badge)](https://www.cps.sp.gov.br/)

</div>

---

## 🎯 Sobre Este Repositório

Aqui estão todos os programas e exercícios em C que escrevi durante o curso **Introduction to the C Programming Language**, no meu 1º semestre na **Fatec**. O curso é uma disciplina optativa internacional oferecida pela **Assessoria de Relações Internacionais (ARInter / CEETEPS)**, com aulas 100% em inglês junto com estudantes de intercâmbio.

Ao longo do semestre, usei esses exercícios tanto para fixar a matéria das aulas quanto para testar coisas que eu estava estudando por fora (como o Bubble Sort e ponteiros do CS50x de Harvard). Como as aulas e tarefas eram todas em inglês, escrevi os códigos e a documentação principal em inglês (`README.md`) e traduzi todas as explicações para português (`README.pt-BR.md`).

- **Curso:** Introduction to the C Programming Language (ARInter / Fatec).
- **Professor:** Luciano Gonçalves de Carvalho.
- **Idioma das Aulas:** 100% em inglês (aulas ao vivo pelo MS Teams às terças-feiras, das 17h00 às 18h40).
- **Carga Horária:** 40 horas no total (30 horas de aulas ao vivo + 10 horas de atividades práticas).
- **Critérios de Aprovação:** Frequência mínima de 70% e nota final mínima de 6,0.

---

## 🗺️ Cronograma das Aulas e Exercícios

| Aula | Tema da Aula | Status | Exercícios no Repositório |
| :---: | :--- | :---: | :--- |
| 01 | Introdução ao C: lógica, algoritmos, labirinto Hour of Code (Code.org), papel do compilador e primeiro Hello World | ✅ Concluído | Configuração no OnlineGDB (e meu ambiente local no VS Code / GCC) |
| 02 | Variáveis, Tipos Primitivos e Entrada/Saída (`printf`, `scanf`, `sizeof`) | ✅ Concluído | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) |
| 03 | Estruturas de Decisão: Parte 1 (`if`, `else`, verdade numérica, operadores relacionais e lógicos) | ✅ Concluído | [`src/02-even-or-odd/`](src/02-even-or-odd/), [`src/03-grade-evaluator/`](src/03-grade-evaluator/) (inicial) |
| 04 | Estruturas de Decisão: Parte 2 (`else if`, condicionais aninhadas, recuperação, menu de descontos) | ✅ Concluído | [`src/03-grade-evaluator/`](src/03-grade-evaluator/) (recuperação), [`src/04-one-item-shop/`](src/04-one-item-shop/) |
| 05 | Estruturas de Decisão: Parte 3 (`switch`, `break`, fallthrough intencional, loja de sobremesas) | ✅ Concluído | [`src/05-dessert-shop/`](src/05-dessert-shop/), [`src/00-consolidated-menu/`](src/00-consolidated-menu/) (ideia inicial) |
| 06 | Estruturas de Repetição: Parte 1 (`do-while` vs. `while`, menus, fatorial e Fibonacci) | ✅ Concluído | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (`do-while`/`while`), [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) (`do-while`/`while`), [`src/00-consolidated-menu/`](src/00-consolidated-menu/) (loop do menu) |
| 07 | *Sem aula: professor em evento institucional do CPS* | ⏸️ Sem aula | *(Conteúdo seguiu na Aula 08)* |
| 08 | Estruturas de Repetição: Parte 2 (`for`, arrays de 1 dimensão, ordem reversa e menor/maior valor) | ✅ Concluído | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (`for`), [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) (`for`), [`src/08-reverse-characters/`](src/08-reverse-characters/), [`src/09-lowest-highest-numbers/`](src/09-lowest-highest-numbers/) |
| 09 | Strings, Biblioteca `string.h` e Matrizes 2D (terminador `\0`, funções de texto, soma de matrizes) | ✅ Concluído | [`src/10-string-manipulation/`](src/10-string-manipulation/), [`src/11-matrix-addition/`](src/11-matrix-addition/) |
| 10 | Funções, Modularização e `<math.h>` (funções, `void`, `sqrt`, fatorial em função) | ✅ Concluído | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (função modular), [`src/12-square-root-calculator/`](src/12-square-root-calculator/) |
| 11 | Recursividade (caso base, fatorial recursivo e Fibonacci recursivo) | ✅ Concluído | [`src/13-recursive-factorial/`](src/13-recursive-factorial/), [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/) |
| 12 | Tipos Definidos pelo Usuário (`struct`, `typedef`, trocando vetores paralelos por registros de alunos) | ✅ Concluído | [`src/15-academic-management-system/`](src/15-academic-management-system/) (cadastro e listagem na RAM) |
| 13 | Manipulação de Arquivos e Persistência de Dados (`FILE *`, `fopen`, `fprintf`, `fscanf`, `fclose`, `%[^\n]`) | ✅ Concluído | [`src/15-academic-management-system/`](src/15-academic-management-system/) (`report.txt`, `total.txt`, `ids.txt`, `names.txt`) |
| 14 | **Avaliação Final do Curso:** Problema autoral e vídeo em inglês de até 5 minutos explicando o código | ✅ Concluído | [`src/16-cpf-validator/`](src/16-cpf-validator/) + [🎥 Vídeo no YouTube](https://youtu.be/MwPf94gYgpY) |
| 15 | *Avaliação de Recuperação (Retake Test apenas para quem não atingiu a nota)* | ✅ Dispensado | *(Curso concluído na Aula 14)* |

---

## 🔄 Como os Exercícios Evoluíram ao Longo das Aulas

Em várias aulas o professor voltou em exercícios anteriores para refazermos o mesmo problema usando o conteúdo novo da semana:

### 1. Fatorial
- **Aula 06 (`do-while` e `while`):** Feito primeiro com repetições `do...while` e `while` em [`src/06-factorial-calculator/`](src/06-factorial-calculator/), mostrando toda a conta na tela (`5 x 4 x 3 x 2 x 1 = 120`).
- **Aula 08 (`for`):** Refeito com `for`, deixando a inicialização, a condição e o decremento na mesma linha.
- **Aula 10 (Funções):** Separado em uma função própria (`calculate_factorial_modular`) que recebe o número por parâmetro.
- **Aula 11 (Recursividade):** Reescrito com chamadas recursivas e condição de parada (`temporary_number < 1`) em [`src/13-recursive-factorial/`](src/13-recursive-factorial/).

### 2. Sequência de Fibonacci
- **Aula 06 (`do-while` e `while`):** Feito em [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) de dois jeitos: parando quando o valor passa de um teto ou gerando uma quantidade exata de termos com o passo a passo das somas (`1 + 1 = 2`, `1 + 2 = 3`, e assim por diante).
- **Aula 08 (`for`):** Reescrito com `for` e validação para aceitar apenas números maiores que zero (`limit > 0`).
- **Aula 11 (Recursividade):** Dividido em duas funções recursivas em [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/), uma para imprimir a sequência e outra para imprimir as somas.

### 3. Sistema de Gerenciamento Acadêmico
- **Aula 12 (`struct` e `typedef`):** Começou com dois vetores paralelos separados (`ids[]` e `names[][]`) e depois evoluiu para um vetor de `struct STUDENT` com `typedef` em [`src/15-academic-management-system/`](src/15-academic-management-system/).
- **Aula 13 (Arquivos e Persistência):** Ganhou `FILE *pointer`, `fopen` (`"wt"` e `"rt"`), `fprintf`, `fscanf` (usando `" %[^\n]"` para ler linhas inteiras com espaço) e `fclose`. Adicionamos a Opção 3 para salvar e ler o `report.txt`, além de carregar e salvar automaticamente os arquivos `total.txt`, `ids.txt` e `names.txt` ao abrir e fechar o programa.

### 4. Menu Consolidado
- **Aula 05:** Começou como um exemplo simples de `switch/case`.
- **Aula 06:** Ganhou um `do...while` para continuar rodando até o usuário escolher sair.
- **Aulas 08 a 14:** Foi recebendo os exercícios novos a cada semana, chegando a 20 opções em [`src/00-consolidated-menu/`](src/00-consolidated-menu/).

---

## 📝 Índice de Exercícios

| # | Exercício | Aula | Pasta | O que Pratiquei |
| :-: | :--- | :---: | :--- | :--- |
| 00 | **Menu Consolidado** | Aulas 05-14 | [`src/00-consolidated-menu/`](src/00-consolidated-menu/) | Menu interativo no terminal reunindo todos os 19 exercícios do semestre dentro de uma repetição `do...while`. |
| 01 | **Tipos Básicos, E/S e Tamanho de Memória** | Aula 02 | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) | Tipos primitivos (`char`, `int`, `float`, `long`, `double`), `sizeof()`, `%zu`, `printf()` e `scanf()`. |
| 02 | **Verificador de Par ou Ímpar** | Aula 03 | [`src/02-even-or-odd/`](src/02-even-or-odd/) | Operador de resto (`%`), `if/else`, limpeza de buffer com `scanf(" %c")` e repetição com `do...while`. |
| 03 | **Avaliador de Notas Acadêmicas** | Aulas 03 e 04 | [`src/03-grade-evaluator/`](src/03-grade-evaluator/) | Cálculo de média, reaproveitamento de variável, `if` aninhado dentro do `else` e cálculo de recuperação. |
| 04 | **One Item Shop** | Aula 04 | [`src/04-one-item-shop/`](src/04-one-item-shop/) | Cadeia `else if` de descontos, aceitação de maiúsculas/minúsculas (`'a' \|\| 'A'`) e impressão de `%%` no `printf`. |
| 05 | **Loja de Sobremesas** | Aula 05 | [`src/05-dessert-shop/`](src/05-dessert-shop/) | `switch/case`, `break`, *fallthrough* intencional para somar preços e `default` para opções inválidas. |
| 06 | **Calculador de Fatorial** | Aulas 06, 08, 10 | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) | Cálculo de fatorial mostrando cada multiplicação, comparando `do...while`, `while`, `for` e função modular. |
| 07 | **Sequência de Fibonacci** | Aulas 06 e 08 | [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) | Sequência de Fibonacci e somas passo a passo, comparando limite por valor e quantidade de termos com `do...while`, `while` e `for`. |
| 08 | **Caracteres em Ordem Reversa** | Aula 08 | [`src/08-reverse-characters/`](src/08-reverse-characters/) | Array de caracteres com tamanho definido na hora, índice começando em 0 e `for` na ordem normal e inversa. |
| 09 | **Maior e Menor Número** | Aula 08 | [`src/09-lowest-highest-numbers/`](src/09-lowest-highest-numbers/) | Leitura de até 30 inteiros, ordenação de uma cópia com Bubble Sort (do CS50x) e busca do menor e do maior valor. |
| 10 | **Manipulação de Strings** | Aula 09 | [`src/10-string-manipulation/`](src/10-string-manipulation/) | Arrays de caracteres, terminador `\0`, cópia manual caractere por caractere, `strcmp()` e `strcat()`. |
| 11 | **Soma de Matrizes** | Aula 09 | [`src/11-matrix-addition/`](src/11-matrix-addition/) | Matrizes 2D, `for` aninhados para linhas e colunas e soma de duas matrizes posição por posição. |
| 12 | **Calculadora de Raiz Quadrada** | Aula 10 | [`src/12-square-root-calculator/`](src/12-square-root-calculator/) | Função modular, `sqrt()` da `<math.h>`, armazenamento dos valores e resultados em arrays e compilação com `-lm`. |
| 13 | **Fatorial Recursivo** | Aula 11 | [`src/13-recursive-factorial/`](src/13-recursive-factorial/) | Função recursiva com condição de parada e parâmetro acumulador para imprimir cada multiplicação. |
| 14 | **Fibonacci Recursivo** | Aula 11 | [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/) | Duas funções recursivas para imprimir os termos da sequência de Fibonacci e as somas passo a passo. |
| 15 | **Sistema de Gerenciamento Acadêmico** | Aulas 12 e 13 | [`src/15-academic-management-system/`](src/15-academic-management-system/) | Registros de alunos com `struct` e `typedef` (Aula 12), junto com `FILE *`, `fopen`, `fprintf`, `fscanf` (`" %[^\n]"`), `report.txt` e salvamento em `total.txt`, `ids.txt` e `names.txt` (Aula 13). |
| 16 | **Validador de CPF (Avaliação Final)** | Aula 14 | [`src/16-cpf-validator/`](src/16-cpf-validator/) | Avaliação final do curso: cálculo dos dois dígitos verificadores do CPF, ponteiros (`&` e `*`), conversão de `char` para `int` (`input[i] - '0'`) e [vídeo explicativo em inglês](https://youtu.be/MwPf94gYgpY). |

---

## 🏆 Avaliação Final do Curso (Aula 14)

Para compor a nota final na Aula 14, o professor Luciano pediu que cada aluno criasse um programa em C resolvendo um problema diferente dos que fizemos em aula e gravasse um vídeo de até 5 minutos em inglês explicando o código linha por linha.

Escolhi criar um [**Validador de CPF (`src/16-cpf-validator/`)**](src/16-cpf-validator/):

- **O que é o CPF?** O CPF (*Cadastro de Pessoas Físicas*) é o documento de identificação fiscal usado no Brasil (parecido com o *Social Security Number* dos EUA). Ele é formado por 11 dígitos no formato `xxx.xxx.xxx-xx`, em que os 9 primeiros números são a base do documento e os 2 últimos (`-xx`) são os dígitos verificadores calculados a partir dos 9 primeiros.
- **O que o meu programa valida na prática?** Como é um programa rodando localmente no terminal em C, ele não consulta a base de dados da Receita Federal para saber se a pessoa existe. O escopo dele é fazer a mesma validação que sites e cadastros fazem na hora em que digitamos o CPF para descobrir se houve erro de digitação ou se o número foi inventado:
  1. Aceita o CPF digitado com pontuação (`123.456.789-00`) ou só com números (`12345678900`), ignorando pontos e traços.
  2. Verifica se restaram exatamente 11 dígitos numéricos (pedindo para digitar de novo caso tenha dígitos a mais ou a menos).
  3. Barra CPFs com todos os 11 dígitos repetidos (como `111.111.111-11`), porque eles passariam na conta matemática por coincidência, mas não são válidos.
  4. Calcula quanto deveriam valer o 10º e o 11º dígitos a partir dos 9 primeiros e confere se batem com os que o usuário digitou.
- **Como estruturei o código:**
  - **Ponteiros (`&` e `*`):** Na função `clean_CPF`, passei o endereço `&input_digits_size` e usei `*input_digits_size` para atualizar a quantidade de dígitos direto na memória enquanto filtrava só os caracteres numéricos e convertia cada `char` para `int` com `input[i] - '0'`.
  - **Uma Única Função para os Dois Dígitos (`check_CPF`):** Como os pesos nas duas etapas sempre diminuem até `2`, usei `weight = num_digits + 1 - i` para validar tanto o 1º dígito verificador (9 dígitos, pesos de 10 até 2) quanto o 2º dígito (10 dígitos, pesos de 11 até 2) com a mesma função.
- **Meu Vídeo Explicando o Código (em Inglês, 5 min):** [**Assessment: Code Explanation - Introduction to the C Programming Language | Lucas Resende (YouTube)**](https://youtu.be/MwPf94gYgpY)

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
│   ├── 15-academic-management-system/
│   │   ├── academic_management_system.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   └── 16-cpf-validator/
│       ├── cpf_validator.c
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
- Compilador C instalado, como [GCC](https://gcc.gnu.org/) ou [Clang](https://clang.llvm.org/).

### Compilação e Execução
Você pode compilar e rodar qualquer exercício diretamente da raiz do repositório:

```bash
# Menu Consolidado de Exercícios
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu -lm && ./dist/consolidated_menu

# Exercício 1: Tipos Básicos, E/S e Tamanho de Memória
mkdir -p dist && clang -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io

# Exercício 2: Verificador de Par ou Ímpar
mkdir -p dist && clang -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd

# Exercício 3: Avaliador de Notas Acadêmicas
mkdir -p dist && clang -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator

# Exercício 4: One Item Shop
mkdir -p dist && clang -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop

# Exercício 5: Loja de Sobremesas
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

# Exercício 16: Validador de CPF (Avaliação Final)
mkdir -p dist && clang -Wall -O2 src/16-cpf-validator/cpf_validator.c -o dist/cpf_validator && ./dist/cpf_validator
```

---

## 📚 Bibliografia do Curso

- **KERNIGHAN, Brian W., RITCHIE, Dennis M.** *C Programming Language: ANSI C Version*. 2. ed. Prentice Hall, 1988.
- **GRAHAN, Darrel L.** *C Programming Language: A Step by Step Beginner's Guide to Learn C Programming in 7 Days*. Createspace, 2016.

---

<div align="center">
  Desenvolvido por <b><a href="https://github.com/lucasresendev">Lucas Resende</a></b> 🚀
</div>
