<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Consolidated Menu - Coursework Exercises (`consolidated_menu.c`)

</div>

---

## 🎯 Problem Statement

Unify all practical exercises developed throughout the semester into an interactive console menu (`00-consolidated-menu`). The program executes continuously inside a `do...while` repetition loop, dispatching to each specific problem routine and returning to the main menu until the user explicitly enters Option 13 to terminate.

The menu includes 12 integrated exercises:
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
13. **Exit**

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
13 - Exit
================================================================

Choice (1-13): 7

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
13 - Exit
================================================================

Choice (1-13): 13

================================================================
                   Exiting program. Goodbye!
================================================================
```

---

## 💡 Key Concepts Applied

- **Consolidated Exercises Menu (`00`):** Acts as the primary consolidated entry point for the repository, continually updated as new programming assignments and algorithmic challenges are completed.
- **Continuous Execution via `do...while`:** Guarantees that the main menu renders at least once and keeps running until the sentinel condition `exercise_choice != 13` evaluates to false.
- **Top-Level Declarations:** The scalar variables across all problem domains are declared at the beginning of `main(void)`, demonstrating classic structured C scoping. The two array exercises declare their arrays inside their own branches, since the size depends on what the user types.
- **Input Buffer Hygiene:** Prepending a leading space in format strings (`scanf(" %i")`, `scanf(" %c")`) cleans lingering newlines and whitespace characters from `stdin`.
- **Consistent UI Framing:** Standardized 64-character `=` divider bars keep the same look across all sub-modules.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu
```
