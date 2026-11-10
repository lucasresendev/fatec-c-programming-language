<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Matrix Addition (`matrix_addition.c`)

</div>

> **Origin:** Class 09 (Strings, string.h Library & Matrices)  
> **Topic:** 2D Arrays (Matrices), Nested for Loops, and Adding Element by Element

---

## 🎯 Problem Statement

Read the dimensions (row and column count) for two integer matrices of equal size, prompt the user to input the elements for each matrix, display both matrices formatted as visual grids, and calculate their element-by-element sum into a third matrix. In my implementation, I store the values in two-dimensional variable-length arrays and traverse the cells using nested `for` loops indexed by `row` and `column`.

---

## 💻 Source Code

The full implementation is available directly in [`matrix_addition.c`](matrix_addition.c).

---

## 🖥️ Terminal Output

```text
Enter row size: 2
Enter column size: 3

Enter the values for the first matrix:
Value of [0][0]: 1
Value of [0][1]: 2
Value of [0][2]: 3
Value of [1][0]: 4
Value of [1][1]: 5
Value of [1][2]: 6

Enter the values for the second matrix:
Value of [0][0]: 10
Value of [0][1]: 20
Value of [0][2]: 30
Value of [1][0]: 40
Value of [1][1]: 50
Value of [1][2]: 60

First Matrix:
1 2 3 
4 5 6 

Second Matrix:
10 20 30 
40 50 60 

Sum Matrix:
11 22 33 
44 55 66 
```

---

## 💡 Key Concepts Applied

- **Two-Dimensional Arrays (Matrices):** In C, a matrix is declared with two bracket pairs: `int matrix[rows][columns]`. The first index references the row and the second references the column.
- **Nested Loops for Grid Traversal:** The outer `for` loop manages row progression, while the inner `for` loop iterates sequentially through each column of the current row.
- **How Matrices Are Stored in Memory:** Although we visualize and draw matrices as a 2D grid with rows and columns, RAM stores all the numbers in a single sequence, placing one full row right after the other.
- **Element-by-Element Addition:** Each cell in the result matrix receives the sum of the values located at the same row and column in both input matrices: `sum_matrix[row][column] = first_matrix[row][column] + second_matrix[row][column]`.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/11-matrix-addition/matrix_addition.c -o dist/matrix_addition && ./dist/matrix_addition

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/11-matrix-addition/matrix_addition.c -o dist/matrix_addition && ./dist/matrix_addition
```
