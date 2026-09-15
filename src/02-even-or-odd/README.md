<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Even or Odd Number Checker (`even_or_odd.c`)

</div>

---

## 🎯 Problem Statement

Write a program that reads an integer number, checks whether it is even or odd using decision structures, and prompts the user whether they wish to continue evaluating numbers in an interactive loop.

---

## 💻 Source Code

```c
// Even or Odd Number Checker with Interactive Loop
#include <stdio.h>

int main(void) {
    int number;
    char yes_or_no = 'Y';

    printf("\n====== Even or Odd? =====\n");

    do {
        printf("\nEnter a number: ");
        scanf("%i", &number);

        if (number % 2 == 0) {
            printf("Even!\n");
        } else {
            printf("Odd!\n");
        }

        printf("Do you want to continue? Y or N: ");
        scanf(" %c", &yes_or_no);
        // The leading space before %c consumes the leftover newline (\n) in the input buffer

    } while (yes_or_no == 'y' || yes_or_no == 'Y');

    printf("\n=========================\n\n");

    return 0;
}
```

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

- **Modulus Operator (`%`):** Evaluates the remainder of integer division. When `number % 2 == 0`, the remainder is zero, confirming an even integer.
- **Mutual Exclusivity (`if` vs `else`):** Instead of executing two independent `if` statements (`number % 2 == 0` and `number % 2 != 0`), using `else` avoids redundant conditional evaluation because a number cannot be simultaneously even and odd.
- **Numeric Truth in C:** In C, zero evaluates to false while any non-zero value evaluates to true.
- **Input Buffer Hygiene (`scanf(" %c")`):** Prepending a whitespace before `%c` instructs `scanf` to discard leading whitespace characters, including lingering newline characters (`\n`) left in the standard input stream from previous numeric inputs.
- **Interactive Repetition (`do...while`):** Guarantees at least one execution pass before testing the user's continuation prompt (`yes_or_no == 'y' || yes_or_no == 'Y'`).

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd
```
