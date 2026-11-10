<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Maior e Menor Número (`lowest_highest_numbers.c`)

</div>

> **Origem:** Aula 08 (Estruturas de Repetição: Parte 2 e Vetores)  
> **Tópico:** Vetores de Inteiros, Busca de Menor e Maior Valor e Bubble Sort (CS50x)

---

## 🎯 Enunciado do Problema

Ler até 30 números inteiros digitados pelo usuário, mostrar o menor e o maior valor e imprimir todos eles. Essa foi a tarefa de casa da aula. Na minha solução, também tentei implementar o bubble sort que aprendi no CS50x: copio os valores para um segundo array, ordeno só a cópia em ordem crescente e mantenho o array original intacto para imprimir as duas ordens.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`lowest_highest_numbers.c`](lowest_highest_numbers.c).

---

## 🖥️ Saída no Terminal

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

## 💡 Principais Conceitos Aplicados

- **Arrays com Tamanho em Tempo de Execução:** `numbers[count]` e `sorted_numbers[count]` são arrays de tamanho variável (C99), limitados pela validação `count <= 30` para não estourar a pilha.
- **Bubble Sort em uma Cópia:** Cada passada compara pares vizinhos e troca quando estão fora de ordem, então o maior valor sobe até o fim. Ordenar `sorted_numbers` mantém `numbers` na ordem digitada.
- **Busca do Menor e do Maior:** Uma única passada começando com `numbers[0]` como os dois candidatos. É redundante depois da ordenação (seriam `sorted_numbers[0]` e `sorted_numbers[count - 1]`), e mantive de propósito só para praticar.
- **Melhoria Possível:** Na repetição interna, daria para parar em `count - 1 - i` para não comparar de novo os últimos números que já ficaram no lugar certo.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/09-lowest-highest-numbers/lowest_highest_numbers.c -o dist/lowest_highest_numbers && ./dist/lowest_highest_numbers

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/09-lowest-highest-numbers/lowest_highest_numbers.c -o dist/lowest_highest_numbers && ./dist/lowest_highest_numbers
```
