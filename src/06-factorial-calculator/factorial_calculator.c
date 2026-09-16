// Factorial Calculator (do while vs while)
#include <stdio.h>

int main(void) {
    int menu_choice = 0;
    int selected_number = 0;
    int temporary_number = 0;
    int factorial_number = 1;

    do {
        printf("\n================================================================\n");
        printf("                      Factorial Calculator\n");
        printf("================================================================\n");
        printf("1 - Calculate Factorial using do...while\n");
        printf("2 - Calculate Factorial using while\n");
        printf("3 - Exit\n");
        printf("================================================================\n\n");
        printf("Choice (1-3): ");

        scanf(" %i", &menu_choice);

        if (menu_choice == 1) {
            printf("\n================================================================\n");
            printf("             Factorial Calculation (do...while)\n");
            printf("================================================================\n\n");

            printf("Insert a number to calculate its factorial: ");
            scanf(" %i", &selected_number);

            temporary_number = selected_number;
            factorial_number = 1;

            printf("For the number %i, the factorial is: ", selected_number);
            do {
                printf("%i ", temporary_number);
                if (temporary_number > 1) {
                    printf("x ");
                } else {
                    printf("= ");
                }

                factorial_number *= temporary_number;
                temporary_number--;
            } while (temporary_number >= 1);

            printf("%i\n", factorial_number);
            printf("\n================================================================\n\n");
        } else if (menu_choice == 2) {
            printf("\n================================================================\n");
            printf("               Factorial Calculation (while)\n");
            printf("================================================================\n\n");

            printf("Insert a number to calculate its factorial: ");
            scanf(" %i", &selected_number);

            temporary_number = selected_number;
            factorial_number = 1;

            printf("For the number %i, the factorial is: ", selected_number);
            while (temporary_number >= 1) {
                printf("%i ", temporary_number);
                if (temporary_number > 1) {
                    printf("x ");
                } else {
                    printf("= ");
                }

                factorial_number *= temporary_number;
                temporary_number--;
            }

            printf("%i\n", factorial_number);
            printf("\n================================================================\n\n");
        } else if (menu_choice == 3) {
            printf("\n================================================================\n");
            printf("                   Exiting program. Goodbye!\n");
            printf("================================================================\n\n");
        } else {
            printf("\n================================================================\n");
            printf("         Invalid selection! Please enter 1, 2, or 3.\n");
            printf("================================================================\n\n");
        }

    } while (menu_choice != 3);

    return 0;
}
