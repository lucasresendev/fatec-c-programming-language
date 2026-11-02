<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Consolidated Menu - Coursework Exercises (`consolidated_menu.c`)

</div>

---

## 🎯 Problem Statement

Unify all practical exercises developed throughout the semester into an interactive console menu (`00-consolidated-menu`). The program executes continuously inside a `do...while` repetition loop, dispatching to each specific problem routine and returning to the main menu until the user explicitly enters Option 19 to terminate.

The menu includes 18 integrated exercises:
1. **Even or Odd Checker**
2. **Academic Grade Evaluator** (with Retake Exam)
3. **One Item Shop** (Tiered Discount Ladder)
4. **Dessert Shop** (Switch & Fallthrough Pricing)
5. **Factorial Calculator** (`do...while`)
6. **Factorial Calculator** (`while`)
7. **Factorial Calculator** (`for`)
8. **Fibonacci Sequence** (`do...while` with input validation)
9. **Fibonacci Sequence** (`while` with input validation)
10. **Fibonacci Sequence** (`for` with input validation)
11. **Reverse Characters** (array traversed backwards)
12. **Lowest and Highest Numbers** (array with bubble sort)
13. **String Manipulation** (`string.h`, manual copy, comparison, concatenation)
14. **Matrix Addition** (2D arrays with element-by-element sum)
15. **Square Root Calculator** (`<math.h>`, array storage and batch reporting)
16. **Recursive Factorial** (tail-recursive accumulator with expansion)
17. **Recursive Fibonacci** (sequence terms and arithmetic additions)
18. **Academic Management System** (`struct` and `typedef` records)
19. **Exit**

---

## 💻 Source Code

The implementation is available directly in [`consolidated_menu.c`](consolidated_menu.c).

---

## 🖥️ Terminal Output

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
19 - Exit
================================================================

Choice (1-19): 7

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
19 - Exit
================================================================

Choice (1-19): 19

================================================================
                   Exiting program. Goodbye!
================================================================
```

---

## 💡 Key Concepts Applied

- **Consolidated Exercises Menu (`00`):** Acts as the primary consolidated entry point for the repository, continually updated as new programming assignments and algorithmic challenges are completed.
- **Continuous Execution via `do...while`:** Guarantees that the main menu renders at least once and keeps running until the sentinel condition `exercise_choice != 19` evaluates to false.
- **Top-Level Declarations:** The scalar variables across all problem domains are declared at the beginning of `main(void)`, demonstrating classic structured C scoping. The array and matrix exercises declare their dynamic collections inside their own branches, since their dimensions depend on user input.
- **Input Buffer Handling:** While numeric and string format specifiers (`%i`, `%f`, `%s`) discard whitespace and newlines automatically, single character inputs use `scanf(" %c")` with an intentional leading space to prevent capturing leftover newline (`\n`) bytes.
- **Consistent UI Framing:** Standardized 64-character `=` divider bars keep the same look across all sub-modules.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu
```
