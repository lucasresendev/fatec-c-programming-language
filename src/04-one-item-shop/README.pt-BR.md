<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ One Item Shop: Seletor de Descontos (`one_item_shop.c`)

</div>

> **Origem:** Aula 04 (Estruturas de Decisão: Parte 2)  
> **Tópico:** Encadeamento else if, Leitura de char e Validação de Opções

---

## 🎯 Enunciado do Problema

Neste exercício, simulei uma venda de item único no terminal. O programa recebe o preço inicial de um produto, apresenta um menu com quatro opções de desconto (5%, 12%, 20% e 25%), lê a escolha do usuário por letra de `a` a `d` e calcula o valor final com desconto usando uma estrutura `else if` sem retornos antecipados.

---

## 💻 Código-Fonte

O código completo está em [one_item_shop.c](one_item_shop.c).

---

## 🖥️ Saída no Terminal

### Opção Válida Escolhida
```text
***** ADM MODE *****
Insert an Initial Price: 100.00


=====================
    One Item Shop
=====================

Welcome! We have 4 Discount Options today!

Please, choose one:
- a)5% - b)12% - c)20% - d)25% -

Discount choice: c

Very good! With that discount, you only have to pay $80.00, instead of $100.00.
```

### Opção Inválida Escolhida
```text
***** ADM MODE *****
Insert an Initial Price: 100.00


=====================
    One Item Shop
=====================

Welcome! We have 4 Discount Options today!

Please, choose one:
- a)5% - b)12% - c)20% - d)25% -

Discount choice: z
You didn't write a letter from 'a' to 'd'.
Your final price = $100.00.
```

---

## 💡 Principais Conceitos Aplicados

- **Cadeia de Decisão com `else if`:** As condições são testadas em ordem. No momento em que uma opção é verdadeira, as seguintes são ignoradas, com o `else` final tratando qualquer letra fora do intervalo esperado.
- **Operador Lógico OU (`||`):** Permite aceitar tanto letras maiúsculas quanto minúsculas (`'a' || 'A'`) de forma direta, sem depender de funções externas de conversão.
- **Escape do Símbolo de Porcentagem (`%%`):** Na função `printf`, o caractere `%` serve para indicar especificadores de formato. Para imprimir o símbolo `%` como texto na tela, usa-se a notação `%%`.
- **Controle de Fluxo sem `return` Prematuro:** Seguindo a orientação das aulas, em vez de interromper o programa com `return` no bloco de erro, o código guarda o resultado na variável `final_price` e protege a mensagem final com `if (final_price > 0)`.
- **Formatação de Moeda (`%.2f`):** Exibe o valor de ponto flutuante com duas casas decimais, próprio para representar preços.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop
```
