<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Even or Odd Number Checker (`even_or_odd.c`)

</div>

> **Origin:** Class 03 (Decision Structures: Part 1)  
> **Topic:** if/else Statements, True/False in C (1 and 0), and Remainder Operator (%)

---

## 🎯 Problem Statement

In this exercise, I wrote a program that reads an integer, checks whether it is even or odd using decision structures, and asks if I want to keep evaluating numbers in an interactive loop.

---

## 💻 Source Code

The full implementation is available in [even_or_odd.c](even_or_odd.c).

---

## 🖥️ Terminal Output

```text
====== Even or Odd? =====

Enter a number: 14
Even!
Do you want to continue? Y or N: y

Enter a number: 7
Odd!
Do you want to continue? Y or N: n

=========================
```

---

## 💡 Key Concepts Applied

- **Remainder Operator (`%`):** Calculates the remainder of integer division. When `number % 2 == 0`, the remainder is zero, confirming that the integer is even.
- **Two Paths with `if/else`:** Instead of writing two separate `if` checks (`number % 2 == 0` and `number % 2 != 0`), using `else` avoids redundant evaluation because a number cannot be both even and odd.
- **True/False in C:** C did not have a dedicated boolean type in its original versions. Instead, zero represents false while any non-zero value evaluates to true.
- **Input Buffer Cleaning (`scanf(" %c")`):** Adding a space before `%c` tells `scanf` to ignore leading whitespace, including leftover newline characters (`\n`) from previous numeric inputs.
- **Interactive Repetition (`do...while`):** Runs the evaluation loop at least once before testing the continuation prompt (`yes_or_no == 'y' || yes_or_no == 'Y'`).

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd
```
