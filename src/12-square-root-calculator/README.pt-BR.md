<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Calculadora de Raiz Quadrada (`square_root_calculator.c`)

</div>

> **Origem:** Aula 10 (Funções, Modularização e Biblioteca `<math.h>`)  
> **Tópico:** Funções, Biblioteca <math.h> (sqrt e -lm) e Vetores

---

## 🎯 Enunciado do Problema

Calcular as raízes quadradas de uma quantidade de números reais informada pelo usuário, utilizando funções modulares e a biblioteca matemática padrão da linguagem C (`<math.h>`). Na aula, o professor apresentou o uso de funções como `sqrt()` calculando e imprimindo cada resultado diretamente dentro do loop, sem guardar os valores digitados.

Na minha implementação, preferi ir um pouco além do exercício de aula: guardo todos os números e suas respectivas raízes em dois arrays paralelos (`values[]` e `square_roots[]`), tratando valores negativos para receberem 0.0 e validando a quantidade informada com uma repetição. Dessa forma, consigo imprimir uma tabela organizada com todos os resultados no final da execução.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`square_root_calculator.c`](square_root_calculator.c).

---

## 🖥️ Saída no Terminal

```text
How many values do you want to add? 3

Please, insert the values:
Value 1: 16
Value 2: 25
Value 3: 9

--- Results ---
Square root of 16.00 is 4.00
Square root of 25.00 is 5.00
Square root of 9.00 is 3.00
```

---

## 💡 Principais Conceitos Aplicados

- **Funções Modulares:** Divisão do código em uma função dedicada (`calculate_square_roots()`), deixando a função `main()` limpa e focada em disparar o programa.
- **Biblioteca Matemática (`<math.h>`):** Uso de `sqrt()` para calcular raízes quadradas em ponto flutuante de precisão dupla (`double`).
- **Flag de Ligação (`-lm`):** No GCC e no Clang no Linux, a biblioteca matemática não é vinculada automaticamente, sendo necessário passar a flag `-lm` no comando do terminal para o compilador incluir as funções da biblioteca matemática.
- **Armazenamento em Vetores Paralelos:** Em vez de imprimir e descartar cada valor imediatamente, o uso de arrays permite separar a leitura dos dados da exibição do relatório final.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/12-square-root-calculator/square_root_calculator.c -o dist/square_root_calculator -lm && ./dist/square_root_calculator

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/12-square-root-calculator/square_root_calculator.c -o dist/square_root_calculator -lm && ./dist/square_root_calculator
```
