<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Consolidated Menu: Coursework Exercises (`consolidated_menu.c`)

</div>

> **Origin:** Classes 05 to 14 (Consolidated Coursework Collection)  
> **Topic:** Interactive Menu with switch/case, do...while Loop, and Functions  
> **Lineage:** Started in Class 05, put inside a loop in Class 06, and updated through Class 14

---

## 🎯 Problem Statement

In this project, I brought together all the practical exercises and the final assessment I developed during the semester into a single interactive console menu (`00-consolidated-menu`). The program runs continuously inside a `do...while` loop, jumping to each specific exercise routine and returning to the main menu until option 20 is selected to exit.

The menu includes 19 integrated exercises:
1. **Even or Odd Checker**
2. **Academic Grade Evaluator** (with Retake Exam)
3. **One Item Shop** (Discount Table)
4. **Dessert Shop** (Switch and Fallthrough Pricing)
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
15. **Square Root Calculator** (`<math.h>`, array storage, and batch reporting)
16. **Recursive Factorial** (recursive function printing each multiplication)
17. **Recursive Fibonacci** (sequence terms and step-by-step sums)
18. **Academic Management System** (`struct`, `typedef`, report generation, and multi-file persistence)
19. **CPF Validator** (Final Assessment: check-digit calculation and pointer pass-by-reference)
20. **Exit**

---

## 💻 Source Code

The full implementation is available in [consolidated_menu.c](consolidated_menu.c).

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
19 - CPF Validator (Final Assessment)
20 - Exit
================================================================

Choice (1-20): 7

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
19 - CPF Validator (Final Assessment)
20 - Exit
================================================================

Choice (1-20): 20

================================================================
                   Exiting program. Goodbye!
================================================================
```

---

## 💡 Key Concepts Applied

- **Centralized Menu Structure:** I built this program as an interactive entry point for my coursework, updating it continuously as we completed new programming exercises in class.
- **Continuous Loop with `do...while`:** The `do...while` loop ensures the menu displays at least once and keeps running until the condition `exercise_choice != 20` becomes false (0).
- **Variable Declarations and Scoping:** I declared separate variables at the start of `main(void)` for clear structured organization. For exercises that use arrays or matrices sized by the user, I declared those collections inside their specific switch blocks.
- **Input Buffer Cleaning:** While numeric format specifiers (`%i`, `%f`) skip whitespace and newlines, reading a single character with `scanf(" %c")` requires a leading space so it does not capture leftover newline characters from the keyboard.
- **Visual Presentation:** I formatted every screen with 64-character `=` divider lines to keep the terminal layout neat and consistent across all options.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -lm -o dist/consolidated_menu && ./dist/consolidated_menu

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -lm -o dist/consolidated_menu && ./dist/consolidated_menu
```
