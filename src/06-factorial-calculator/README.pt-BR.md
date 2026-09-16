<div align="center">

  🇬🇧 **[English Version](README.md)**
  <br>

  # ⚙️ Calculador de Fatorial (`factorial_calculator.c`)

</div>

---

## 🎯 Enunciado do Problema

Ler um número inteiro informado pelo usuário e calcular o seu fatorial ($n!$), exibindo dinamicamente o desenvolvimento da cadeia de multiplicações intermediárias (ex.: `5 x 4 x 3 x 2 x 1 = 120`). O programa dispõe de um submenu interativo comparativo para que o usuário execute e compare as implementações com `do...while` e `while`.

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
3 - Exit
================================================================

Choice (1-3): 1

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
3 - Exit
================================================================

Choice (1-3): 2

================================================================
               Factorial Calculation (while)
================================================================

Insert a number to calculate its factorial: 4
For the number 4, the factorial is: 4 x 3 x 2 x 1 = 24

================================================================


================================================================
                  Factorial Calculator
================================================================
1 - Calculate Factorial using do...while
2 - Calculate Factorial using while
3 - Exit
================================================================

Choice (1-3): 3

================================================================
                   Exiting program. Goodbye!
================================================================
```

---

## 💡 Principais Conceitos Aplicados

- **Modelo Matemático do Fatorial:** Definido para inteiros não negativos como $n! = \prod_{k=1}^n k$, com a identidade $0! = 1$.
- **Padrão Acumulador Multiplicativo:** Inicialização em `factorial_number = 1` e escala sucessiva dos fatores por atribuição composta (`factorial_number *= temporary_number`).
- **Formatação Dinâmica de Expressões:** Diferenciação entre os fatores multiplicativos intermediários e o encerramento do cálculo com saída condicional (`if (temporary_number > 1) printf("x "); else printf("= ");`).
- **Comparação de Laços (`while` vs. `do...while`):** Análise de como o momento da validação condicional afeta o comportamento do programa diante de valores de fronteira.
- **Higiene do Buffer de Entrada:** Uso de `scanf(" %i")` com espaço à esquerda para descartar quebras de linha pendentes em `stdin`.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator
```
