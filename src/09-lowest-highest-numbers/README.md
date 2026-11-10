<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Lowest and Highest Numbers (`lowest_highest_numbers.c`)

</div>

> **Origin:** Class 08 (Repetition Structures: Part 2 & Arrays)  
> **Topic:** Integer Arrays, Finding Lowest and Highest Values, and Bubble Sort (CS50x)

---

## 🎯 Problem Statement

Read up to 30 integers from the user, show the lowest and the highest values, and print all of them. This was the take-home task of the class. In my solution, I also tried to implement the bubble sort I had learned in CS50x: I copy the values into a second array, sort only the copy in ascending order, and keep the original array intact so I can print both orders.

---

## 💻 Source Code

The implementation is available directly in [`lowest_highest_numbers.c`](lowest_highest_numbers.c).

---

## 🖥️ Terminal Output

```text
How many integer values do you want to store?
(You can only store up to 30 values.)
Answer: 0
How many integer values do you want to store?
(You can only store up to 30 values.)
Answer: 5

Enter the integer values below:
Number 1: 12
Number 2: -3
Number 3: 7
Number 4: 7
Number 5: 40

Numbers in original order:
12 - -3 - 7 - 7 - 40
Numbers in ascending order:
-3 - 7 - 7 - 12 - 40

Lowest number: -3. Highest number: 40.
```

---

## 💡 Key Concepts Applied

- **Arrays With Runtime Size:** `numbers[count]` and `sorted_numbers[count]` are variable length arrays (C99), bounded by the validation `count <= 30` to avoid exhausting the stack.
- **Bubble Sort on a Copy:** Each pass compares neighbor pairs and swaps them when they are out of order, so the highest value bubbles to the end. Sorting `sorted_numbers` keeps `numbers` in the typed order.
- **Lowest and Highest Scan:** A single pass starting with `numbers[0]` as both candidates. It is redundant after sorting (they would be `sorted_numbers[0]` and `sorted_numbers[count - 1]`), and I kept it on purpose just to practice.
- **Possible Improvement:** In the inner loop, we could stop at `count - 1 - i` to avoid comparing again the last numbers that are already in their correct places.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/09-lowest-highest-numbers/lowest_highest_numbers.c -o dist/lowest_highest_numbers && ./dist/lowest_highest_numbers

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/09-lowest-highest-numbers/lowest_highest_numbers.c -o dist/lowest_highest_numbers && ./dist/lowest_highest_numbers
```
