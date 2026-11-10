<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Calculadora de Fatorial Recursivo (`recursive_factorial.c`)

</div>

> **Origem:** Aula 11 (Recursividade e Pilha de Execução)  
> **Tópico:** Chamadas Recursivas, Caso Base e Pilha de Execução  
> **Continuidade:** Evolução a partir das versões com repetição em [Aulas 06, 08 e 10: Calculador de Fatorial](../06-factorial-calculator)

---

## 🎯 Enunciado do Problema

Calcular o fatorial de um número inteiro entre 1 e 10 utilizando chamadas recursivas no lugar de estruturas de repetição tradicionais (`while`, `for`). O exercício foi passado como tarefa de aula para fixar o conceito de caso base e entender como a pilha de execução do computador funciona a cada chamada de função.

Nos meus primeiros rascunhos de estudo inspirados pelo CS50x, cheguei a testar alocação dinâmica com `malloc()` e `free()`, além de manipular ponteiros (`int *factorial_number`) para atualizar os valores entre as chamadas. Para a versão final entregue no curso, mantive uma solução recursiva direta com acumulador, validando a entrada do usuário entre 1 e 10 e exibindo passo a passo toda a cadeia de multiplicações (como `4 x 3 x 2 x 1 = 24`) até atingir o caso base.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`recursive_factorial.c`](recursive_factorial.c).

---

## 🖥️ Saída no Terminal

```text
Enter a number between 1 and 10 to calculate its factorial: 5
Factorial of 5: 5 x 4 x 3 x 2 x 1 = 120.
```

```text
Enter a number between 1 and 10 to calculate its factorial: 1
Factorial of 1: 1 = 1.
```

---

## 💡 Principais Conceitos Aplicados

- **Caso Base (Condição de Parada):** A condição de parada (`temporary_number < 1`) é essencial para interromper as chamadas recursivas e evitar o estouro da pilha de memória (*stack overflow*).
- **Parâmetro Acumulador:** O valor acumulado da multiplicação é passado como argumento para a próxima chamada, propagando o estado atual sem precisar de variáveis globais.
- **Validação de Entrada:** O programa restringe a entrada para números entre 1 e 10, o que garante valores positivos e impede o estouro do limite de inteiros de 32 bits com sinal.
- **Pilha de Execução vs. Heap:** A cada chamada recursiva, o programa guarda as informações na memória da pilha (Stack) e desempilha ao terminar, diferente da memória dinâmica (Heap) que usei nos testes com `malloc`.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/13-recursive-factorial/recursive_factorial.c -o dist/recursive_factorial && ./dist/recursive_factorial

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/13-recursive-factorial/recursive_factorial.c -o dist/recursive_factorial && ./dist/recursive_factorial
```
