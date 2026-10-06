<div align="center">

  🇬🇧 **[English Version](README.md)**
  <br>

  # ⚙️ Sequência de Fibonacci (`fibonacci_sequence.c`)

</div>

---

## 🎯 Enunciado do Problema

Gerar a sequência de Fibonacci e detalhar os pares de adição aritmética que formam cada novo termo ($1 + 1 = 2$, $1 + 2 = 3$, $2 + 3 = 5$, etc.). Na minha solução, o programa tem um submenu comparativo demonstrando as três estruturas de repetição (`do...while`, `while` e `for`) nas duas abordagens exploradas em aula:

1. **Limite por Teto Numérico:** A sequência e as somas são interrompidas assim que os valores ultrapassam um teto especificado (`next <= limit`).
2. **Limite por Quantidade de Termos (Corrigido):** O usuário especifica a quantidade exata de termos a serem gerados. A validação de entrada assegura `limit > 0`, exibindo $N$ números da série e suas somas correspondentes. Essa abordagem está disponível com `do...while`, `while` e `for`.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`fibonacci_sequence.c`](fibonacci_sequence.c).

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

- **Relação de Recorrência de Fibonacci:** Definida como $F_1 = 1, F_2 = 1$ e $F_n = F_{n-1} + F_{n-2}$ para $n \ge 3$.
- **Transição de Estados com Janela Deslizante:** Atualização progressiva das variáveis na memória sem necessidade de alocação de vetores:
  ```c
  sum = current + next;
  current = next;
  next = sum;
  ```
- **Repetição de Validação de Entrada:** Tratamento defensivo contra números não positivos através de repetição orientada (`while (limit <= 0)`, `do...while (limit <= 0)` ou `for (; limit <= 0;)`).
- **`for` com Partes Opcionais:** Na versão com `for`, a inicialização fica de fora (os contadores são definidos antes) e a validação funciona como um `while`, enquanto a geração dos termos usa `for (; loop < limit; loop++)`.
- **Evolução Algorítmica (Limite por Valor vs. Quantidade de Termos):** Reflete a correção pós-aula onde o critério de parada migrou da verificação do valor (`next <= limit`) para a contagem exata de termos exibidos (`loop < limit`).
- **Decomposição das Somas:** Demonstração didática das operações matemáticas individuais que originam os termos subsequentes quando $N > 2$.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/07-fibonacci-sequence/fibonacci_sequence.c -o dist/fibonacci_sequence && ./dist/fibonacci_sequence

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/07-fibonacci-sequence/fibonacci_sequence.c -o dist/fibonacci_sequence && ./dist/fibonacci_sequence
```
