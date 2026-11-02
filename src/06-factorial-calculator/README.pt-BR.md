<div align="center">

  🇬🇧 **[English Version](README.md)**
  <br>

  # ⚙️ Calculador de Fatorial (`factorial_calculator.c`)

</div>

> **Origem:** Aula 06 (do-while e while), Aula 08 (for), Aula 10 (função modular)  
> **Tópico:** Estruturas de Repetição e Decomposição Procedural  
> **Continuidade:** Precursor do paradigma recursivo em [Aula 11: Fatorial Recursivo](../13-recursive-factorial)

---

## 🎯 Enunciado do Problema

Ler um número inteiro informado pelo usuário e calcular o seu fatorial ($n!$), exibindo dinamicamente o desenvolvimento da cadeia de multiplicações intermediárias (ex.: `5 x 4 x 3 x 2 x 1 = 120`). Na minha solução, o programa tem um submenu interativo para eu executar e comparar quatro abordagens progressivas: `do...while` (Aula 06), `while` (Aula 06), `for` (Aula 08) e uma função modular com passagem de parâmetro por valor (Aula 10).

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`factorial_calculator.c`](factorial_calculator.c).

---

## 🖥️ Saída no Terminal

```text
================================================================
                  Factorial Calculator
================================================================
1 - Calculate Factorial using do...while
2 - Calculate Factorial using while
3 - Calculate Factorial using for
4 - Calculate Factorial using Modular Function
5 - Exit
================================================================

Choice (1-5): 1

================================================================
             Factorial Calculation (do...while)
================================================================

Insert a number to calculate its factorial: 5
For the number 5, the factorial is: 5 x 4 x 3 x 2 x 1 = 120

================================================================


================================================================
                  Factorial Calculator
================================================================
1 - Calculate Factorial using do...while
2 - Calculate Factorial using while
3 - Calculate Factorial using for
4 - Exit
================================================================

Choice (1-4): 3

================================================================
                Factorial Calculation (for)
================================================================

Insert a number to calculate its factorial: 4
For the number 4, the factorial is: 4 x 3 x 2 x 1 = 24

================================================================


================================================================
                  Factorial Calculator
================================================================
1 - Calculate Factorial using do...while
2 - Calculate Factorial using while
3 - Calculate Factorial using for
4 - Calculate Factorial using Modular Function
5 - Exit
================================================================

Choice (1-5): 5

================================================================
                   Exiting program. Goodbye!
================================================================
```

---

## 💡 Principais Conceitos Aplicados

- **Modelo Matemático do Fatorial:** Definido para inteiros não negativos como $n! = \prod_{k=1}^n k$, com a identidade $0! = 1$.
- **Acumulador do Fatorial:** Começa em `factorial_number = 1` e multiplica os fatores a cada volta da repetição (`factorial_number *= temporary_number`).
- **Formatação Dinâmica de Expressões:** Diferenciação entre os fatores multiplicativos intermediários e o encerramento do cálculo com saída condicional (`if (temporary_number > 1) printf("x "); else printf("= ");`).
- **Comparação de Repetições (`while`, `do...while` e `for`):** Análise de como o momento da validação condicional afeta o comportamento do programa diante de valores de fronteira. O comando `for` reúne inicialização, condição e decremento em um único cabeçalho (`for (temporary_number = selected_number; temporary_number >= 1; temporary_number--)`), sendo o mais indicado quando se sabe quantas vezes a repetição vai rodar.
- **Decomposição Modular (Aula 10):** Isolamento do cálculo em função auxiliar (`calculate_factorial_modular`) que recebe `selected_number` por valor, definindo escopo limpo de parâmetros.
- **Entrada Formatada (`scanf`):** Captura números inteiros diretamente com `scanf("%i")`, que já descarta automaticamente espaços e quebras de linha precedentes de forma nativa.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator
```
