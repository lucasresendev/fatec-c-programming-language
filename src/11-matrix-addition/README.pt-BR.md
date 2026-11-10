<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Soma de Matrizes (`matrix_addition.c`)

</div>

> **Origem:** Aula 09 (Strings, Biblioteca string.h e Matrizes)  
> **Tópico:** Matrizes (Arrays 2D), Loops for Aninhados e Soma Posição por Posição

---

## 🎯 Enunciado do Problema

Ler as dimensões (quantidade de linhas e colunas) de duas matrizes de números inteiros de mesmo tamanho, solicitar que o usuário digite os elementos de cada uma, exibir ambas as matrizes formatadas visualmente em grade e calcular a soma elemento a elemento armazenando o resultado em uma terceira matriz. Na minha solução, armazeno os valores em arrays bidimensionais com tamanho definido em tempo de execução e percorro todas as células utilizando repetições `for` aninhadas indexadas por `row` e `column`.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`matrix_addition.c`](matrix_addition.c).

---

## 🖥️ Saída no Terminal

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

## 💡 Principais Conceitos Aplicados

- **Matrizes Bidimensionais:** Em C, uma matriz é declarada com dois colchetes: `int matrix[linhas][colunas]`, onde o primeiro índice indica a linha e o segundo representa a coluna.
- **Loops Aninhados para Varredura:** O loop `for` externo comanda a progressão vertical das linhas, enquanto o loop `for` interno percorre horizontalmente cada coluna daquela linha.
- **Como a Matriz Fica na Memória:** Apesar de pensarmos e desenharmos a matriz como uma tabela de linhas e colunas, a memória RAM guarda todos os números em sequência, colocando uma linha inteira logo depois da outra.
- **Soma Elemento a Elemento:** Cada posição da matriz resultante recebe a soma dos valores que estão na mesma linha e mesma coluna nas duas matrizes de entrada: `sum_matrix[row][column] = first_matrix[row][column] + second_matrix[row][column]`.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/11-matrix-addition/matrix_addition.c -o dist/matrix_addition && ./dist/matrix_addition

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/11-matrix-addition/matrix_addition.c -o dist/matrix_addition && ./dist/matrix_addition
```
