<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Square Root Calculator (`square_root_calculator.c`)

</div>

> **Origin:** Class 10 (Functions, Modular Programming & `<math.h>`)  
> **Topic:** Functions, <math.h> Library (sqrt and -lm), and Arrays

---

## 🎯 Problem Statement

Calculate the square roots of a series of real numbers entered by the user, using modular functions and the standard C math library (`<math.h>`). In class, the professor showed how to use functions like `sqrt()` by computing and printing each result directly inside a single loop, without storing the values.

In my solution, I chose to take it a step further: I store all input numbers and their calculated square roots in two parallel arrays (`values[]` and `square_roots[]`), setting the square root to 0.0 if the user enters a negative number, and validating the input count with a loop. This allows the program to print an organized summary table of all results at the end.

---

## 💻 Source Code

The full implementation is available directly in [`square_root_calculator.c`](square_root_calculator.c).

---

## 🖥️ Terminal Output

```text
How many values do you want to add? 3

Please, insert the values:
Value 1: 16
Value 2: 25
Value 3: 9

--- Results ---
Square root of 16.00 is 4.00
Square root of 25.00 is 5.00
Square root of 9.00 is 3.00
```

---

## 💡 Key Concepts Applied

- **Modular Functions:** Organizing code into a dedicated function (`calculate_square_roots()`), keeping `main()` clean and focused on running the program.
- **Mathematical Library (`<math.h>`):** Using `sqrt()` to calculate double-precision floating-point square roots.
- **Linker Flag Requirement (`-lm`):** In GCC and Clang on Linux, the math library is not linked by default, so passing the `-lm` flag to the compiler is necessary for the compiler to include math library functions.
- **Parallel Array Storage:** Storing numbers in arrays keeps data collection separate from final report printing, instead of immediately discarding each value after calculation.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/12-square-root-calculator/square_root_calculator.c -o dist/square_root_calculator -lm && ./dist/square_root_calculator

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/12-square-root-calculator/square_root_calculator.c -o dist/square_root_calculator -lm && ./dist/square_root_calculator
```
