<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Verificador de Par ou Ímpar (`even_or_odd.c`)

</div>

---

## 🎯 Enunciado

Desenvolva um programa que leia um número inteiro, verifique se ele é par ou ímpar utilizando estruturas de decisão e pergunte ao usuário se ele deseja continuar testando novos números em um laço de repetição interativo.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`even_or_odd.c`](even_or_odd.c).

---

## 🖥️ Saída no Terminal

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

## 💡 Principais Conceitos Aplicados

- **Operador Módulo (`%`):** Retorna o resto da divisão inteira. Quando `number % 2 == 0`, o resto é nulo, confirmando que o valor é par.
- **Exclusividade Mútua (`if` vs `else`):** Em vez de executar dois blocos `if` independentes (`number % 2 == 0` e `number % 2 != 0`), o uso de `else` evita testes condicionais redundantes, já que um número não pode ser simultaneamente par e ímpar.
- **Verdade Numérica em C:** Em C não há tipo booleano primitivo nativo tradicional; o valor zero representa falso e qualquer valor diferente de zero representa verdadeiro.
- **Higiene do Buffer de Entrada (`scanf(" %c")`):** Inserir um espaço em branco antes do especificador `%c` faz o `scanf` ignorar caracteres em branco remanescentes no buffer de entrada, especialmente o caractere de quebra de linha (`\n`) deixado por leituras numéricas anteriores.
- **Repetição Interativa (`do...while`):** Assegura pelo menos uma execução do bloco antes de verificar a condição de continuidade escolhida pelo usuário (`yes_or_no == 'y' || yes_or_no == 'Y'`).

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd
```
