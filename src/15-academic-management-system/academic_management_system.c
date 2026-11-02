// Academic Management System: student registration using struct and typedef
#include <stdio.h>

#define MAX_STUDENTS 100

struct STUDENT {
    char name[50];
    int id;
};

typedef struct STUDENT STUDENT;

int main(void) {
    int option = 0;
    int total_students = 0;
    char continue_adding = ' ';
    STUDENT students[MAX_STUDENTS];

    do {
        printf("\n================================================================\n");
        printf("                   Academic Management System\n");
        printf("================================================================\n");
        printf("1 - Register students\n");
        printf("2 - Show all students\n");
        printf("3 - Exit\n");
        printf("================================================================\n\n");
        printf("Select an option (1-3): ");
        scanf("%i", &option);

        if (option == 1) {
            while (total_students < MAX_STUDENTS) {
                printf("\n--- Student %i ---\n", total_students + 1);
                printf("ID: ");
                scanf("%i", &students[total_students].id);
                printf("Name: ");
                scanf("%s", students[total_students].name);

                total_students++;

                if (total_students >= MAX_STUDENTS) {
                    printf("Capacity reached (%i students).\n", MAX_STUDENTS);
                    break;
                }

                printf("Do you want to continue adding students? (y/n): ");
                scanf(" %c", &continue_adding);
                if (continue_adding == 'n' || continue_adding == 'N') {
                    printf("Returning to the menu...\n");
                    break;
                }
            }
        } else if (option == 2) {
            printf("\n================================================================\n");
            printf("                        Student List\n");
            printf("================================================================\n");
            if (total_students == 0) {
                printf("No students registered yet.\n");
            } else {
                for (int i = 0; i < total_students; i++) {
                    printf("Student %i: ID = %i | Name = %s\n", i + 1, students[i].id, students[i].name);
                }
            }
            printf("================================================================\n");
        } else if (option == 3) {
            printf("\nExiting Academic Management System. Goodbye!\n");
        } else {
            printf("\nInvalid option! Please enter 1, 2, or 3.\n");
        }
    } while (option != 3);

    return 0;
}
