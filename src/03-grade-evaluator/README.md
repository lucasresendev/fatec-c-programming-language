<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Academic Grade Evaluator (`grade_evaluator.c`)

</div>

> **Origin:** Class 03 (Initial Evaluator) & Class 04 (Nested Retake Branching)  
> **Topic:** Average Calculation, if/else, and Nested if for Retake Exam

---

## 🎯 Problem Statement

In this exercise, I wrote a program that reads two grades between 0 and 10 and calculates their arithmetic mean. If the average is 6.0 or higher, the student passes immediately. Otherwise, the program prompts for a retake exam score, recalculates the final average, and checks whether the student passes or fails through nested decision structures.

---

## 💻 Source Code

The full implementation is available in [grade_evaluator.c](grade_evaluator.c).

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

- **Variable Reuse:** Instead of repeatedly calculating `(first_grade + second_grade) / 2` across multiple branches, storing the result in `average_grade` keeps the code readable and avoids duplicate calculations.
- **Nested Conditionals (`if` inside `else`):** When the initial average is below 6.0, execution branches into the `else` block, where a new input is requested and an inner conditional evaluates the updated average against the passing threshold.
- **Floating-Point Arithmetic:** I used `float` types for all grades to preserve decimal precision, such as 7.5 or 5.75.
- **Alternative Grading Exploration:** In class tests, I also experimented with an alternative rule where students with an initial average below 5.0 fail immediately, reserving the retake exam only for scores between 5.0 and 5.9.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/03-grade-evaluator/grade_evaluator.c -o dist/grade_evaluator && ./dist/grade_evaluator
```
