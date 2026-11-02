// Square Root Calculator: reads a set of numbers and calculates their square roots using math.h
#include <stdio.h>
#include <math.h>

void calculate_square_roots(void) {
    int total_values = 0;

    printf("How many values do you want to add? ");
    scanf("%i", &total_values);

    while (total_values <= 0) {
        printf("Please enter a positive quantity: ");
        scanf("%i", &total_values);
    }

    double values[total_values];
    double square_roots[total_values];

    printf("\nPlease, insert the values:\n");
    for (int i = 0; i < total_values; i++) {
        printf("Value %i: ", i + 1);
        scanf("%lf", &values[i]);

        if (values[i] < 0.0) {
            printf(" -> Square root is not defined for negative real numbers. Using 0.0.\n");
            square_roots[i] = 0.0;
        } else {
            square_roots[i] = sqrt(values[i]);
        }
    }

    printf("\n--- Results ---\n");
    for (int i = 0; i < total_values; i++) {
        printf("Square root of %.2f is %.2f\n", values[i], square_roots[i]);
    }
}

int main(void) {
    calculate_square_roots();
    return 0;
}
