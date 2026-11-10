<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Loja de Sobremesas: Switch/Case e Fallthrough (`dessert_shop.c`)

</div>

> **Origem:** Aula 05 (Estruturas de Decisão: Parte 3)  
> **Tópico:** Estrutura switch/case, Fallthrough sem break para Somar Preços e default

---

## 🎯 Enunciado do Problema

Neste exercício, criei um sistema de pedidos de sobremesa no terminal em que o usuário escolhe entre três opções de sorvete:
1. Simples: apenas sorvete (`$10.00`)
2. Cobertura: sorvete com calda de chocolate (+ `$3.00`, total `$13.00`)
3. Completo: sorvete com calda de chocolate e M&M's (+ `$2.00`, total `$15.00`)

Utilizei uma estrutura `switch/case` com `break` para exibir a confirmação do item escolhido e apliquei a técnica de fallthrough em um segundo bloco `switch` para somar os valores da sobremesa.

---

## 💻 Código-Fonte

O código completo está em [dessert_shop.c](dessert_shop.c).

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

- **Seleção Múltipla com `switch/case`:** Avalia variáveis inteiras ou caracteres contra rótulos constantes definidos, servindo como alternativa organizada a sequências longas de `if...else if`.
- **Papel do Comando `break`:** Interrompe a execução do `switch`. Sem o `break`, o fluxo continua em cascata (fallthrough) pelos rótulos seguintes.
- **Fallthrough sem break para Somar Preços:** No segundo `switch`, o `case 3` soma `$2.00` e desce para o `case 2` somando `$3.00`, que desce para o `case 1` somando os `$10.00` de base antes de encontrar o `break`.
- **Tratamento de Opções com `default`:** Captura entradas fora da faixa esperada quando nenhum dos rótulos `case` coincide com o valor digitado.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/05-dessert-shop/dessert_shop.c -o dist/dessert_shop && ./dist/dessert_shop

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/05-dessert-shop/dessert_shop.c -o dist/dessert_shop && ./dist/dessert_shop
```
