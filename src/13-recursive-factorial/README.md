<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Recursive Factorial Calculator (`recursive_factorial.c`)

</div>

> **Origin:** Class 11 (Recursion & Call Stack)  
> **Topic:** Recursive Function Calls, Base Case & Call Stack  
> **Lineage:** Evolution from the loop-based versions in [Classes 06, 08 & 10: Factorial Calculator](../06-factorial-calculator)

---

## 🎯 Problem Statement

Calculate the factorial of an integer between 1 and 10 using recursive function calls instead of traditional repetition loops (`while`, `for`). This exercise was assigned as homework to practice setting up base cases and understanding how the computer's call stack behaves during recursive function calls.

In my initial study drafts inspired by CS50x, I experimented with dynamic memory allocation using `malloc()` and `free()`, as well as pointers (`int *factorial_number`) to track values across calls. For this final coursework version, I kept a clean recursive approach with an accumulator parameter, validating that the input is between 1 and 10 and printing the entire multiplication chain step by step (such as `4 x 3 x 2 x 1 = 24`) until reaching the base case.

---

## 💻 Source Code

The full implementation is available directly in [`recursive_factorial.c`](recursive_factorial.c).

---

## 🖥️ Terminal Output

```text
Enter a number between 1 and 10 to calculate its factorial: 5
Factorial of 5: 5 x 4 x 3 x 2 x 1 = 120.
```

```text
Enter a number between 1 and 10 to calculate its factorial: 1
Factorial of 1: 1 = 1.
```

---

## 💡 Key Concepts Applied

- **Base Case (Stop Condition):** Establishing an explicit stop condition (`temporary_number < 1`) prevents runaway recursive calls and protects against stack overflow.
- **Accumulator Parameter:** Passing the running product as a function argument propagates the calculation forward across stack frames without relying on global variables.
- **Input Bounds:** Restricting inputs between 1 and 10 ensures meaningful factorial calculations and prevents 32-bit signed integer overflow.
- **Call Stack vs. Heap:** With each recursive call, the program pushes function information onto the call stack and pops it off upon return, contrasting with dynamic memory (Heap) that I tested in my experiments with `malloc`.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/13-recursive-factorial/recursive_factorial.c -o dist/recursive_factorial && ./dist/recursive_factorial

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/13-recursive-factorial/recursive_factorial.c -o dist/recursive_factorial && ./dist/recursive_factorial
```
