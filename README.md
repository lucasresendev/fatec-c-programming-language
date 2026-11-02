<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Introduction to the C Programming Language | Fatec & ARInter

  ### **Coursework, Systems Programming, and Memory Management in Standard C**

  [![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](https://en.cppreference.com/w/c)
  [![GCC](https://img.shields.io/badge/GCC-00599C?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
  [![Clang](https://img.shields.io/badge/Clang-000000?style=for-the-badge&logo=llvm&logoColor=white)](https://clang.llvm.org/)
  [![ARInter - CPS](https://img.shields.io/badge/ARInter-CPS-003366?style=for-the-badge)](https://arinter.cps.sp.gov.br/)
  [![Fatec](https://img.shields.io/badge/Fatec-CEETEPS-B22222?style=for-the-badge)](https://www.cps.sp.gov.br/)

</div>

---

## 🎯 About the Course

Practical coursework and laboratory exercises for the **Introduction to the C Programming Language** course, an internationalization program offered by the **International Relations Office (ARInter - CEETEPS)** across **Fatec** institutions.

- **Medium of Instruction:** 100% English (synchronous lectures and collaboration with international exchange peers).
- **Institution:** ARInter - CEETEPS / Fatec.
- **Instructor:** Luciano Gonçalves de Carvalho.
- **Workload:** 40 hours total (15 synchronous weekly sessions of 2 h/a = 30h live on MS Teams, Tuesdays 17:00-18:40 + 10h asynchronous practical activities).
- **Passing Criteria:** Attendance $\ge$ 70% and Final Grade $\ge$ 6.0.

### Core Focus Areas
- **Memory & Hardware Fundamentals:** Data representation, byte sizing (`sizeof`), memory addresses, and pointer arithmetic.
- **Structured Logic:** Program architecture using standard libraries (`stdio.h`, `stdlib.h`, `string.h`), control flow, and modular functions.
- **Data Modeling & Storage:** User-defined types (`struct`, `typedef`) and persistent file handling.

---

## 🗺️ Course Syllabus & Practical Roadmap

| Class | Syllabus Topic & Authentic Scope | Status | Practical Exercises & Modules |
| :---: | :--- | :---: | :--- |
| 01 | Introduction to C: logic, algorithms, Code.org Hour of Code maze, role of the compiler & first Hello World program | ✅ Done | OnlineGDB cloud setup (plus personal local VS Code / GCC environment) |
| 02 | Variables, Primitive Types & Formatted I/O (`printf`, `scanf`, `sizeof`) | ✅ Done | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) |
| 03 | Decision Structures: Part 1 (`if`, `else`, numeric truth, relational and logical operators) | ✅ Done | [`src/02-even-or-odd/`](src/02-even-or-odd/), [`src/03-grade-evaluator/`](src/03-grade-evaluator/) (initial) |
| 04 | Decision Structures: Part 2 (`else if` chains, nested conditionals, retake exam, discount menu) | ✅ Done | [`src/03-grade-evaluator/`](src/03-grade-evaluator/) (retake), [`src/04-one-item-shop/`](src/04-one-item-shop/) |
| 05 | Decision Structures: Part 3 (`switch`, `break`, deliberate fallthrough, dessert shop) | ✅ Done | [`src/05-dessert-shop/`](src/05-dessert-shop/), [`src/00-consolidated-menu/`](src/00-consolidated-menu/) (conception) |
| 06 | Repetition Structures: Part 1 (`do-while` post-test vs. `while` pre-test, menus, factorial & Fibonacci) | ✅ Done | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (`do-while`/`while`), [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) (`do-while`/`while`), [`src/00-consolidated-menu/`](src/00-consolidated-menu/) (event loop) |
| 07 | *Class suspension: instructor attending institutional CPS event* | ⏸️ No class | *(Content continues in Class 08 without syllabus loss)* |
| 08 | Repetition Structures: Part 2 (`for` counted loops, 1D arrays, reverse order & value scanning) | ✅ Done | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (`for`), [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) (`for`), [`src/08-reverse-characters/`](src/08-reverse-characters/), [`src/09-lowest-highest-numbers/`](src/09-lowest-highest-numbers/) |
| 09 | Strings, string.h Library & 2D Arrays (`\0` terminator, string functions, matrix addition) | ✅ Done | [`src/10-string-manipulation/`](src/10-string-manipulation/), [`src/11-matrix-addition/`](src/11-matrix-addition/) |
| 10 | Functions, Modular Programming & `<math.h>` (signatures, `void`, math functions, modular factorial) | ✅ Done | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (modular function), [`src/12-square-root-calculator/`](src/12-square-root-calculator/) |
| 11 | Recursion & Call Stack (base case, recursive factorial and recursive Fibonacci) | ✅ Done | [`src/13-recursive-factorial/`](src/13-recursive-factorial/), [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/) |
| 12 | User-Defined Types (`struct`, `typedef`, replacing parallel arrays with composite records) | ✅ Done | [`src/15-academic-management-system/`](src/15-academic-management-system/) |
| 13 | Pointers: Part 1 (Concepts, memory addresses, operators `&` and `*`) | ⏳ Upcoming | Memory addresses and pointer dereferencing |
| 14 | Pointers: Part 2 (Pointer arithmetic, relationship between arrays and pointers) | ⏳ Upcoming | Pointer traversal and array equivalence |
| 15 | Practical Coursework Review & Final Assessment | ⏳ Upcoming | Final coursework review and consolidation (Nov 17) |

---

## 🔄 How Algorithms Evolved Across Classes

In several classes, the professor returned to the same problems to show how new language features make code cleaner and more modular:

### 1. Factorial ($n!$) Evolution
- **Class 06 (Loops):** First built with `do...while` and `while` accumulators in [`src/06-factorial-calculator/`](src/06-factorial-calculator/), printing each multiplication step (`5 x 4 x 3 x 2 x 1 = 120`).
- **Class 08 (Counted Loop):** Rebuilt using a `for` loop, bringing initialization, condition, and decrement together in one clean header.
- **Class 10 (Functions):** Moved into a standalone function (`calculate_factorial_modular`) taking the number as an argument.
- **Class 11 (Recursion):** Rebuilt using recursive calls with a base case ($N < 1$) in [`src/13-recursive-factorial/`](src/13-recursive-factorial/). (In my study notes, I also tested `malloc` and pointers from CS50 before sticking to the clean recursive solution).

### 2. Fibonacci Sequence Evolution
- **Class 06 (Loops):** Built with `do...while` and `while` under two tests: stopping at a value ceiling or generating an exact count of terms with step-by-step additions ($1+1=2, 1+2=3, \dots$) in [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/).
- **Class 08 (Counted Loop):** Rebuilt using `for` with positive input validation (`limit > 0`).
- **Class 11 (Recursion):** Separated into two recursive routines in [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/): one for printing the sequence terms and one for printing the addition steps.

### 3. Consolidated Interactive Menu
- **Class 05:** Started as a simple `switch-case` demo.
- **Class 06:** Turned into an interactive menu running inside a `do...while` loop.
- **Classes 08 to 12:** Expanded every week with new exercises (arrays, strings, matrices, functions, recursion, and structs), growing into 18 options in [`src/00-consolidated-menu/`](src/00-consolidated-menu/).

---

## 📝 Exercises Index

| # | Exercise | Origin Class | Code & Documentation | Core Concepts |
| :-: | :--- | :---: | :--- | :--- |
| 00 | **Consolidated Menu - Coursework Exercises** | Classes 05-12 | [`src/00-consolidated-menu/`](src/00-consolidated-menu/) | Interactive console menu uniting all coursework exercises across the semester into a single program with `do...while` navigation. |
| 01 | **Basic Types, I/O & Memory Sizing** | Class 02 | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) | Primitive types (`char`, `int`, `float`, `long`, `double`), `sizeof()` operator, `%zu`, formatted `printf()` and `scanf()`. |
| 02 | **Even or Odd Checker** | Class 03 | [`src/02-even-or-odd/`](src/02-even-or-odd/) | Modulo operator (`%`), mutual exclusivity (`if/else`), `scanf(" %c")` buffer handling, interactive `do...while` loop. |
| 03 | **Academic Grade Evaluator** | Classes 03 & 04 | [`src/03-grade-evaluator/`](src/03-grade-evaluator/) | Arithmetic mean calculation, variable reuse, nested conditionals (`if` inside `else`), retake exam routing (`retakeExam`). |
| 04 | **One Item Shop - Discount Selector** | Class 04 | [`src/04-one-item-shop/`](src/04-one-item-shop/) | `else if` conditional ladder, case-insensitive character comparison (`'a' \|\| 'A'`), escaped literal percentages (`%%`), structured flow without premature `return`. |
| 05 | **Dessert Shop - Switch & Fallthrough** | Class 05 | [`src/05-dessert-shop/`](src/05-dessert-shop/) | Multi-branching `switch/case`, `break` flow control, deliberate fallthrough for additive option pricing, `default` fallback. |
| 06 | **Factorial Calculator** | Classes 06, 08, 10 | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) | Factorial product accumulator ($n!$), formatted multiplication expansion (`5 x 4 x 3 x 2 x 1 = 120`), comparative `while`, `do...while`, `for`, and modular function sub-menu. |
| 07 | **Fibonacci Sequence** | Classes 06 & 08 | [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) | Sliding window recurrence ($F_n = F_{n-1} + F_{n-2}$), pairwise addition breakdown, value limit vs. term count, defensive input validation loop (`limit > 0`), `do...while`, `while` and `for` versions. |
| 08 | **Reverse Characters** | Class 08 | [`src/08-reverse-characters/`](src/08-reverse-characters/) | Arrays with runtime size (VLA), zero-based index, `for` loops in both directions, `scanf(" %c")` buffer handling. |
| 09 | **Lowest and Highest Numbers** | Class 08 | [`src/09-lowest-highest-numbers/`](src/09-lowest-highest-numbers/) | Integer array with bounded input (up to 30), bubble sort on a copy of the array, lowest and highest value scan, nested `for` loops. |
| 10 | **String Manipulation** | Class 09 | [`src/10-string-manipulation/`](src/10-string-manipulation/) | String arrays, `\0` null terminator, manual copy loop, `strcpy()`, `strcmp()` comparison, `strcat()` concatenation. |
| 11 | **Matrix Addition** | Class 09 | [`src/11-matrix-addition/`](src/11-matrix-addition/) | Two-dimensional arrays (matrices), dimension validation, nested `for` loops, and element-by-element matrix addition. |
| 12 | **Square Root Calculator** | Class 10 | [`src/12-square-root-calculator/`](src/12-square-root-calculator/) | Modular functions, `<math.h>` (`sqrt`), array retention of inputs and results, negative real number handling, `-lm` linker flag. |
| 13 | **Recursive Factorial** | Class 11 | [`src/13-recursive-factorial/`](src/13-recursive-factorial/) | Recursive accumulator, base case ($N < 1$), step-by-step multiplication output ($N \times \dots \times 1 = \text{result}$), and comparison with iterative loops. |
| 14 | **Recursive Fibonacci** | Class 11 | [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/) | Recursive functions to generate Fibonacci sequence terms ($F_n = F_{n-1} + F_{n-2}$) and break down pairwise additions step by step. |
| 15 | **Academic Management System** | Class 12 | [`src/15-academic-management-system/`](src/15-academic-management-system/) | User-defined structures (`struct`), type aliases with `typedef`, array of records, and continuous student enrollment loop. |

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