<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Manipulação de Strings (`string_manipulation.c`)

</div>

> **Origem:** Aula 09 (Strings, Biblioteca string.h e Matrizes)  
> **Tópico:** Vetores de Caracteres, Terminador Nulo (`\0`), Biblioteca `<string.h>` e Limpeza de Buffer

---

## 🎯 Enunciado do Problema

Entender como strings funcionam em C como vetores de caracteres terminados em `\0`. Neste exercício, leio duas palavras digitadas pelo usuário com `scanf("%s")`, mostro a primeira letra, faço uma cópia manual caractere por caractere (lembrando de colocar o `\0` no final para fechar o texto), comparo se as duas palavras são iguais usando `strcmp` e junto as duas em uma terceira variável com `strcat`.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`string_manipulation.c`](string_manipulation.c).

---

## 🖥️ Saída no Terminal

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

## 💡 Principais Conceitos Aplicados

- **Terminador Nulo (`\0`):** Em C, strings não são tipos primitivos, mas arrays de `char` terminados por `\0` (ASCII 0). Funções como `printf("%s")` percorrem a memória sequencialmente até encontrar esse caractere que marca o fim da palavra.
- **Passagem de Vetor no `scanf`:** Ao passar o identificador de um array para `scanf("%s", first_name)`, o nome já representa o endereço do primeiro elemento (`&first_name[0]`), por isso o operador `&` não é necessário.
- **Cópia Manual vs. `strcpy`:** Vetores em C não podem ser atribuídos diretamente com o sinal `=`. Na cópia manual caractere por caractere, colocar `copied_name[char_index] = '\0'` ao final da repetição é indispensável para evitar imprimir lixo de memória.
- **Comparação de Strings com `strcmp`:** Comparar strings com o operador `==` compara apenas os endereços de memória dos dois vetores. A função `strcmp` compara o conteúdo caractere por caractere com base na tabela ASCII, retornando `0` quando as palavras são idênticas.
- **Concatenação com `strcat`:** A função `strcat` procura o primeiro `\0` no array de destino para começar a colar o novo texto. Inicializar `concatenated_names[0] = '\0'` garante que o vetor comece vazio em vez de herdar lixo de memória.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/10-string-manipulation/string_manipulation.c -o dist/string_manipulation && ./dist/string_manipulation

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/10-string-manipulation/string_manipulation.c -o dist/string_manipulation && ./dist/string_manipulation
```
