<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Introduction to the C Programming Language | Fatec & ARInter

  ### **Coursework, Systems Programming, and Memory Management in Standard C**

  [![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](https://en.cppreference.com/w/c)
  [![GCC](https://img.shields.io/badge/GCC-00599C?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
  [![Clang](https://img.shields.io/badge/Clang-000000?style=for-the-badge&logo=llvm&logoColor=white)](https://clang.llvm.org/)
  [![ARInter - CPS](https://img.shields.io/badge/ARInter-CPS-003366?style=for-the-badge)](https://arinter.cps.sp.gov.br/)
  [![Fatec Taubaté](https://img.shields.io/badge/Fatec-Taubaté-B22222?style=for-the-badge)](https://fatectaubate.edu.br/)

</div>

---

## 🎯 About the Course

Practical coursework and laboratory exercises for the **Introduction to the C Programming Language** course, an internationalization program offered by the **International Relations Office (ARInter - CEETEPS)** in partnership with **Fatec Taubaté**.

- **Medium of Instruction:** 100% English (synchronous lectures and collaboration with international exchange peers).
- **Workload:** 40 hours total (20 weekly synchronous sessions).
- **Objective:** Solve real-world engineering problems through programming logic and high-performance system programming in standard C.

### Core Focus Areas
- **Memory & Hardware Fundamentals:** Data representation, byte sizing (`sizeof`), memory addresses, and pointer arithmetic.
- **Structured Logic:** Program architecture using standard libraries (`stdio.h`, `stdlib.h`, `string.h`), control flow, and modular functions.
- **Data Modeling & Storage:** User-defined types (`struct`, `typedef`) and persistent file handling.

---

## 🗺️ Course Roadmap & Syllabus

| Class | Topic | Status |
| :---: | :--- | :---: |
| 01 | Introduction to Programming in C & Compilation Pipeline | ✅ Done |
| 02 | Variable & Constant Declarations, Primitive Types, and Formatted I/O | ✅ Done |
| 03 | Decision Structures: Part 1 (`if`, `else`, numeric truth, operators) | ✅ Done |
| 04 | Decision Structures: Part 2 (`else if`, nested conditionals, discount menu) | ✅ Done |
| 05 | Decision Structures: Part 3 (`switch`, fallthrough, consolidated menu) | ✅ Done |
| 06 | Repetition Structures: Part 1 (`do-while`, `while`, repetition exercises) | ✅ Done |
| 07 | Repetition Structures: Part 2 (`for` loop, arrays, bubble sort) | ✅ Done |
| 08 | Practical Assignment 1 | ⏳ Upcoming |
| 09 | Arrays and Vectors | ⏳ Upcoming |
| 10 | String Manipulation | ⏳ Upcoming |
| 11 | Matrices and 2D Arrays | ⏳ Upcoming |
| 12 | Pointers: Part 1 (Addresses, Dereferencing) | ⏳ Upcoming |
| 13 | Pointers: Part 2 (Pointers with Arrays & Functions) | ⏳ Upcoming |
| 14 | Functions & Modular Programming | ⏳ Upcoming |
| 15 | Recursion | ⏳ Upcoming |
| 16 | User-Defined Types (`struct`, `typedef`) | ⏳ Upcoming |
| 17 | File Manipulation & Streams | ⏳ Upcoming |
| 18 | Practical Assignment 2 | ⏳ Upcoming |
| 19 | Review & Coursework Assessment | ⏳ Upcoming |
| 20 | Final Review & Feedback | ⏳ Upcoming |

---

## 📝 Exercises Index

| # | Exercise | Code & Documentation | Core Concepts |
| :-: | :--- | :--- | :--- |
| 00 | **Consolidated Menu - Coursework Exercises** | [`src/00-consolidated-menu/`](src/00-consolidated-menu/) | Interactive console menu uniting all laboratory exercises across the semester into a single program with `do...while` navigation. |
| 01 | **Basic Types, I/O & Memory Sizing** | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) | Primitive types (`char`, `int`, `float`, `long`, `double`), `sizeof()` operator, `%zu`, formatted `printf()` and `scanf()`. |
| 02 | **Even or Odd Checker** | [`src/02-even-or-odd/`](src/02-even-or-odd/) | Modulo operator (`%`), mutual exclusivity (`if/else`), `scanf(" %c")` buffer handling, interactive `do...while` loop. |
| 03 | **Academic Grade Evaluator** | [`src/03-grade-evaluator/`](src/03-grade-evaluator/) | Arithmetic mean calculation, variable reuse, nested conditionals (`if` inside `else`), retake exam routing (`retakeExam`). |
| 04 | **One Item Shop - Discount Selector** | [`src/04-one-item-shop/`](src/04-one-item-shop/) | `else if` conditional ladder, case-insensitive character comparison (`'a' \|\| 'A'`), escaped literal percentages (`%%`), structured flow without premature `return`. |
| 05 | **Dessert Shop - Switch & Fallthrough** | [`src/05-dessert-shop/`](src/05-dessert-shop/) | Multi-branching `switch/case`, `break` flow control, deliberate fallthrough for additive option pricing, `default` fallback. |
| 06 | **Factorial Calculator** | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) | Factorial product accumulator ($n!$), formatted multiplication expansion (`5 x 4 x 3 x 2 x 1 = 120`), comparative `while`, `do...while` and `for` sub-menu. |
| 07 | **Fibonacci Sequence** | [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) | Sliding window recurrence ($F_n = F_{n-1} + F_{n-2}$), pairwise addition breakdown, value limit vs. term count, defensive input validation loop (`limit > 0`), `do...while`, `while` and `for` versions. |
| 08 | **Reverse Characters** | [`src/08-reverse-characters/`](src/08-reverse-characters/) | Arrays with runtime size (VLA), zero-based index, `for` loops in both directions, `scanf(" %c")` buffer handling. |
| 09 | **Lowest and Highest Numbers** | [`src/09-lowest-highest-numbers/`](src/09-lowest-highest-numbers/) | Integer array with bounded input (up to 30), bubble sort on a copy of the array, lowest and highest value scan, nested `for` loops. |

---

## 📂 Project Structure

```text
.
├── src/
│   ├── 00-consolidated-menu/
│   │   ├── consolidated_menu.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 01-primitive-types-and-io/
│   │   ├── primitive_types_and_io.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 02-even-or-odd/
│   │   ├── even_or_odd.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 03-grade-evaluator/
│   │   ├── grade_evaluator.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 04-one-item-shop/
│   │   ├── one_item_shop.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 05-dessert-shop/
│   │   ├── dessert_shop.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 06-factorial-calculator/
│   │   ├── factorial_calculator.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 07-fibonacci-sequence/
│   │   ├── fibonacci_sequence.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 08-reverse-characters/
│   │   ├── reverse_characters.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   └── 09-lowest-highest-numbers/
│       ├── lowest_highest_numbers.c
│       ├── README.md
│       └── README.pt-BR.md
│
├── .gitignore
├── README.md           # English documentation
└── README.pt-BR.md     # Portuguese documentation
```

---

## 🚀 How to Run

### Prerequisites
- Standard C Compiler installed: [GCC](https://gcc.gnu.org/) or [Clang](https://clang.llvm.org/) (macOS default).

### Compiling and Running Exercises
Compile and execute directly from the project root:

```bash
# Consolidated Exercises Menu
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu

# Exercise 1: Basic Types, I/O & Memory Sizing
mkdir -p dist && clang -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io

# Exercise 2: Even or Odd Checker
mkdir -p dist && clang -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd

# Exercise 3: Academic Grade Evaluator
mkdir -p dist && clang -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator

# Exercise 4: One Item Shop - Discount Selector
mkdir -p dist && clang -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop

# Exercise 5: Dessert Shop - Switch & Fallthrough
mkdir -p dist && clang -Wall -O2 src/05-dessert-shop/dessert_shop.c -o dist/dessert_shop && ./dist/dessert_shop

# Exercise 6: Factorial Calculator
mkdir -p dist && clang -Wall -O2 src/06-factorial-calculator/factorial_calculator.c -o dist/factorial_calculator && ./dist/factorial_calculator

# Exercise 7: Fibonacci Sequence
mkdir -p dist && clang -Wall -O2 src/07-fibonacci-sequence/fibonacci_sequence.c -o dist/fibonacci_sequence && ./dist/fibonacci_sequence

# Exercise 8: Reverse Characters
mkdir -p dist && clang -Wall -O2 src/08-reverse-characters/reverse_characters.c -o dist/reverse_characters && ./dist/reverse_characters

# Exercise 9: Lowest and Highest Numbers
mkdir -p dist && clang -Wall -O2 src/09-lowest-highest-numbers/lowest_highest_numbers.c -o dist/lowest_highest_numbers && ./dist/lowest_highest_numbers
```

---

## 📚 Bibliography

- **KERNIGHAN, Brian W.; RITCHIE, Dennis M.** *The C Programming Language: ANSI C Version*. 2nd ed. Prentice Hall, 1988.
- **GRAHAN, Darrel L.** *C Programming Language: A Step by Step Beginner's Guide to Learn C Programming in 7 Days*. Createspace, 2016.

---

<div align="center">
  Developed by <b><a href="https://github.com/lucasresendev">Lucas Resende</a></b> 🚀
</div>