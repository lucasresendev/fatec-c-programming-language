<div align="center">

  🇺🇸 **[English Version](README.md)**
  <br>

  # ⚙️ Avaliador de Notas Acadêmicas (`grade_evaluator.c`)

</div>

---

## 🎯 Enunciado

Leia duas notas entre 0 e 10 e calcule a média aritmética do estudante. Se a média for maior ou igual a 6.0, o aluno é aprovado de imediato. Caso contrário, o programa solicita a nota da prova de recuperação, recalcula a média final e determina se o aluno foi aprovado ou reprovado utilizando estruturas condicionais aninhadas.

---

## 💻 Código-Fonte

```c
// Academic Grade Evaluator with Retake Exam (Nested Conditionals)
#include <stdio.h>

int main(void) {
    float first_grade;
    float second_grade;
    float average_grade;
    float retake_exam;

    printf("Enter your first grade: ");
    scanf("%f", &first_grade);

    printf("Enter your second grade: ");
    scanf("%f", &second_grade);

    average_grade = (first_grade + second_grade) / 2;

    if (average_grade >= 6) {
        printf("You passed the course!\n");
    } else {
        printf("You'll have a retake exam.\n");
        printf("Retake exam grade: ");
        scanf("%f", &retake_exam);

        average_grade = (average_grade + retake_exam) / 2;

        if (average_grade >= 6) {
            printf("You passed the course!\n");
        } else {
            printf("You didn't pass the course.\n");
        }
    }

    return 0;
}
```

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

- **Reaproveitamento de Variáveis:** Em vez de recalcular `(first_grade + second_grade) / 2` em múltiplos ramos, armazenar o quociente em `average_grade` melhora a legibilidade e otimiza o processamento.
- **Condicionais Aninhadas (`if` dentro de `else`):** Quando a média inicial é inferior a 6.0, o fluxo entra no bloco `else`, onde uma nova entrada de dados é solicitada e um `if` interno avalia a nova média composta.
- **Aritmética de Ponto Flutuante:** As operações utilizam tipos `float` para preservar frações decimais das notas (como 7.5 ou 5.75).
- **Nota de Exploração Pessoal:** Na anotação de aula `ICPL04`, foi explorada uma política alternativa em que alunos com média inicial estritamente inferior a 5.0 reprovam diretamente sem direito a exame de recuperação, reservando a recuperação apenas para médias no intervalo `[5.0, 6.0)`.

---

## 🚀 Como Executar

```bash
# Compilar e executar com GCC
mkdir -p dist && gcc -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator

# Ou compilar e executar com Clang (padrão macOS)
mkdir -p dist && clang -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator
```
