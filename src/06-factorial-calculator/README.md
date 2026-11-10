<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Factorial Calculator (`factorial_calculator.c`)

</div>

> **Origin:** Class 06 (do-while & while), Class 08 (for), Class 10 (modular function)  
> **Topic:** Repetition Loops (do-while, while, for) and Functions  
> **Lineage:** Base for the recursive version in [Class 11: Recursive Factorial](../13-recursive-factorial)

---

## 🎯 Problem Statement

In this exercise, I wrote a program that reads an integer from the user and calculates its factorial, displaying the full step-by-step multiplication chain (such as `5 x 4 x 3 x 2 x 1 = 120`). I created an interactive submenu so I could run and compare four different approaches: `do...while`, `while`, `for`, and a separate modular function with parameter passing.

---

## 💻 Source Code

The full implementation is available in [factorial_calculator.c](factorial_calculator.c).

---

## 🖥️ Terminal Output

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

## 💡 Key Concepts Applied

- **How Factorial Works:** The factorial of a number multiplies that number by every positive integer below it down to 1 (for example, `5! = 5 x 4 x 3 x 2 x 1 = 120`). By mathematical definition, the factorial of 0 and 1 is always `1`.
- **Accumulator Variable Starting at 1:** Initializes `factorial_number = 1` and iteratively multiplies each factor (`factorial_number *= temporary_number`).
- **Printing x or = Inside the Loop:** Distinguishes interior multiplication factors from the final reduction using conditional output (`if (temporary_number > 1) printf("x "); else printf("= ");`).
- **Comparing Loop Structures (`while`, `do...while`, and `for`):** Demonstrates how loop design affects execution. A `while` loop checks the condition before running, `do...while` runs at least once before testing, and `for` groups initialization, condition, and decrement together (`for (temporary_number = selected_number; temporary_number >= 1; temporary_number--)`), making it ideal when the number of iterations is known in advance.
- **Moving the Calculation into a Function:** Isolates the calculation into a dedicated function (`calculate_factorial_modular`) that receives `selected_number` by value, establishing clean parameter scope.
- **Formatted Input (`scanf`):** Captures integer choices directly with `scanf("%i")`, which automatically skips leading whitespace and newline characters.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator
```
