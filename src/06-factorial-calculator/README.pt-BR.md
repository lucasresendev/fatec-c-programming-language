<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Calculador de Fatorial (`factorial_calculator.c`)

</div>

> **Origem:** Aula 06 (do-while e while), Aula 08 (for), Aula 10 (função modular)  
> **Tópico:** Estruturas de Repetição (do-while, while, for) e Funções  
> **Continuidade:** Base para a versão recursiva em [Aula 11: Fatorial Recursivo](../13-recursive-factorial)

---

## 🎯 Enunciado do Problema

Neste exercício, criei um programa que lê um número inteiro e calcula o seu fatorial, exibindo o passo a passo da multiplicação no terminal (como `5 x 4 x 3 x 2 x 1 = 120`). Montei um submenu interativo para comparar quatro abordagens práticas: `do...while`, `while`, `for` e uma função modular com passagem de parâmetro por valor.

---

## 💻 Código-Fonte

O código completo está em [factorial_calculator.c](factorial_calculator.c).

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
4 - Calculate Factorial using Modular Function
5 - Exit
================================================================

Choice (1-5): 3

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

- **Como Funciona o Fatorial:** O fatorial multiplica o número escolhido por todos os inteiros positivos menores que ele até 1 (por exemplo, `5! = 5 x 4 x 3 x 2 x 1 = 120`). Por definição matemática, o fatorial de 0 e o de 1 valem `1`.
- **Variável Acumuladora Começando em 1:** Começa com `factorial_number = 1` e multiplica os fatores a cada volta da repetição (`factorial_number *= temporary_number`).
- **Impressão do Sinal x ou =:** Diferencia os fatores multiplicativos intermediários do encerramento da conta por meio de saída condicional (`if (temporary_number > 1) printf("x "); else printf("= ");`).
- **Comparação entre Estruturas de Repetição (`while`, `do...while` e `for`):** O comando `while` testa a condição antes de iniciar o bloco, o `do...while` executa ao menos uma vez antes do teste e o `for` reúne inicialização, condição e decremento no mesmo cabeçalho (`for (temporary_number = selected_number; temporary_number >= 1; temporary_number--)`), sendo a escolha ideal quando sabemos o número de iterações.
- **Separação em Função:** Isola o cálculo em uma função auxiliar (`calculate_factorial_modular`) que recebe `selected_number` por valor, mantendo o escopo de variáveis limpo.
- **Entrada Formatada (`scanf`):** Captura números inteiros com `scanf("%i")`, que ignora espaços e quebras de linha anteriores de forma nativa.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator
```
