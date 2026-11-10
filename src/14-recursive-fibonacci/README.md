<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Recursive Fibonacci Sequence (`recursive_fibonacci.c`)

</div>

> **Origin:** Class 11 (Recursion & Call Stack)  
> **Topic:** Recursive Functions, Fibonacci Sequence, and Step-by-Step Sums  
> **Lineage:** Evolution from the loop-based versions in [Classes 06 & 08: Fibonacci Sequence](../07-fibonacci-sequence)

---

## 🎯 Problem Statement

Generate the terms of the Fibonacci sequence and show each arithmetic addition step by step using recursive functions. This exercise was assigned as homework alongside recursive factorial to practice recursive thinking and parameter passing.

In my solution, instead of relying on a single recurrence function, I divided the logic into two complementary recursive routines: `make_fibonacci_sequence()` to advance term by term and print the sequence, and `make_fibonacci_sum()` to break down each addition step whenever the requested term count is greater than 1. I also added a loop at the beginning to verify that the user enters a positive limit greater than zero.

---

## 💻 Source Code

The full implementation is available directly in [`recursive_fibonacci.c`](recursive_fibonacci.c).

---

## 🖥️ Terminal Output

```text
Insert a limit number greater than 0 for the fibonacci sequence: 6

Sequence:
1 1 2 3 5 8 

Sums:
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8
```

```text
Insert a limit number greater than 0 for the fibonacci sequence: 1

Sequence:
1 
```

---

## 💡 Key Concepts Applied

- **Passing Values Through Parameters:** The function passes `current`, `next`, and `current + next` directly into the arguments of the recursive call so the next term is already computed, avoiding recalculating from scratch.
- **Two Separate Functions:** One recursive function is dedicated to printing the sequence line, while another separate function prints the step-by-step additions when the requested limit is greater than 1.
- **Input Validation:** The initial prompt repeats as long as the user enters a number less than or equal to zero, ensuring the program only runs with valid positive limits.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/14-recursive-fibonacci/recursive_fibonacci.c -o dist/recursive_fibonacci && ./dist/recursive_fibonacci

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/14-recursive-fibonacci/recursive_fibonacci.c -o dist/recursive_fibonacci && ./dist/recursive_fibonacci
```
