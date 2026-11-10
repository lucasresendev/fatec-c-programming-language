<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Menu Consolidado de Exercícios (`consolidated_menu.c`)

</div>

> **Origem:** Aulas 05 a 14 (Coleção Consolidada de Exercícios)  
> **Tópico:** Menu Interativo com switch/case, Loop do...while e Funções  
> **Continuidade:** Ideia inicial na Aula 05, colocado em loop na Aula 06 e atualizado até a Aula 14

---

## 🎯 Enunciado do Problema

Neste projeto, reuni todos os exercícios práticos e a avaliação final que desenvolvi ao longo do semestre em um menu interativo no terminal (`00-consolidated-menu`). Estruturei o programa com uma repetição contínua usando `do...while`, que executa a rotina escolhida e retorna ao menu principal até que a opção 20 seja informada para encerrar.

O menu reúne 19 exercícios integrados:
1. **Verificador de Par ou Ímpar**
2. **Avaliador de Notas com Exame de Recuperação**
3. **Loja de Item Único** (Tabela de Descontos)
4. **Loja de Sobremesas** (Precificação via `switch/case` e Fallthrough)
5. **Cálculo de Fatorial** (`do...while`)
6. **Cálculo de Fatorial** (`while`)
7. **Cálculo de Fatorial** (`for`)
8. **Sequência de Fibonacci** (`do...while` com validação)
9. **Sequência de Fibonacci** (`while` com validação)
10. **Sequência de Fibonacci** (`for` com validação)
11. **Caracteres em Ordem Reversa** (vetor percorrido de trás para frente)
12. **Maior e Menor Número** (vetor com ordenação bubble sort)
13. **Manipulação de Strings** (`string.h`, cópia manual, comparação e concatenação)
14. **Soma de Matrizes** (matrizes 2D com soma elemento a elemento)
15. **Calculadora de Raiz Quadrada** (`<math.h>`, armazenamento em vetores e relatório em lote)
16. **Fatorial Recursivo** (função recursiva mostrando cada multiplicação)
17. **Fibonacci Recursivo** (geração de termos e somas passo a passo)
18. **Sistema de Gerenciamento Acadêmico** (`struct`, `typedef`, geração de relatório e persistência em múltiplos arquivos)
19. **Validador de CPF** (Avaliação Final: cálculo dos dígitos verificadores e ponteiros)
20. **Sair**

---

## 💻 Código-Fonte

O código completo está em [consolidated_menu.c](consolidated_menu.c).

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
19 - CPF Validator (Final Assessment)
20 - Exit
================================================================

Choice (1-20): 7

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
19 - CPF Validator (Final Assessment)
20 - Exit
================================================================

Choice (1-20): 20

================================================================
                   Exiting program. Goodbye!
================================================================
```

---

## 💡 Principais Conceitos Aplicados

- **Menu Unificado de Exercícios:** Criei este programa como ponto de entrada principal dos meus exercícios práticos, atualizando o código sempre que concluía uma nova atividade da matéria.
- **Execução Contínua com `do...while`:** O laço de repetição garante que o menu apareça pelo menos uma vez e continue em execução até a condição `exercise_choice != 20` se tornar falsa (0).
- **Organização e Escopo de Variáveis:** Declarei as variáveis comuns no início de `main(void)` para manter uma estrutura clara. Nos exercícios que usam vetores e matrizes dimensionados pelo usuário, declarei as coleções dentro de cada caso do `switch`.
- **Limpeza do Buffer de Entrada:** Enquanto leituras numéricas (`%i`, `%f`) ignoram espaços e quebras de linha anteriores, para ler caracteres com `scanf(" %c")` incluí um espaço antes do `%c` para não capturar o `\n` que sobrou no teclado.
- **Apresentação Visual Padronizada:** Utilizei réguas divisórias de 64 caracteres `=` para manter a tela limpa e consistente em todas as opções do menu.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -lm -o dist/consolidated_menu && ./dist/consolidated_menu

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -lm -o dist/consolidated_menu && ./dist/consolidated_menu
```
