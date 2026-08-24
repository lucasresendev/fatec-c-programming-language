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
| 03 | Decision Structures: Part 1 (`if`, `else`) | ⏳ Upcoming |
| 04 | Decision Structures: Part 2 (`switch`, nested conditionals) | ⏳ Upcoming |
| 05 | Repetition Structures: Part 1 (`while`) | ⏳ Upcoming |
| 06 | Repetition Structures: Part 2 (`do-while`, `for`) | ⏳ Upcoming |
| 07 | Repetition Structures: Part 3 (nested loops, loop control) | ⏳ Upcoming |
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
| 01 | **Basic Types, I/O & Memory Sizing** | [`src/01-primitive-types-and-io/`](src/01-primitive-types-and-io/) | Primitive types (`char`, `int`, `float`, `long`, `double`), `sizeof()` operator, `%zu`, formatted `printf()` and `scanf()`. |

---

## 📂 Project Structure

```text
.
├── src/
│   └── 01-primitive-types-and-io/
│       ├── primitive_types_and_io.c
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
# Exercise 1: Basic Types, I/O & Memory Sizing (GCC)
mkdir -p dist && gcc -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io

# Exercise 1: Basic Types, I/O & Memory Sizing (Clang on macOS)
mkdir -p dist && clang -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io
```

---

## 📚 Bibliography

- **KERNIGHAN, Brian W.; RITCHIE, Dennis M.** *The C Programming Language: ANSI C Version*. 2nd ed. Prentice Hall, 1988.
- **GRAHAN, Darrel L.** *C Programming Language: A Step by Step Beginner's Guide to Learn C Programming in 7 Days*. Createspace, 2016.

---

<div align="center">
  Developed by <b><a href="https://github.com/lucasresendev">Lucas Resende</a></b> 🚀
</div>