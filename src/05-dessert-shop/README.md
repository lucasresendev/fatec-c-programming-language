<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Dessert Shop - Switch/Case & Fallthrough (`dessert_shop.c`)

</div>

---

## 🎯 Problem Statement

Build an interactive dessert ordering terminal application where the user selects an ice cream tier:
1. Simple: ice cream only ($10.00)
2. Topping: ice cream with chocolate syrup (adds $3.00, total $13.00)
3. Complete: ice cream with chocolate syrup and M&M's (adds $2.00, total $15.00)

Apply `switch/case` with `break` to confirm user selection, and demonstrate intentional fallthrough in a secondary `switch` to calculate cumulative pricing.

---

## 💻 Source Code

```c
// Dessert Shop: Multi-branching and Fallthrough Pricing with switch/case
#include <stdio.h>

int main(void) {
    int dessert_choice = 0;
    float dessert_price = 0.00;

    printf("Welcome! Please, choose an option:\n\n");
    printf("================================================================\n");
    printf("1 - Simple: ice cream only ($10)\n");
    printf("2 - Topping: ice cream with chocolate syrup (plus $3)\n");
    printf("3 - Complete: ice cream with chocolate syrup and M&M's (plus $5)\n");
    printf("================================================================\n\n");
    printf("Choice (1, 2 or 3): ");

    scanf(" %i", &dessert_choice);

    switch (dessert_choice) {
        case 1:
            printf("\nYou chose ice cream only!\n");
            break;
        case 2:
            printf("\nYou chose ice cream with chocolate syrup!\n");
            break;
        case 3:
            printf("\nYou chose ice cream with chocolate syrup and M&M's!\n");
            break;
        default:
            printf("\nInvalid option!\n");
            break;
    }

    // Additive pricing using deliberate switch fallthrough
    switch (dessert_choice) {
        case 3:
            dessert_price += 2.00;
        case 2:
            dessert_price += 3.00;
        case 1:
            dessert_price += 10.00;
            break;
    }

    if (dessert_price > 0) {
        printf("Final price: $%.2f.\n", dessert_price);
    }

    return 0;
}
```

---

## 🖥️ Terminal Output

### Complete Dessert (Choice 3)
```text
Welcome! Please, choose an option:

================================================================
1 - Simple: ice cream only ($10)
2 - Topping: ice cream with chocolate syrup (plus $3)
3 - Complete: ice cream with chocolate syrup and M&M's (plus $5)
================================================================

Choice (1, 2 or 3): 3

You chose ice cream with chocolate syrup and M&M's!
Final price: $15.00.
```

### Invalid Selection
```text
Welcome! Please, choose an option:

================================================================
1 - Simple: ice cream only ($10)
2 - Topping: ice cream with chocolate syrup (plus $3)
3 - Complete: ice cream with chocolate syrup and M&M's (plus $5)
================================================================

Choice (1, 2 or 3): 9

Invalid option!
```

---

## 💡 Key Concepts Applied

- **Multi-Branch Selection (`switch` / `case`):** Evaluates an integral or character expression against predefined constant labels, providing a clean alternative to repetitive `if...else if` equality chains.
- **The Role of `break`:** Without `break`, execution continues sequentially into subsequent case labels regardless of whether their condition matches.
- **Deliberate Fallthrough for Additive Logic:** In the second `switch`, case 3 adds $2.00, intentionally cascades into case 2 to add $3.00, and finally cascades into case 1 to add the $10.00 base price before hitting `break`.
- **Default Fallback (`default`):** Catches all out-of-range user inputs gracefully when no `case` condition matches.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/05-dessert-shop/dessert_shop.c -o dist/dessert_shop && ./dist/dessert_shop

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/05-dessert-shop/dessert_shop.c -o dist/dessert_shop && ./dist/dessert_shop
```
