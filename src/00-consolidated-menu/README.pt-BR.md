<div align="center">

  🇬🇧 **[English Version](README.md)**
  <br>

  # ⚙️ Menu Consolidado de Exercícios (`consolidated_menu.c`)

</div>

---

## 🎯 Enunciado do Problema

Unificar todos os exercícios práticos desenvolvidos ao longo do semestre em um menu interativo no terminal (`00-consolidated-menu`). O programa executa continuamente dentro de uma repetição `do...while`, despachando a execução para cada rotina e retornando ao menu principal até que o usuário informe explicitamente a Opção 19 para encerrar.

O menu reúne 18 exercícios integrados:
1. **Verificador de Par ou Ímpar**
2. **Avaliador de Notas com Exame de Recuperação**
3. **Loja de Item Único** (Escada de Descontos)
4. **Loja de Sobremesas** (Precificação Aditiva via `switch/case` e Fallthrough)
5. **Cálculo de Fatorial** (`do...while`)
6. **Cálculo de Fatorial** (`while`)
7. **Cálculo de Fatorial** (`for`)
8. **Sequência de Fibonacci** (`do...while` com validação)
9. **Sequência de Fibonacci** (`while` com validação)
10. **Sequência de Fibonacci** (`for` com validação)
11. **Caracteres em Ordem Reversa** (array percorrido de trás para frente)
12. **Maior e Menor Número** (array com bubble sort)
13. **Manipulação de Strings** (`string.h`, cópia manual, comparação, concatenação)
14. **Soma de Matrizes** (arrays 2D com soma elemento a elemento)
15. **Calculadora de Raiz Quadrada** (`<math.h>`, retenção em vetores e relatório em lote)
16. **Fatorial Recursivo** (acumulador recursivo em cauda com expansão)
17. **Fibonacci Recursivo** (geração de termos e decomposição aritmética de somas)
18. **Sistema de Gerenciamento Acadêmico** (registros com `struct` e `typedef`)
19. **Sair**

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`consolidated_menu.c`](consolidated_menu.c).

---

## 🖥️ Saída no Terminal

```text
================================================================
              Welcome! Please, select an exercise:
================================================================
1 - Even or Odd
2 - Passed or Not
3 - One Item Shop
4 - Dessert Shop
5 - Factorial (do while)
6 - Factorial (while)
7 - Factorial (for)
8 - Fibonacci Sequence (do while)
9 - Fibonacci Sequence (while)
10 - Fibonacci Sequence (for)
11 - Reverse Characters
12 - Lowest and Highest Numbers
13 - String Manipulation
14 - Matrix Addition
15 - Square Root Calculator
16 - Recursive Factorial
17 - Recursive Fibonacci
18 - Academic Management System
19 - Exit
================================================================

Choice (1-19): 7

================================================================
                       Factorial (for)
================================================================

Insert a number to calculate its factorial: 5
For the number 5, the factorial is: 5 x 4 x 3 x 2 x 1 = 120

================================================================


================================================================
              Welcome! Please, select an exercise:
================================================================
1 - Even or Odd
2 - Passed or Not
3 - One Item Shop
4 - Dessert Shop
5 - Factorial (do while)
6 - Factorial (while)
7 - Factorial (for)
8 - Fibonacci Sequence (do while)
9 - Fibonacci Sequence (while)
10 - Fibonacci Sequence (for)
11 - Reverse Characters
12 - Lowest and Highest Numbers
13 - String Manipulation
14 - Matrix Addition
15 - Square Root Calculator
16 - Recursive Factorial
17 - Recursive Fibonacci
18 - Academic Management System
19 - Exit
================================================================

Choice (1-19): 19

================================================================
                   Exiting program. Goodbye!
================================================================
```

---

## 💡 Principais Conceitos Aplicados

- **Menu de Exercícios do Curso (`00`):** Ponto de entrada consolidado do repositório, posicionado no início de `src/` e atualizado continuamente à medida que novos exercícios e algoritmos são implementados.
- **Execução Contínua via `do...while`:** Garante a renderização do menu ao menos uma vez e mantém a aplicação viva até que a condição sentinela `exercise_choice != 19` se torne falsa.
- **Declaração de Variáveis no Topo do Escopo:** As variáveis escalares de todos os módulos ficam no início de `main(void)`, reforçando a clareza de alocação de memória no paradigma estruturado. Os exercícios com arrays e matrizes declaram suas coleções dinâmicas dentro do próprio bloco, já que as dimensões dependem do que o usuário digita.
- **Tratamento do Buffer de Entrada:** Enquanto especificadores numéricos e de texto (`%i`, `%f`, `%s`) já descartam espaços e quebras de linha automaticamente, leituras de caractere utilizam `scanf(" %c")` com espaço à esquerda intencional para evitar capturar o `\n` residual do teclado.
- **Identidade Visual Padronizada:** Réguas divisórias de 64 caracteres `=` garantem clareza e separação estética entre cada módulo.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu
```
