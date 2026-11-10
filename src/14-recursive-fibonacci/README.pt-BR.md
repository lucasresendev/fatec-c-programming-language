<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Sequência de Fibonacci Recursiva (`recursive_fibonacci.c`)

</div>

> **Origem:** Aula 11 (Recursividade e Pilha de Execução)  
> **Tópico:** Funções Recursivas, Sequência de Fibonacci e Somas Passo a Passo  
> **Continuidade:** Evolução a partir das versões com repetição em [Aulas 06 e 08: Sequência de Fibonacci](../07-fibonacci-sequence)

---

## 🎯 Enunciado do Problema

Gerar os termos da sequência de Fibonacci e detalhar cada soma aritmética passo a passo utilizando funções recursivas. O exercício foi passado como tarefa extraclasse junto com o fatorial recursivo para praticar o raciocínio recursivo e a passagem de parâmetros.

Na minha implementação, em vez de fazer apenas uma função tradicional de recorrência, dividi o código em duas funções recursivas complementares: `make_fibonacci_sequence()` para avançar termo a termo e exibir a sequência completa, e `make_fibonacci_sum()` para detalhar cada uma das adições parciais sempre que o limite digitado for maior que 1. Também adicionei uma repetição inicial para garantir que o usuário digite um limite maior que zero.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`recursive_fibonacci.c`](recursive_fibonacci.c).

---

## 🖥️ Saída no Terminal

```text
Insert a limit number greater than 0 for the fibonacci sequence: 6

Sequence:
1 1 2 3 5 8 

Sums:
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8
```

```text
Insert a limit number greater than 0 for the fibonacci sequence: 1

Sequence:
1 
```

---

## 💡 Principais Conceitos Aplicados

- **Passando os Valores pelos Parâmetros:** A função passa `current`, `next` e `current + next` diretamente nos argumentos da chamada recursiva para já ter o próximo termo pronto, evitando recalcular tudo do zero.
- **Duas Funções Separadas:** Uma função recursiva cuida apenas de exibir a linha com a sequência, enquanto outra função separada imprime as contas de soma quando o limite digitado é maior que 1.
- **Validação de Entrada:** A leitura inicial repete a pergunta enquanto o número digitado for menor ou igual a zero, garantindo que o programa só execute com quantidades válidas.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/14-recursive-fibonacci/recursive_fibonacci.c -o dist/recursive_fibonacci && ./dist/recursive_fibonacci

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/14-recursive-fibonacci/recursive_fibonacci.c -o dist/recursive_fibonacci && ./dist/recursive_fibonacci
```
