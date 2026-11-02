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
- **Institution & Notice:** ARInter - CEETEPS / Fatec Taubaté via **EDITAL ARI nº 027/2026**.
- **Instructor:** Luciano Gonçalves de Carvalho (`luciano.carvalho@cps.sp.gov.br`).
- **Workload:** 40 hours total (15 synchronous weekly sessions of 2 h/a = 30h live on MS Teams, Tuesdays 17:00-18:40 + 10h asynchronous practical activities).
- **Official Schedule Documents:** Course Schedule (`IntroductionC.pdf` - executive calendar of 15 live sessions) alongside EDITAL ARI nº 027/2026 (preliminary curricular proposal).
- **Passing Criteria:** Attendance $\ge$ 70% and Final Grade $\ge$ 6.0.

### Core Focus Areas
- **Memory & Hardware Fundamentals:** Data representation, byte sizing (`sizeof`), memory addresses, and pointer arithmetic.
- **Structured Logic:** Program architecture using standard libraries (`stdio.h`, `stdlib.h`, `string.h`), control flow, and modular functions.
- **Data Modeling & Storage:** User-defined types (`struct`, `typedef`) and persistent file handling.

---

## 🗺️ Course Roadmap & Official 15-Class Schedule

> [!NOTE] Real Calendar Adjustment (September 22, 2026)
> The preliminary schedule projected Class 07 on 22/09/2026. Due to the instructor's participation in an institutional Centro Paula Souza (CPS) event, **no lecture took place on 22/09**. Class 07 was held on 29/09, shifting subsequent sessions by one week and establishing the 15th session for 24/11/2026.

| Class | Date | Topic | Status |
| :---: | :---: | :--- | :---: |
| 01 | 11/08/26 | Introduction to Programming in C & Compilation Pipeline | ✅ Done |
| 02 | 18/08/26 | Variable & Constant Declarations, Primitive Types, and Formatted I/O | ✅ Done |
| 03 | 25/08/26 | Decision Structures: Part 1 (`if`, `else`, numeric truth, operators) | ✅ Done |
| 04 | 01/09/26 | Decision Structures: Part 2 (`else if`, nested conditionals, discount menu) | ✅ Done |
| 05 | 08/09/26 | Decision Structures: Part 3 (`switch`, fallthrough, consolidated menu) | ✅ Done |
| 06 | 15/09/26 | Repetition Structures: Part 1 (`do-while`, `while`, repetition exercises) | ✅ Done |
| - | 22/09/26 | *Suspension: Instructor attending institutional CPS event* | ⏸️ No class |
| 07 | 29/09/26 | Repetition Structures: Part 2 (`for` loop, arrays, bubble sort) | ✅ Done |
| 08 | 06/10/26 | Strings, string.h Library & Matrices (2D Arrays) | ✅ Done |
| 09 | 13/10/26 | Functions, Modular Programming & `<math.h>` | ✅ Done |
| 10 | 20/10/26 | Recursion & Call Stack | ✅ Done |
| 11 | 27/10/26 | User-Defined Types (`struct`, `typedef`) | ✅ Done |
| 12 | 03/11/26 | Pointers: Part 1 (Concepts, Addressing and Operators `&` and `*`) | ⏳ Upcoming |
| 13 | 10/11/26 | Pointers: Part 2 (Pointer Arithmetic, Arrays and Strings) | ⏳ Upcoming |
| 14 | 17/11/26 | Dynamic Memory Allocation (`malloc`, `free`) & File Streams | ⏳ Upcoming |
| 15 | 24/11/26 | Final Practical Assessment & Course Wrap-up (CPS Makeup Session) | ⏳ Upcoming |

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
| 10 | **String Manipulation** | [`src/10-string-manipulation/`](src/10-string-manipulation/) | String arrays, `\0` null terminator, manual copy loop, `strcpy()`, `strcmp()` comparison, `strcat()` concatenation. |
| 11 | **Matrix Addition** | [`src/11-matrix-addition/`](src/11-matrix-addition/) | Two-dimensional arrays (matrices), row-major order, dynamic dimension validation, nested `for` loops, element-by-element matrix addition. |
| 12 | **Square Root Calculator** | [`src/12-square-root-calculator/`](src/12-square-root-calculator/) | Modular functions, `<math.h>` (`sqrt`), array retention of inputs and results, negative real number handling, `-lm` linker flag. |
| 13 | **Recursive Factorial** | [`src/13-recursive-factorial/`](src/13-recursive-factorial/) | Recursive accumulator pattern, base case ($N < 1$), step-by-step arithmetic expansion ($N \times \dots \times 1 = \text{result}$), CS50x dynamic heap allocation vs. stack frame analysis. |
| 14 | **Recursive Fibonacci** | [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/) | Tail-recursive recurrence ($F_n = F_{n-1} + F_{n-2}$), linear space complexity, modular decomposition into sequence generation and pairwise additions breakdown. |
| 15 | **Academic Management System** | [`src/15-academic-management-system/`](src/15-academic-management-system/) | User-defined composite structures (`struct`), type aliasing (`typedef`), contiguous array of records, interactive batch enrollment with `(y/n)` loop. |

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
│   ├── 09-lowest-highest-numbers/
│   │   ├── lowest_highest_numbers.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 10-string-manipulation/
│   │   ├── string_manipulation.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 11-matrix-addition/
│   │   ├── matrix_addition.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 12-square-root-calculator/
│   │   ├── square_root_calculator.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 13-recursive-factorial/
│   │   ├── recursive_factorial.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   ├── 14-recursive-fibonacci/
│   │   ├── recursive_fibonacci.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   └── 15-academic-management-system/
│       ├── academic_management_system.c
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
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu -lm && ./dist/consolidated_menu

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

# Exercise 10: String Manipulation
mkdir -p dist && clang -Wall -O2 src/10-string-manipulation/string_manipulation.c -o dist/string_manipulation && ./dist/string_manipulation

# Exercise 11: Matrix Addition
mkdir -p dist && clang -Wall -O2 src/11-matrix-addition/matrix_addition.c -o dist/matrix_addition && ./dist/matrix_addition

# Exercise 12: Square Root Calculator
mkdir -p dist && clang -Wall -O2 src/12-square-root-calculator/square_root_calculator.c -o dist/square_root_calculator -lm && ./dist/square_root_calculator

# Exercise 13: Recursive Factorial
mkdir -p dist && clang -Wall -O2 src/13-recursive-factorial/recursive_factorial.c -o dist/recursive_factorial && ./dist/recursive_factorial

# Exercise 14: Recursive Fibonacci
mkdir -p dist && clang -Wall -O2 src/14-recursive-fibonacci/recursive_fibonacci.c -o dist/recursive_fibonacci && ./dist/recursive_fibonacci

# Exercise 15: Academic Management System
mkdir -p dist && clang -Wall -O2 src/15-academic-management-system/academic_management_system.c -o dist/academic_management_system && ./dist/academic_management_system
```

---

## 📚 Bibliography

- **KERNIGHAN, Brian W.; RITCHIE, Dennis M.** *The C Programming Language: ANSI C Version*. 2nd ed. Prentice Hall, 1988.
- **GRAHAN, Darrel L.** *C Programming Language: A Step by Step Beginner's Guide to Learn C Programming in 7 Days*. Createspace, 2016.

---

<div align="center">
  Developed by <b><a href="https://github.com/lucasresendev">Lucas Resende</a></b> 🚀
</div>