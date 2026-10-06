<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Fibonacci Sequence (`fibonacci_sequence.c`)

</div>

---

## 🎯 Problem Statement

Generate the Fibonacci sequence and display the step-by-step arithmetic addition pairs ($1 + 1 = 2$, $1 + 2 = 3$, $2 + 3 = 5$, etc.). In my solution, the program has an interactive comparative submenu demonstrating the three loop structures (`do...while`, `while` and `for`) across two problem formulations explored in class:

1. **Value Ceiling Limit:** The sequence and sum operations terminate when values exceed a numeric threshold (`next <= limit`).
2. **Term Count Limit (Corrected):** The user specifies the exact quantity of terms to generate. Input validation enforces `limit > 0`, generating $N$ sequence numbers and the corresponding pairwise additions. This formulation is available with `do...while`, `while` and `for`.

---

## 💻 Source Code

The implementation is available directly in [`fibonacci_sequence.c`](fibonacci_sequence.c).

---

## 🖥️ Terminal Output

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

## 💡 Key Concepts Applied

- **Fibonacci Recurrence Relation:** Defined as $F_1 = 1, F_2 = 1$ and $F_n = F_{n-1} + F_{n-2}$ for $n \ge 3$.
- **Sliding Window State Transition:** Updates the state sequentially without requiring vector allocation in memory:
  ```c
  sum = current + next;
  current = next;
  next = sum;
  ```
- **Input Validation Loop:** Guards against non-positive inputs using defensive re-prompting (`while (limit <= 0)`, `do...while (limit <= 0)` or `for (; limit <= 0;)`).
- **`for` With Optional Parts:** The `for` version leaves out the initialization (the counters are set before) and works as a `while` for the validation, while the term generation uses `for (; loop < limit; loop++)`.
- **Algorithmic Refinement (Value Ceiling vs. Term Count):** Reflects the classroom evolution from stopping when values exceed a ceiling (`next <= limit`) to generating a precise count of items (`loop < limit`).
- **Pairwise Sums Decomposition:** Displays the arithmetic operations that produce each subsequent term when $N > 2$.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/07-fibonacci-sequence/fibonacci_sequence.c -o dist/fibonacci_sequence && ./dist/fibonacci_sequence

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/07-fibonacci-sequence/fibonacci_sequence.c -o dist/fibonacci_sequence && ./dist/fibonacci_sequence
```
