<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Reverse Characters (`reverse_characters.c`)

</div>

> **Origin:** Class 08 (Repetition Structures: Part 2 & Arrays)  
> **Topic:** Character Arrays, Zero-Based Indexing, and Reverse Loop

---

## 🎯 Problem Statement

In this exercise, I wrote a program that reads characters entered by the user and prints them in reverse order. I first ask how many characters will be typed, validating that the count is greater than 0, store them in a variable-length array, and then print the elements in their original order followed by their reverse order.

---

## 💻 Source Code

The full implementation is available in [reverse_characters.c](reverse_characters.c).

---

## 🖥️ Terminal Output

```text
How many characters do you want to write? 0
How many characters do you want to write? 4

Character 1: a
Character 2: b
Character 3: c
Character 4: d

Characters in order: a b c d 
Characters in inverted order: d c b a 
```

---

## 💡 Key Concepts Applied

- **Variable-Length Arrays (C99):** Using `char character[char_count]` allows sizing the array at runtime based on the count entered by the user.
- **Zero-Indexed Arrays:** In C, an array with `char_count` elements has valid indices from `0` to `char_count - 1`, which is why traversal loops check `i < char_count`.
- **Printing Backwards with for:** Printing in inverted order starts at the last valid index (`char_count - 1`) and decrements down to 0 (`for (int i = char_count - 1; i >= 0; i--)`).
- **Input Buffer Cleaning:** Placing a leading space before `%c` in `scanf(" %c", &character[i])` discards any leftover newline character from the previous input.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/08-reverse-characters/reverse_characters.c -o dist/reverse_characters && ./dist/reverse_characters

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/08-reverse-characters/reverse_characters.c -o dist/reverse_characters && ./dist/reverse_characters
```
