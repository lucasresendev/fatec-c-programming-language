<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Recursive Factorial Calculator (`recursive_factorial.c`)

</div>

> **Origin:** Class 11 (Recursion & Call Stack)  
> **Topic:** Recursive Function Calls, Base Case & Call Stack Accumulation  
> **Lineage:** Recursive leap from iterative implementations in [Classes 06, 08 & 10: Factorial Calculator](../06-factorial-calculator)

---

## 🎯 Problem Statement

Calculate the factorial of an integer $N$ ($1 \le N \le 10$) using recursive function calls instead of iterative loops. In this exercise, I validate the user input (accepting only numbers from 1 to 10), call the recursive function, and print each multiplication step until reaching the final result.

### 🏛️ Classroom Scope vs. Autoral / CS50x Exploration

- **Fatec Course Scope:** Assigned as homework to solve the factorial problem using recursion rather than the iterative loops (`while`, `do-while`, `for`) introduced in previous weeks. The core goal was establishing a clean base case ($N < 1$) and using recursive calls to multiply the factors.
- **My CS50x-Inspired Exploration:** In my initial study drafts (saved in my notes and legacy folder), I tried experimenting with ideas from CS50x before standardizing on the final recursive solution:
  - Testing dynamic memory allocation with `malloc()` and `free()` to store results.
  - Practicing pointers (`int *factorial_number`) and dereferencing (`*factorial_number`) to update values across function calls.
- **Final Coursework Solution:** In this final version, I kept the clean recursive function with an accumulator parameter, printing each step (`4 x 3 x 2 x 1 = 24`) until reaching the base case.

---

## 💻 Source Code

The full implementation is available directly in [`recursive_factorial.c`](recursive_factorial.c).

---

## 📊 Algorithmic Flow & Trace

```mermaid
flowchart TD
    Start(["[Start]"]) --> Input[/"Input: selected_number"/]
    Input --> Validate{"selected_number < 1 or > 10"}
    Validate -- Yes --> RePrompt[/"Output error & prompt again"/] --> Validate
    Validate -- No --> ShowPrefix[/"Output: 'Factorial of N: '"/]
    ShowPrefix --> CallRec[["calculate_factorial(selected_number, 1)"]]
    CallRec --> CheckBase{"temporary_number < 1"}
    CheckBase -- Yes --> PrintFinal[/"Output: factorial_number."/] --> Finish(["[End]"])
    CheckBase -- No --> PrintFactor[/"Output: temporary_number"/]
    PrintFactor --> CheckSep{"temporary_number > 1"}
    CheckSep -- Yes --> PrintTimes[/"Output: 'x '"/] --> Accum["factorial_number *= temporary_number; temporary_number--"]
    CheckSep -- No --> PrintEqual[/"Output: '= '"/] --> Accum
    Accum --> Recurse[["calculate_factorial(temporary_number, factorial_number)"]] --> CheckBase
```

RAM memory trace for input `selected_number = 4`:

| Step / Call | `temporary_number` | `factorial_number` | Condition Evaluated | Stack Action | Terminal Output |
| :---: | :---: | :---: | :---: | :--- | :--- |
| Initial | `4` | `1` | `selected_number` in `1..10` | Caller `main` pushes frame | `"Factorial of 4: "` |
| Call 1 | `4` | `1` | `4 < 1` -> False | Push `calc_fact(4, 1)` | `"4 x "` |
| Call 2 | `3` | `4` | `3 < 1` -> False | Push `calc_fact(3, 4)` | `"3 x "` |
| Call 3 | `2` | `12` | `2 < 1` -> False | Push `calc_fact(2, 12)` | `"2 x "` |
| Call 4 | `1` | `24` | `1 < 1` -> False | Push `calc_fact(1, 24)` | `"1 = "` |
| Call 5 (Base) | `0` | `24` | `0 < 1` -> True (Base Case) | Reached base case, pop frames | `"24.\n"` |

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

- **Base Case Formulation:** Establishing an explicit guard condition (`temporary_number < 1`) that terminates the chain of auto-invocations and avoids stack overflow.
- **Call Stack Frame Lifecycle:** Passing the running product as an accumulator argument so state is propagated forward across stack frames.
- **Input Bounding:** Restricting inputs to $N \le 10$ to prevent 32-bit signed integer overflow (since $13!$ exceeds `INT_MAX`).
- **CS50x Memory Parallels:** Understanding that while recursion utilizes stack frames, heap allocation (`malloc`/`free`) provides complementary dynamic memory management for unbounded data structures.

---

## 🚀 How to Run

### Standalone Compilation

```bash
mkdir -p dist && clang -Wall -O2 src/13-recursive-factorial/recursive_factorial.c -o dist/recursive_factorial && ./dist/recursive_factorial
```

### Consolidated Menu Execution

```bash
mkdir -p dist && clang -Wall -O2 src/00-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu -lm && ./dist/consolidated_menu
```
