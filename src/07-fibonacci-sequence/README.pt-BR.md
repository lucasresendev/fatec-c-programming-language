<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Sequência de Fibonacci (`fibonacci_sequence.c`)

</div>

> **Origem:** Aula 06 (do-while e while) e Aula 08 (for)  
> **Tópico:** Sequência de Fibonacci com Loops (do-while, while, for) e Validação de Entrada  
> **Continuidade:** Base para a versão recursiva em [Aula 11: Fibonacci Recursivo](../14-recursive-fibonacci)

---

## 🎯 Enunciado do Problema

Neste exercício, gerei a sequência de Fibonacci e mostrei as somas que formam cada novo termo (`1 + 1 = 2`, `1 + 2 = 3`, `2 + 3 = 5`, e assim por diante). Montei um submenu comparativo para demonstrar as três estruturas de repetição (`do...while`, `while` e `for`) em duas abordagens que exploramos em aula:

1. **Limite por Teto Numérico:** A sequência e as somas continuam até que o próximo número ultrapasse o teto informado (`next <= limit`).
2. **Limite por Quantidade de Termos:** O usuário digita exatamente quantos termos deseja ver. Uma validação garante que `limit > 0`, gerando a quantidade de números pedida e detalhando suas somas. Essa opção está implementada com `do...while`, `while` e `for`.

---

## 💻 Código-Fonte

O código completo está em [fibonacci_sequence.c](fibonacci_sequence.c).

---

## 🖥️ Saída no Terminal

```text
================================================================
                 Fibonacci Sequence
================================================================
1 - do...while with Value Limit (Stops when number exceeds limit)
2 - while with Value Limit (Stops when number exceeds limit)
3 - do...while with Term Count Limit (Generates N terms, validated > 0)
4 - while with Term Count Limit (Generates N terms, validated > 0)
5 - for with Term Count Limit (Generates N terms, validated > 0)
6 - Exit
================================================================

Choice (1-6): 3

================================================================
          Fibonacci (do...while - Term Count Limit)
================================================================

Insert a limit number greater than 0 for the fibonacci sequence: 6

Sequence:
1 1 2 3 5 8 

Sums:
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8


================================================================


================================================================
                 Fibonacci Sequence
================================================================
1 - do...while with Value Limit (Stops when number exceeds limit)
2 - while with Value Limit (Stops when number exceeds limit)
3 - do...while with Term Count Limit (Generates N terms, validated > 0)
4 - while with Term Count Limit (Generates N terms, validated > 0)
5 - for with Term Count Limit (Generates N terms, validated > 0)
6 - Exit
================================================================

Choice (1-6): 4

================================================================
            Fibonacci (while - Term Count Limit)
================================================================

Insert a limit number greater than 0 for the fibonacci sequence: -2
You didn't input a valid number! Please, insert again: 5

Sequence:
1 1 2 3 5 

Sums:
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5


================================================================


================================================================
                 Fibonacci Sequence
================================================================
1 - do...while with Value Limit (Stops when number exceeds limit)
2 - while with Value Limit (Stops when number exceeds limit)
3 - do...while with Term Count Limit (Generates N terms, validated > 0)
4 - while with Term Count Limit (Generates N terms, validated > 0)
5 - for with Term Count Limit (Generates N terms, validated > 0)
6 - Exit
================================================================

Choice (1-6): 6

================================================================
                   Exiting program. Goodbye!
================================================================
```

---

## 💡 Principais Conceitos Aplicados

- **Como a Sequência Funciona:** Na sequência de Fibonacci, os dois primeiros números são `1` e `1`, e cada próximo número é a soma dos dois anteriores.
- **Atualização das Variáveis no Loop:** Usa três variáveis `current`, `next` e `sum` para avançar na sequência sem precisar de vetor: `sum = current + next`, `current = next`, `next = sum`.
- **Repetição para Validação de Entrada:** Tratamento defensivo contra entradas inválidas ou menores que um através de repetição (`while (limit <= 0)`, `do...while (limit <= 0)` ou `for (; limit <= 0;)`).
- **`for` com Partes Opcionais:** Na validação com `for`, a inicialização é omitida porque as variáveis já foram inicializadas antes, funcionando como um `while`, enquanto a geração dos termos usa `for (; loop < limit; loop++)`.
- **Evolução de Teto Numérico para Quantidade de Termos:** Demonstra a transição pedagógica da verificação pelo valor do próximo termo (`next <= limit`) para a contagem exata de termos pedidos pelo usuário (`loop < limit`).
- **Decomposição das Somas:** Exibição clara das operações aritméticas individuais que produzem os termos seguintes quando mais de dois termos são solicitados.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/07-fibonacci-sequence/fibonacci_sequence.c -o dist/fibonacci_sequence && ./dist/fibonacci_sequence

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/07-fibonacci-sequence/fibonacci_sequence.c -o dist/fibonacci_sequence && ./dist/fibonacci_sequence
```
