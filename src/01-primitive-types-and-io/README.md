<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Basic Types, I/O, and Memory Sizing in C (`primitive_types_and_io.c`)

</div>

---

## 🎯 Problem Statement

Declare variables across standard C primitive data types (`char`, `int`, `float`, `long`, `double`), inspect their allocated memory sizes in bytes via `sizeof`, print initial default values using formatted placeholders, and capture interactive user input through `scanf`.

---

## 💻 Source Code

```c
// Introduction to Basic Types, I/O, and Memory Sizing in C
#include <stdio.h>

int main(void) {
    // 1. Declarations
    char letter;         // 1 byte (character)
    int number;          // 4 bytes (standard integer)
    float real;          // 4 bytes (single-precision floating point)
    long long_number;    // 4 or 8 bytes depending on OS/architecture
    double double_real;  // 8 bytes (double-precision floating point)

    // 2. Initial Assignments
    letter = 'a';
    number = 10;
    real = 0.5010;
    long_number = 999999999L;
    double_real = -0.912083;

    // 3. Display Initial Values and Type Sizes (%zu for size_t)
    printf("--- Default Values ---\n"
           "The letter is %c, size: %zu byte(s)\n"
           "The integer number is %d, size: %zu byte(s)\n"
           "The real number is %.2f, size: %zu byte(s)\n"
           "The long number is %ld, size: %zu byte(s)\n"
           "The double real number is %lf, size: %zu byte(s)\n\n",
           letter, sizeof(letter), 
           number, sizeof(number), 
           real, sizeof(real), 
           long_number, sizeof(long_number), 
           double_real, sizeof(double_real));

    // 4. User Input (Interactive I/O)
    printf("Enter a letter: ");
    scanf(" %c", &letter); // Leading space consumes any leftover newline/whitespace

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter a float: ");
    scanf("%f", &real);

    printf("Enter a long integer: ");
    scanf("%ld", &long_number);

    printf("Enter a double: ");
    scanf("%lf", &double_real);

    // 5. Display User Input
    printf("\n--- User Input ---\n"
           "The letter is %c, size: %zu byte(s)\n"
           "The integer number is %d, size: %zu byte(s)\n"
           "The real number is %.2f, size: %zu byte(s)\n"
           "The long number is %ld, size: %zu byte(s)\n"
           "The double real number is %lf, size: %zu byte(s)\n",
           letter, sizeof(letter), 
           number, sizeof(number), 
           real, sizeof(real), 
           long_number, sizeof(long_number), 
           double_real, sizeof(double_real));

    return 0;
}
```

---

## 🖥️ Terminal Output

```text
--- Default Values ---
The letter is a, size: 1 byte(s)
The integer number is 10, size: 4 byte(s)
The real number is 0.50, size: 4 byte(s)
The long number is 999999999, size: 8 byte(s)
The double real number is -0.912083, size: 8 byte(s)

Enter a letter: z
Enter an integer: 42
Enter a float: 3.1415
Enter a long integer: 1234567890
Enter a double: 2.718281828

--- User Input ---
The letter is z, size: 1 byte(s)
The integer number is 42, size: 4 byte(s)
The real number is 3.14, size: 4 byte(s)
The long number is 1234567890, size: 8 byte(s)
The double real number is 2.718282, size: 8 byte(s)
```

---

## 💡 Key Concepts Applied

- **The 3 Pillars of Programming:** A language is a complete programming language when it supports **variables** (retaining/altering state in memory), **decision-making** (branching logic), and **loops** (iteration).
- **Variable Identifier Rules:** In C, variable names cannot start with a digit, cannot clash with reserved language keywords (like `int`, `float`, `return`), and may only use letters, digits, and underscores (`_`).
- **Primitive Data Types & Memory Allocation:**
  - `char`: 1 byte (single character / small integer).
  - `int`: 4 bytes (standard integer representation).
  - `float`: 4 bytes (single-precision floating point).
  - `long`: 4 or 8 bytes depending on platform/data model (LP64 vs LLP64).
  - `double`: 8 bytes (double-precision floating point).
- **Memory Inspection (`sizeof`):** The `sizeof` operator queries the compile-time/run-time byte size of any type or variable, formatted with `%zu` (`size_t`).
- **Formatted Output (`printf`):** Displaying variables using format specifiers (`%c`, `%d`, `%ld`, `%lf`, `%zu`) and precision specifiers like `%.2f` for two decimal places.
- **Formatted Input (`scanf`):** Reading user input into memory locations with the address-of operator `&`. Using a leading whitespace (`" %c"`) consumes any lingering newline characters left in the standard input buffer.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/01-primitive-types-and-io/primitive_types_and_io.c -o dist/primitive_types_and_io && ./dist/primitive_types_and_io
```
