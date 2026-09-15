<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ One Item Shop - Seletor de Descontos (`one_item_shop.c`)

</div>

---

## 🎯 Enunciado

Desenvolva um sistema comercial para terminal que receba o preço inicial de um produto, apresente um menu com quatro opções de desconto (5%, 12%, 20% e 25%), solicite a escolha do usuário por letra (`a` a `d`) e calcule o valor com desconto utilizando uma cadeia `else if` sem interromper prematuramente a execução da função.

---

## 💻 Código-Fonte

```c
// One Item Shop: Discount Selector using else-if chain
#include <stdio.h>

int main(void) {
    float initial_price = 0.0;
    char discount_choice = ' ';
    float final_price = 0.0;

    printf("\n***** ADM MODE *****\n");
    printf("Insert an Initial Price: ");
    scanf(" %f", &initial_price);

    printf("\n\n=====================\n");
    printf("    One Item Shop\n");
    printf("=====================\n\n");

    printf("Welcome! We have 4 Discount Options today!\n\n");

    printf("Please, choose one:\n");
    printf("- a)5%% - b)12%% - c)20%% - d)25%% -\n\n");

    printf("Discount choice: ");
    scanf(" %c", &discount_choice);

    if (discount_choice == 'a' || discount_choice == 'A') {
        final_price = initial_price * 0.95;
    } else if (discount_choice == 'b' || discount_choice == 'B') {
        final_price = initial_price * 0.88;
    } else if (discount_choice == 'c' || discount_choice == 'C') {
        final_price = initial_price * 0.80;
    } else if (discount_choice == 'd' || discount_choice == 'D') {
        final_price = initial_price * 0.75;
    } else {
        printf("You didn't write a letter from 'a' to 'd'.\n");
        printf("Your final price = $%.2f.\n", initial_price);
    }

    if (final_price > 0) {
        printf("\nVery good! With that discount, you only have to pay $%.2f, instead of $%.2f.\n\n", final_price, initial_price);
    }

    return 0;
}
```

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

- **Cadeia de Decisão com Múltiplas Opções (`else if`):** Testada sequencialmente; no momento em que uma condição é atendida, as demais são ignoradas, com o `else` final capturando entradas não reconhecidas.
- **Operador Lógico OU (`||`):** Permite aceitar caracteres maiúsculos e minúsculos (`'a' || 'A'`) de forma transparente sem necessidade de bibliotecas adicionais de conversão de caixa.
- **Escape de Símbolo de Porcentagem (`%%`):** Na função `printf`, o caractere `%` introduz formatadores. Para imprimir o caractere `%` literal no terminal, utiliza-se a notação `%%`.
- **Fluxo Estruturado sem `return` Prematuro:** Conforme orientação didática da aula, em vez de interromper o programa com `return` dentro do bloco de erro, o código preserva o estado em `final_price` e protege a mensagem de sucesso com `if (final_price > 0)`.
- **Formatação Monetária (`%.2f`):** Limita a exibição do ponto flutuante a duas casas decimais, padrão para valores em dinheiro.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop
```
