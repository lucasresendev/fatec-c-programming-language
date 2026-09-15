<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Academic Grade Evaluator (`grade_evaluator.c`)

</div>

---

## 🎯 Problem Statement

Read two grades between 0 and 10 from the student and calculate their arithmetic mean. If the average is 6.0 or higher, the student passes immediately. Otherwise, the program prompts for a retake exam score, recalculates the final average, and determines whether the student passes or fails through nested decision structures.

---

## 💻 Source Code

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

## 🖥️ Terminal Output

### Scenario A: Immediate Pass
```text
Enter your first grade: 7.5
Enter your second grade: 8.0
You passed the course!
```

### Scenario B: Retake Exam and Final Pass
```text
Enter your first grade: 4.0
Enter your second grade: 5.0
You'll have a retake exam.
Retake exam grade: 8.0
You passed the course!
```

### Scenario C: Retake Exam and Fail
```text
Enter your first grade: 3.0
Enter your second grade: 4.0
You'll have a retake exam.
Retake exam grade: 5.0
You didn't pass the course.
```

---

## 💡 Key Concepts Applied

- **Variable Reutilization:** Instead of repeatedly computing `(first_grade + second_grade) / 2` across multiple branches, storing the quotient in `average_grade` improves readability and optimizes computational overhead.
- **Nested Conditionals (`if` inside `else`):** When the initial average falls below 6.0, execution branches into the `else` block, where a secondary input and an inner conditional evaluate the updated composite average against the passing threshold.
- **Floating-Point Arithmetic:** Grading logic uses `float` types to preserve fractional grade components (such as 7.5 or 5.75).
- **Personal Exploration Note:** In class note `ICPL04`, an alternative strict policy was explored where students with an initial average strictly below 5.0 fail immediately without access to a retake exam, reserving retakes only for students in the `[5.0, 6.0)` range.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator
```
