<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ String Manipulation (`string_manipulation.c`)

</div>

> **Origin:** Class 09 (Strings, string.h Library & Matrices)  
> **Topic:** Null-Terminated Character Arrays, String Operations (`<string.h>`), and Keyboard Buffer Clearing

---

## 🎯 Problem Statement

Learn how strings work in C as character arrays ending with the null terminator (`\0`). In this exercise, I read two strings with `scanf("%s")`, inspect characters by index, perform a manual copy loop (making sure to add `\0` at the end), compare if the strings are equal using `strcmp`, and combine both into a third string using `strcat`.

---

## 💻 Source Code

The full implementation is available directly in [`string_manipulation.c`](string_manipulation.c).

---

## 🖥️ Terminal Output

```text
Insert one name: Lucas
Insert another name: Resende

First letter of 1st name: L
Manual copy of 1st name: Lucas
The names are not equal!
Concatenated names: LucasResende
```

```text
Insert one name: Fatec
Insert another name: Fatec

First letter of 1st name: F
Manual copy of 1st name: Fatec
The names are equal!
Concatenated names: FatecFatec
```

---

## 💡 Key Concepts Applied

- **Null Terminator (`\0`):** In C, strings are not a primitive data type, but arrays of `char` ending with `\0` (ASCII 0). Functions like `printf("%s")` sequentially read memory until this character that marks the end of the string is reached.
- **Passing Arrays to `scanf`:** When passing a string name to `scanf("%s", first_name)`, the identifier evaluates directly to the memory address of its first element (`&first_name[0]`), so the `&` operator is not needed.
- **Manual Copy vs. `strcpy`:** Strings cannot be assigned directly using `=`. In a manual copy loop, setting `copied_name[char_index] = '\0'` right after the loop finishes is essential to avoid printing leftover memory garbage.
- **String Comparison with `strcmp`:** Using `first_name == second_name` compares memory addresses rather than the text content. The `strcmp` function compares characters one by one according to their ASCII codes, returning `0` when both strings match.
- **Safe Concatenation with `strcat`:** The `strcat` function searches for the first `\0` in the destination array to begin appending. Setting `concatenated_names[0] = '\0'` guarantees an empty string start instead of inheriting leftover memory garbage.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/10-string-manipulation/string_manipulation.c -o dist/string_manipulation && ./dist/string_manipulation

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/10-string-manipulation/string_manipulation.c -o dist/string_manipulation && ./dist/string_manipulation
```
