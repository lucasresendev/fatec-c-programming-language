<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Caracteres em Ordem Reversa (`reverse_characters.c`)

</div>

> **Origem:** Aula 08 (Estruturas de Repetição: Parte 2 e Vetores)  
> **Tópico:** Vetores de Caracteres (Arrays), Índices Começando em Zero e Loop Invertido

---

## 🎯 Enunciado do Problema

Neste exercício, fiz um programa que lê caracteres digitados pelo usuário e os exibe em ordem reversa. Primeiro pergunto a quantidade de caracteres que serão digitados, repetindo a pergunta até o valor ser maior que 0, guardo as entradas em um vetor com tamanho definido em tempo de execução e exibo os elementos na ordem original e depois na ordem invertida.

---

## 💻 Código-Fonte

O código completo está em [reverse_characters.c](reverse_characters.c).

---

## 🖥️ Saída no Terminal

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

## 💡 Principais Conceitos Aplicados

- **Vetores com Tamanho em Tempo de Execução (C99):** A declaração `char character[char_count]` define o tamanho do vetor durante a execução com base na quantidade informada pelo usuário.
- **Indexação Baseada em Zero:** Em C, um vetor de tamanho `char_count` possui índices válidos de `0` até `char_count - 1`, motivo pelo qual as repetições usam `i < char_count`.
- **Ordem Inversa com for:** A exibição invertida começa no último índice preenchido (`char_count - 1`) e decrementa o contador até 0 (`for (int i = char_count - 1; i >= 0; i--)`).
- **Limpeza do Buffer de Entrada:** O espaço antes de `%c` em `scanf(" %c", &character[i])` ignora o caractere Enter deixado no buffer pela leitura anterior.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/08-reverse-characters/reverse_characters.c -o dist/reverse_characters && ./dist/reverse_characters

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/08-reverse-characters/reverse_characters.c -o dist/reverse_characters && ./dist/reverse_characters
```
