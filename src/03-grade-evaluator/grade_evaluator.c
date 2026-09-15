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
