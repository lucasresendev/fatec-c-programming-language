<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Loja de Sobremesas - Switch/Case e Fallthrough (`dessert_shop.c`)

</div>

---

## 🎯 Enunciado

Desenvolva uma aplicação de pedidos para terminal na qual o cliente escolhe uma combinação de sobremesa:
1. Simples: apenas sorvete (R$ 10,00)
2. Cobertura: sorvete com calda de chocolate (+ R$ 3,00, total R$ 13,00)
3. Completo: sorvete com calda de chocolate e M&M's (+ R$ 2,00, total R$ 15,00)

Aplique a estrutura `switch/case` com `break` para confirmar o pedido na tela e utilize a técnica de *fallthrough* intencional em um segundo bloco `switch` para acumular o preço final.

---

## 💻 Código-Fonte

A implementação completa está disponível diretamente em [`dessert_shop.c`](dessert_shop.c).

---

## 🖥️ Saída no Terminal

### Sobremesa Completa (Opção 3)
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

### Opção Inválida
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

## 💡 Principais Conceitos Aplicados

- **Ramificação Múltipla (`switch` / `case`):** Avalia expressões inteiras ou de caracteres contra rótulos constantes definidos, servindo como alternativa organizada a sequências longas de `if...else if`.
- **Papel da Instrução `break`:** Interrompe a execução do `switch`. Na sua ausência, o fluxo de instruções continua em cascata (*fallthrough*) pelos rótulos seguintes.
- **Fallthrough Intencional para Acúmulo:** No segundo `switch`, o `case 3` soma 2.00, cai sem interrupção para o `case 2` somando 3.00, e por fim cai no `case 1` somando os 10.00 base antes do `break`.
- **Tratamento de Exceções com `default`:** Captura entradas fora da faixa esperada quando nenhum dos rótulos `case` coincide com o valor testado.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/05-dessert-shop/dessert_shop.c -o dist/dessert_shop && ./dist/dessert_shop

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/05-dessert-shop/dessert_shop.c -o dist/dessert_shop && ./dist/dessert_shop
```
