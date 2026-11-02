// Recursive Factorial: computes n! and outputs step-by-step arithmetic expansion recursively
#include <stdio.h>

#define MAX_FACTORIAL_VALUE 10

void calculate_factorial(int temporary_number, int factorial_number) {
    if (temporary_number < 1) {
        printf("%i.\n", factorial_number);
        return;
    }

    printf("%i ", temporary_number);

    if (temporary_number > 1) {
        printf("x ");
    } else {
        printf("= ");
    }

    factorial_number *= temporary_number;
    temporary_number--;

    calculate_factorial(temporary_number, factorial_number);
}

int main(void) {
    int selected_number = 0;

    printf("Enter a number between 1 and 10 to calculate its factorial: ");
    scanf("%i", &selected_number);

    while (selected_number < 1 || selected_number > MAX_FACTORIAL_VALUE) {
        printf("Invalid input. Please enter a number between 1 and 10: ");
        scanf("%i", &selected_number);
    }

    printf("Factorial of %i: ", selected_number);
    calculate_factorial(selected_number, 1);

    return 0;
}
