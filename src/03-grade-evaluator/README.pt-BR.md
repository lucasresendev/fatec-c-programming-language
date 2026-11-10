<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Avaliador de Notas Acadêmicas (`grade_evaluator.c`)

</div>

> **Origem:** Aula 03 (Avaliador Inicial) e Aula 04 (Ramificação de Recuperação Aninhada)  
> **Tópico:** Cálculo de Média, if/else e Condicional Aninhada para Recuperação

---

## 🎯 Enunciado do Problema

Neste exercício, fiz um programa que recebe duas notas entre 0 e 10 e calcula a média aritmética do aluno. Se a média for 6.0 ou superior, o aluno é aprovado direto. Se ficar abaixo de 6.0, o programa pede a nota do exame de recuperação, recalcula a média final e verifica se o estudante foi aprovado ou reprovado usando condicionais aninhadas.

---

## 💻 Código-Fonte

O código completo está em [grade_evaluator.c](grade_evaluator.c).

---

## 🖥️ Saída no Terminal

### Cenário A: Aprovação Direta
```text
Enter your first grade: 7.5
Enter your second grade: 8.0
You passed the course!
```

### Cenário B: Recuperação e Aprovação Final
```text
Enter your first grade: 4.0
Enter your second grade: 5.0
You'll have a retake exam.
Retake exam grade: 8.0
You passed the course!
```

### Cenário C: Recuperação e Reprovação
```text
Enter your first grade: 3.0
Enter your second grade: 4.0
You'll have a retake exam.
Retake exam grade: 5.0
You didn't pass the course.
```

---

## 💡 Principais Conceitos Aplicados

- **Reaproveitamento de Variáveis:** Em vez de recalcular `(first_grade + second_grade) / 2` em vários pontos, guardar o resultado em `average_grade` deixa o código mais limpo e evita contas repetidas.
- **Condicionais Aninhadas (`if` dentro de `else`):** Quando a média inicial fica abaixo de 6.0, o programa entra no bloco `else`, solicita a nota da recuperação e usa um `if` interno para avaliar a nova média final.
- **Aritmética com Ponto Flutuante:** As notas utilizam o tipo `float` para preservar valores com casas decimais, como 7.5 ou 5.75.
- **Exploração de Regra Alternativa:** Durante os testes práticos, também analisei uma regra mais estrita, em que notas iniciais abaixo de 5.0 reprovam direto e apenas médias entre 5.0 e 5.9 realizam a recuperação.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator
```
