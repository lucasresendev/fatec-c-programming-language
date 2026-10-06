<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Factorial Calculator (`factorial_calculator.c`)

</div>

---

## 🎯 Problem Statement

Read an integer provided by the user and calculate its factorial ($n!$) while dynamically displaying the step-by-step arithmetic multiplication chain (e.g. `5 x 4 x 3 x 2 x 1 = 120`). In my solution, the program has an interactive submenu so I can run and compare the `do...while`, `while` and `for` implementations.

---

## 💻 Source Code

The implementation is available directly in [`factorial_calculator.c`](factorial_calculator.c).

---

## 🖥️ Terminal Output

```text
================================================================
                  Factorial Calculator
================================================================
1 - Calculate Factorial using do...while
2 - Calculate Factorial using while
3 - Calculate Factorial using for
4 - Exit
================================================================

Choice (1-4): 1

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
4 - Exit
================================================================

Choice (1-4): 4

================================================================
                   Exiting program. Goodbye!
================================================================
```

---

## 💡 Key Concepts Applied

- **Factorial Mathematical Model:** Defined for non-negative integers as $n! = \prod_{k=1}^n k$, with the mathematical identity $0! = 1$.
- **Multiplicative Accumulator Pattern:** Initializes `factorial_number = 1` and iteratively scales the product via compound assignment (`factorial_number *= temporary_number`).
- **Dynamic Expression Formatting:** Distinguishes interior multiplication factors from the final reduction using conditional inline output (`if (temporary_number > 1) printf("x "); else printf("= ");`).
- **Loop Comparison (`while`, `do...while` and `for`):** Demonstrates how loop design impacts edge cases. A `while` loop checks the condition before the first iteration, `do...while` executes unconditionally at least once, and `for` groups initialization, condition and decrement in a single header (`for (temporary_number = selected_number; temporary_number >= 1; temporary_number--)`), which is the best fit when the number of repetitions is known.
- **Buffer Hygiene & Reusability:** Uses `scanf(" %i")` with a leading whitespace to discard leftover newline characters.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator
```
