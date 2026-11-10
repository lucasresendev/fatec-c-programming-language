<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Dessert Shop: Switch/Case & Fallthrough (`dessert_shop.c`)

</div>

> **Origin:** Class 05 (Decision Structures: Part 3)  
> **Topic:** switch/case Statements, Intentional Fallthrough to Add Prices, and default

---

## 🎯 Problem Statement

In this exercise, I built an interactive dessert ordering program where the user picks an ice cream option:
1. Simple: ice cream only (`$10.00`)
2. Topping: ice cream with chocolate syrup (adds `$3.00`, total `$13.00`)
3. Complete: ice cream with chocolate syrup and M&M's (adds `$2.00`, total `$15.00`)

I used a `switch/case` with `break` to display the chosen order, and then used intentional fallthrough in a second `switch` to calculate the final price by adding up prices.

---

## 💻 Source Code

The full implementation is available in [dessert_shop.c](dessert_shop.c).

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

- **Multi-Branch Selection with `switch/case`:** Evaluates an integer or character variable against constant labels, offering a clean alternative to long chains of `if...else if`.
- **The Role of `break`:** Stops execution from continuing into subsequent cases. Without `break`, execution cascades down into the next label.
- **Intentional Fallthrough to Add Prices:** In the second `switch`, case 3 adds `$2.00` and cascades directly into case 2 to add `$3.00`, which cascades into case 1 to add the `$10.00` base price before reaching `break`.
- **Input Fallback with `default`:** Handles any unexpected user choices when no `case` label matches the input.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/05-dessert-shop/dessert_shop.c -o dist/dessert_shop && ./dist/dessert_shop

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/05-dessert-shop/dessert_shop.c -o dist/dessert_shop && ./dist/dessert_shop
```
