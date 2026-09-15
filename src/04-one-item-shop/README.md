<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ One Item Shop - Discount Selector (`one_item_shop.c`)

</div>

---

## 🎯 Problem Statement

Build a retail console system that receives an item's initial price, displays a menu with four tiered discount rates (5%, 12%, 20%, 25%), prompts the user for a letter choice (`a` to `d`), and calculates the discounted total using an `else if` conditional chain without using early function termination.

---

## 💻 Source Code

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

## 🖥️ Terminal Output

### Valid Option Selected
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

### Invalid Option Selected
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

## 💡 Key Concepts Applied

- **Multi-Branch Decision Chains (`else if`):** Tested sequentially; as soon as one branch evaluates to true, remaining branches are skipped, with the final `else` catching any unrecognized input.
- **Logical OR Operator (`||`):** Enables case-insensitive input parsing (`'a' || 'A'`), accepting both lowercase and uppercase letters without additional conversions.
- **Escaping Percent Signs (`%%`):** In `printf`, the `%` character introduces format specifiers. To render a literal percent symbol in console output, the double-percent syntax `%%` is required.
- **Structured Control Flow without Early Returns:** Per classroom guidance, rather than exiting early via `return` in the error branch, the program uses the state variable `final_price` and guards the final confirmation with `if (final_price > 0)`.
- **Currency Formatting (`%.2f`):** Constrains floating-point numbers to two fractional digits suitable for monetary presentation.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop
```
