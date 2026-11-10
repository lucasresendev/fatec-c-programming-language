<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Introduction to the C Programming Language | Fatec & ARInter

  ### **My Coursework, Class Exercises, and Final Assessment in Standard C**

  [![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)](https://en.cppreference.com/w/c)
  [![GCC](https://img.shields.io/badge/GCC-00599C?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
  [![Clang](https://img.shields.io/badge/Clang-000000?style=for-the-badge&logo=llvm&logoColor=white)](https://clang.llvm.org/)
  [![ARInter - CPS](https://img.shields.io/badge/ARInter-CPS-003366?style=for-the-badge)](https://arinter.cps.sp.gov.br/)
  [![Fatec](https://img.shields.io/badge/Fatec-CEETEPS-B22222?style=for-the-badge)](https://www.cps.sp.gov.br/)

</div>

---

## 🎯 About This Repository

This repository holds all the C programs and practical exercises I wrote during the **Introduction to the C Programming Language** course in my 1st semester at **Fatec**. The course is an international elective offered by the **International Relations Office (ARInter / CEETEPS)**, taught 100% in English together with exchange students.

Throughout the semester, I used these exercises both to practice what we covered in the live classes and to test ideas I was learning on my own (such as Bubble Sort and pointers from Harvard's CS50x). Because all classes and assignments were in English, I wrote the code and primary documentation in English (`README.md`) and also translated every explanation into Portuguese (`README.pt-BR.md`).

- **Course:** Introduction to the C Programming Language (ARInter / Fatec).
- **Professor:** Luciano Gonçalves de Carvalho.
- **Language of Instruction:** 100% English (live sessions on MS Teams on Tuesdays, 17:00 to 18:40).
- **Workload:** 40 hours total (30 hours of live classes + 10 hours of practical activities).
- **Passing Criteria:** Minimum 70% attendance and final grade of 6.0 or higher.

---

## 🗺️ Course Syllabus & Class Roadmap

| Class | Topic Covered in Class | Status | Exercises in This Repo |
| :---: | :--- | :---: | :--- |
| 01 | Introduction to C: logic, algorithms, Code.org Hour of Code maze, role of the compiler, and first Hello World program | ✅ Done | OnlineGDB setup (plus my local VS Code / GCC setup) |
| 02 | Variables, Primitive Types & Formatted I/O (`printf`, `scanf`, `sizeof`) | ✅ Done | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) |
| 03 | Decision Structures: Part 1 (`if`, `else`, numeric truth, relational and logical operators) | ✅ Done | [`src/02-even-or-odd/`](src/02-even-or-odd/), [`src/03-grade-evaluator/`](src/03-grade-evaluator/) (initial) |
| 04 | Decision Structures: Part 2 (`else if` chains, nested conditionals, retake exam, discount menu) | ✅ Done | [`src/03-grade-evaluator/`](src/03-grade-evaluator/) (retake), [`src/04-one-item-shop/`](src/04-one-item-shop/) |
| 05 | Decision Structures: Part 3 (`switch`, `break`, intentional fallthrough, dessert shop) | ✅ Done | [`src/05-dessert-shop/`](src/05-dessert-shop/), [`src/00-consolidated-menu/`](src/00-consolidated-menu/) (initial idea) |
| 06 | Repetition Structures: Part 1 (`do-while` vs. `while`, menus, factorial & Fibonacci) | ✅ Done | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (`do-while`/`while`), [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) (`do-while`/`while`), [`src/00-consolidated-menu/`](src/00-consolidated-menu/) (menu loop) |
| 07 | *No class: professor at an institutional CPS event* | ⏸️ No class | *(Content continued in Class 08)* |
| 08 | Repetition Structures: Part 2 (`for` loops, 1D arrays, reverse order & finding lowest/highest values) | ✅ Done | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (`for`), [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) (`for`), [`src/08-reverse-characters/`](src/08-reverse-characters/), [`src/09-lowest-highest-numbers/`](src/09-lowest-highest-numbers/) |
| 09 | Strings, `string.h` Library & 2D Arrays (`\0` terminator, string functions, matrix addition) | ✅ Done | [`src/10-string-manipulation/`](src/10-string-manipulation/), [`src/11-matrix-addition/`](src/11-matrix-addition/) |
| 10 | Functions, Modular Programming & `<math.h>` (functions, `void`, `sqrt`, modular factorial) | ✅ Done | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) (modular function), [`src/12-square-root-calculator/`](src/12-square-root-calculator/) |
| 11 | Recursion (base case, recursive factorial, and recursive Fibonacci) | ✅ Done | [`src/13-recursive-factorial/`](src/13-recursive-factorial/), [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/) |
| 12 | User-Defined Types (`struct`, `typedef`, replacing parallel arrays with student records) | ✅ Done | [`src/15-academic-management-system/`](src/15-academic-management-system/) (in-memory registration & listing) |
| 13 | File Handling & Data Persistence (`FILE *`, `fopen`, `fprintf`, `fscanf`, `fclose`, `%[^\n]`) | ✅ Done | [`src/15-academic-management-system/`](src/15-academic-management-system/) (`report.txt`, `total.txt`, `ids.txt`, `names.txt`) |
| 14 | **Final Course Assessment:** Original problem & 5-minute code explanation video in English | ✅ Done | [`src/16-cpf-validator/`](src/16-cpf-validator/) + [🎥 YouTube Video](https://youtu.be/MwPf94gYgpY) |
| 15 | *Retake Test (only for students who did not reach the passing grade)* | ✅ Exempted | *(Finished the course in Class 14)* |

---

## 🔄 How Exercises Evolved Across Classes

In several classes, the professor came back to earlier exercises so we could rewrite them using the new topic of the week:

### 1. Factorial
- **Class 06 (`do-while` and `while`):** First built with `do...while` and `while` loops in [`src/06-factorial-calculator/`](src/06-factorial-calculator/), printing the full multiplication (`5 x 4 x 3 x 2 x 1 = 120`).
- **Class 08 (`for`):** Rebuilt with a `for` loop, keeping the counter initialization, condition, and decrement in one line.
- **Class 10 (Functions):** Moved into a separate function (`calculate_factorial_modular`) that receives the number as a parameter.
- **Class 11 (Recursion):** Rewritten using recursive calls and a stop condition (`temporary_number < 1`) in [`src/13-recursive-factorial/`](src/13-recursive-factorial/).

### 2. Fibonacci Sequence
- **Class 06 (`do-while` and `while`):** Built in [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) in two ways: stopping when the value passes a limit, or generating an exact number of terms with the step-by-step sums (`1 + 1 = 2`, `1 + 2 = 3`, and so on).
- **Class 08 (`for`):** Rewritten with a `for` loop and input validation (`limit > 0`).
- **Class 11 (Recursion):** Split into two recursive functions in [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/), one for the sequence and one for the sums.

### 3. Academic Management System
- **Class 12 (`struct` and `typedef`):** Started with two separate parallel arrays (`ids[]` and `names[][]`) and then moved to a `struct STUDENT` array with `typedef` in [`src/15-academic-management-system/`](src/15-academic-management-system/).
- **Class 13 (Files and Persistence):** Added `FILE *pointer`, `fopen` (`"wt"` and `"rt"`), `fprintf`, `fscanf` (with `" %[^\n]"` to read full lines with spaces), and `fclose`. Added Option 3 to save and read `report.txt`, plus automatic saving and loading of `total.txt`, `ids.txt`, and `names.txt` when opening and closing the program.

### 4. Consolidated Menu
- **Class 05:** Started as a simple `switch/case` example.
- **Class 06:** Wrapped in a `do...while` loop so it keeps running until the user exits.
- **Classes 08 to 14:** Updated every week with the new exercises, reaching 20 options in [`src/00-consolidated-menu/`](src/00-consolidated-menu/).

---

## 📝 Exercises Index

| # | Exercise | Class | Folder | What I Practiced |
| :-: | :--- | :---: | :--- | :--- |
| 00 | **Consolidated Menu** | Classes 05-14 | [`src/00-consolidated-menu/`](src/00-consolidated-menu/) | Interactive console menu uniting all 19 exercises from the semester inside a `do...while` loop. |
| 01 | **Basic Types, I/O & Memory Sizing** | Class 02 | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) | Primitive types (`char`, `int`, `float`, `long`, `double`), `sizeof()`, `%zu`, `printf()`, and `scanf()`. |
| 02 | **Even or Odd Checker** | Class 03 | [`src/02-even-or-odd/`](src/02-even-or-odd/) | Remainder operator (`%`), `if/else`, `scanf(" %c")` buffer cleanup, and `do...while` loop to repeat. |
| 03 | **Academic Grade Evaluator** | Classes 03 & 04 | [`src/03-grade-evaluator/`](src/03-grade-evaluator/) | Average calculation, variable reuse, nested `if` inside `else`, and retake exam calculation. |
| 04 | **One Item Shop** | Class 04 | [`src/04-one-item-shop/`](src/04-one-item-shop/) | `else if` discount table, uppercase/lowercase check (`'a' \|\| 'A'`), and printing `%%` in `printf`. |
| 05 | **Dessert Shop** | Class 05 | [`src/05-dessert-shop/`](src/05-dessert-shop/) | `switch/case`, `break`, intentional fallthrough to sum prices, and `default` for invalid options. |
| 06 | **Factorial Calculator** | Classes 06, 08, 10 | [`src/06-factorial-calculator/`](src/06-factorial-calculator/) | Factorial calculation printing each multiplication step, comparing `do...while`, `while`, `for`, and a function. |
| 07 | **Fibonacci Sequence** | Classes 06 & 08 | [`src/07-fibonacci-sequence/`](src/07-fibonacci-sequence/) | Fibonacci sequence and step-by-step additions, comparing value limit vs. term count with `do...while`, `while`, and `for`. |
| 08 | **Reverse Characters** | Class 08 | [`src/08-reverse-characters/`](src/08-reverse-characters/) | 1D character array sized at runtime, 0-based indexing, and `for` loops forward and backward. |
| 09 | **Lowest and Highest Numbers** | Class 08 | [`src/09-lowest-highest-numbers/`](src/09-lowest-highest-numbers/) | Reading up to 30 integers, sorting a copy with Bubble Sort (from CS50x), and finding the lowest and highest values. |
| 10 | **String Manipulation** | Class 09 | [`src/10-string-manipulation/`](src/10-string-manipulation/) | Character arrays, `\0` null terminator, manual character copy loop, `strcmp()`, and `strcat()`. |
| 11 | **Matrix Addition** | Class 09 | [`src/11-matrix-addition/`](src/11-matrix-addition/) | 2D arrays (matrices), nested `for` loops for rows and columns, and adding two matrices position by position. |
| 12 | **Square Root Calculator** | Class 10 | [`src/12-square-root-calculator/`](src/12-square-root-calculator/) | Modular function, `sqrt()` from `<math.h>`, storing inputs and results in arrays, and compiling with `-lm`. |
| 13 | **Recursive Factorial** | Class 11 | [`src/13-recursive-factorial/`](src/13-recursive-factorial/) | Recursive function with a stop condition and an accumulator parameter to print each multiplication step. |
| 14 | **Recursive Fibonacci** | Class 11 | [`src/14-recursive-fibonacci/`](src/14-recursive-fibonacci/) | Two recursive functions to print the Fibonacci sequence terms and the step-by-step additions. |
| 15 | **Academic Management System** | Classes 12 & 13 | [`src/15-academic-management-system/`](src/15-academic-management-system/) | `struct` and `typedef` student records (Class 12), plus `FILE *`, `fopen`, `fprintf`, `fscanf` (`" %[^\n]"`), `report.txt`, and saving to `total.txt`, `ids.txt`, and `names.txt` (Class 13). |
| 16 | **CPF Validator (Final Assessment)** | Class 14 | [`src/16-cpf-validator/`](src/16-cpf-validator/) | Final course assessment: calculating both CPF check digits, pointers (`&` and `*`), `char` to `int` conversion (`input[i] - '0'`), and [5-minute video explanation](https://youtu.be/MwPf94gYgpY). |

---

## 🏆 Final Course Assessment (Class 14)

For our final grade in Class 14, Professor Luciano asked each student to create a C program solving a problem different from the ones we did in class, and to record a video of up to 5 minutes in English explaining the code line by line.

I chose to build a [**Brazilian CPF Validator (`src/16-cpf-validator/`)**](src/16-cpf-validator/):

- **What is a CPF?** In Brazil, the CPF (*Cadastro de Pessoas Físicas*) is the national individual taxpayer ID number (similar to a Social Security Number in the US). Everyone in Brazil needs it for everyday things like opening a bank account, enrolling at university, or shopping online. It has 11 digits formatted as `xxx.xxx.xxx-xx`: the first 9 digits are the base number, and the last 2 digits (`-xx`) are check digits calculated from the first 9.
- **What does "validating" mean in this program?** Since this is a local C terminal program, it does not connect to the Brazilian government database to check if a person actually exists. Instead, it performs the exact same check that websites and forms do when someone types their CPF to catch typos or fake numbers:
  1. Accepts the CPF typed with punctuation (`123.456.789-00`) or just numbers (`12345678900`), removing any dots and hyphens.
  2. Checks if the cleaned input has 11 digits (asking the user to type it again if it does not).
  3. Blocks numbers where all 11 digits are the same (like `111.111.111-11`), because those pass the math calculation by coincidence even though they are not real CPFs.
  4. Calculates what the 10th and 11th digits should be based on the first 9 digits and checks if they match what the user typed.
- **How I organized the code:**
  - **Pointers (`&` and `*`):** In `clean_CPF`, I passed the memory address `&input_digits_size` and used `*input_digits_size` to update the digit count directly in memory while filtering only numeric characters and converting each `char` to `int` with `input[i] - '0'`.
  - **One Function for Both Check Digits (`check_CPF`):** Since the weights in both steps always count down to `2`, I used `weight = num_digits + 1 - i` to check both the 1st check digit (9 digits, weights from 10 down to 2) and the 2nd check digit (10 digits, weights from 11 down to 2) using the same function.
- **My Video Explanation (English, 5 min):** [**Assessment: Code Explanation - Introduction to the C Programming Language | Lucas Resende (YouTube)**](https://youtu.be/MwPf94gYgpY)

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
│   ├── 15-academic-management-system/
│   │   ├── academic_management_system.c
│   │   ├── README.md
│   │   └── README.pt-BR.md
│   └── 16-cpf-validator/
│       ├── cpf_validator.c
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
- A standard C compiler installed, such as [GCC](https://gcc.gnu.org/) or [Clang](https://clang.llvm.org/).

### Compiling and Running
You can compile and run any exercise from the root folder:

```bash
# Consolidated Exercises Menu
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu -lm && ./dist/consolidated_menu

# Exercise 1: Basic Types, I/O & Memory Sizing
mkdir -p dist && clang -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io

# Exercise 2: Even or Odd Checker
mkdir -p dist && clang -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd

# Exercise 3: Academic Grade Evaluator
mkdir -p dist && clang -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator

# Exercise 4: One Item Shop
mkdir -p dist && clang -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop

# Exercise 5: Dessert Shop
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

# Exercise 16: CPF Validator (Final Assessment)
mkdir -p dist && clang -Wall -O2 src/16-cpf-validator/cpf_validator.c -o dist/cpf_validator && ./dist/cpf_validator
```

---

## 📚 Course Bibliography

- **KERNIGHAN, Brian W., RITCHIE, Dennis M.** *The C Programming Language: ANSI C Version*. 2nd ed. Prentice Hall, 1988.
- **GRAHAN, Darrel L.** *C Programming Language: A Step by Step Beginner's Guide to Learn C Programming in 7 Days*. Createspace, 2016.

---

<div align="center">
  Developed by <b><a href="https://github.com/lucasresendev">Lucas Resende</a></b> 🚀
</div>
