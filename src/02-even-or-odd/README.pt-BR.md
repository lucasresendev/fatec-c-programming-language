<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Verificador de Par ou Ímpar (`even_or_odd.c`)

</div>

> **Origem:** Aula 03 (Estruturas de Decisão: Parte 1)  
> **Tópico:** Estrutura if/else, Verdadeiro/Falso em C (1 e 0) e Operador de Resto (%)

---

## 🎯 Enunciado do Problema

Neste exercício, criei um programa que lê um número inteiro, verifica se ele é par ou ímpar usando estruturas de decisão e pergunta se quero continuar avaliando novos números em um loop interativo.

---

## 💻 Código-Fonte

O código completo está em [even_or_odd.c](even_or_odd.c).

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

- **Operador de Resto (`%`):** Retorna o resto da divisão inteira. Quando `number % 2 == 0`, o resto é zero, confirmando que o valor digitado é par.
- **Caminhos Alternativos com `if/else`:** Em vez de executar dois blocos `if` separados (`number % 2 == 0` e `number % 2 != 0`), o uso do `else` evita verificações redundantes, já que um número não pode ser par e ímpar ao mesmo tempo.
- **Verdadeiro e Falso em C:** Em C não havia um tipo booleano próprio nas primeiras versões, de forma que o valor zero representa falso e qualquer valor diferente de zero representa verdadeiro.
- **Limpeza do Buffer de Entrada (`scanf(" %c")`):** Colocar um espaço antes do `%c` faz o `scanf` ignorar espaços em branco e quebras de linha (`\n`) deixadas no buffer do teclado por leituras anteriores.
- **Repetição Interativa (`do...while`):** Garante a execução do bloco ao menos uma vez antes de validar se o usuário deseja continuar testando novos números (`yes_or_no == 'y' || yes_or_no == 'Y'`).

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/02-even-or-odd/even_or_odd.c -o dist/even_or_odd && ./dist/even_or_odd
```
