<div align="center">

  🇬🇧 **[English Version](README.md)**
  <br>

  # ⚙️ Menu Consolidado de Exercícios (`consolidated_menu.c`)

</div>

---

## 🎯 Enunciado do Problema

Unificar todos os exercícios práticos desenvolvidos ao longo do semestre em um menu interativo no terminal (`00-consolidated-menu`). O programa executa continuamente dentro de uma repetição `do...while`, despachando a execução para cada rotina e retornando ao menu principal até que o usuário informe explicitamente a Opção 13 para encerrar.

O menu reúne 12 exercícios integrados:
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
13. **Sair**

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
13 - Exit
================================================================

Choice (1-13): 7

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
13 - Exit
================================================================

Choice (1-13): 13

================================================================
                   Exiting program. Goodbye!
================================================================
```

---

## 💡 Principais Conceitos Aplicados

- **Menu de Exercícios do Curso (`00`):** Ponto de entrada consolidado do repositório, posicionado no início de `src/` e atualizado continuamente à medida que novos exercícios e algoritmos são implementados.
- **Execução Contínua via `do...while`:** Garante a renderização do menu ao menos uma vez e mantém a aplicação viva até que a condição sentinela `exercise_choice != 13` se torne falsa.
- **Declaração de Variáveis no Topo do Escopo:** As variáveis escalares de todos os módulos ficam no início de `main(void)`, reforçando a clareza de alocação de memória no paradigma estruturado. Os dois exercícios com arrays declaram seus arrays dentro do próprio bloco, já que o tamanho depende do que o usuário digita.
- **Higiene do Buffer de Entrada:** O uso de espaço antecedendo especificadores (`scanf(" %i")`, `scanf(" %c")`) elimina caracteres de quebra de linha residuais deixados pelo teclado.
- **Identidade Visual Padronizada:** Réguas divisórias de 64 caracteres `=` garantem clareza e separação estética entre cada módulo.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu
```
