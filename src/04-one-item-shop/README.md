<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ One Item Shop: Discount Selector (`one_item_shop.c`)

</div>

> **Origin:** Class 04 (Decision Structures: Part 2)  
> **Topic:** else if Chains, Reading char, and Validating Options

---

## 🎯 Problem Statement

In this exercise, I simulated a simple retail checkout in the terminal. The program asks for an item's initial price, displays a menu with four tiered discount rates (5%, 12%, 20%, 25%), prompts for a letter choice from `a` to `d`, and calculates the discounted final price using an `else if` chain without early function returns.

---

## 💻 Source Code

The full implementation is available in [one_item_shop.c](one_item_shop.c).

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

- **Multi-Branch Decision Chains (`else if`):** Conditions are evaluated in order. As soon as one branch evaluates to true, the remaining branches are skipped, while the final `else` catches any unrecognized letter input.
- **Logical OR Operator (`||`):** Allows accepting both lowercase and uppercase letters (`'a' || 'A'`) directly without needing extra string conversions.
- **Escaping the Percent Sign (`%%`):** In `printf`, the `%` character introduces format specifiers. To print a literal percent symbol in console output, C requires `%%`.
- **Structured Control Flow without Early Returns:** Following classroom guidelines, instead of terminating early with `return` inside the invalid choice branch, the program preserves state in `final_price` and guards the final confirmation with `if (final_price > 0)`.
- **Currency Formatting (`%.2f`):** Formats floating-point numbers to two decimal places for prices.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/04-one-item-shop/one_item_shop.c -o dist/one_item_shop && ./dist/one_item_shop
```
