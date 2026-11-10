<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Fibonacci Sequence (`fibonacci_sequence.c`)

</div>

> **Origin:** Class 06 (do-while & while) & Class 08 (for)  
> **Topic:** Fibonacci Sequence with Loops (do-while, while, for) and Input Validation  
> **Lineage:** Base for the recursive version in [Class 11: Recursive Fibonacci](../14-recursive-fibonacci)

---

## 🎯 Problem Statement

In this exercise, I generated the Fibonacci sequence and displayed each arithmetic addition pair (`1 + 1 = 2`, `1 + 2 = 3`, `2 + 3 = 5`, and so on). I built an interactive comparative submenu demonstrating the three loop structures (`do...while`, `while`, and `for`) across two approaches we explored in class:

1. **Value Ceiling Limit:** The sequence and sum operations terminate when values exceed a numeric threshold (`next <= limit`).
2. **Term Count Limit:** The user specifies the exact number of terms to generate. Input validation enforces `limit > 0`, generating the requested sequence numbers and their pairwise additions. This version is available with `do...while`, `while`, and `for`.

---

## 💻 Source Code

The full implementation is available in [fibonacci_sequence.c](fibonacci_sequence.c).

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

- **How the Sequence Works:** In the Fibonacci sequence, the first two numbers are `1` and `1`, and each subsequent number is the sum of the two preceding numbers.
- **Updating Variables Inside the Loop:** Uses three variables `current`, `next`, and `sum` to advance through the sequence without needing an array: `sum = current + next`, `current = next`, `next = sum`.
- **Input Validation Loop:** Guards against non-positive inputs using defensive re-prompting (`while (limit <= 0)`, `do...while (limit <= 0)`, or `for (; limit <= 0;)`).
- **`for` Loop with Optional Components:** The `for` validation leaves out initialization since counters are set earlier, functioning like a `while`, while term generation uses `for (; loop < limit; loop++)`.
- **Refinement from Ceiling Value to Term Count:** Reflects our progression in class from stopping when values exceed a ceiling (`next <= limit`) to generating an exact count of items (`loop < limit`).
- **Pairwise Sum Decomposition:** Shows the arithmetic operations that produce each subsequent term when more than two terms are requested.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/07-fibonacci-sequence/fibonacci_sequence.c -o dist/fibonacci_sequence && ./dist/fibonacci_sequence

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/07-fibonacci-sequence/fibonacci_sequence.c -o dist/fibonacci_sequence && ./dist/fibonacci_sequence
```
