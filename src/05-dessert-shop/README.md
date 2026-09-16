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

The implementation is available directly in [`dessert_shop.c`](dessert_shop.c).

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
