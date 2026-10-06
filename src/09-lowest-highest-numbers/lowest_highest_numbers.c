// Lowest and Highest Numbers: reads integers, sorts a copy with bubble sort and shows lowest and highest
#include <stdio.h>

int main(void) {
    int count = 0;
    int lowest_number = 0;
    int highest_number = 0;

    do {
        printf("How many integer values do you want to store?\n(You can only store up to 30 values.)\nAnswer: ");
        scanf(" %i", &count);
    } while (count <= 0 || count > 30);

    int numbers[count];
    int sorted_numbers[count];

    printf("\nEnter the integer values below:\n");

    for (int i = 0; i < count; i++) {
        printf("Number %i: ", i + 1);
        scanf(" %i", &numbers[i]);
        sorted_numbers[i] = numbers[i];
    }

    // Ascending order via bubble sort in a separate array
    for (int i = 0; i < count; i++) {
        for (int j = 0, tmp = 0; j < count - 1; j++) {
            if (sorted_numbers[j] > sorted_numbers[j + 1]) {
                tmp = sorted_numbers[j];
                sorted_numbers[j] = sorted_numbers[j + 1];
                sorted_numbers[j + 1] = tmp;
            }
        }
    }

    lowest_number = numbers[0];
    highest_number = numbers[0];

    // An unnecessary algorithm since we already have sorted_numbers
    // Implemented just for learning purposes
    for (int i = 0; i < count; i++) {
        if (numbers[i] < lowest_number)
            lowest_number = numbers[i];
        if (numbers[i] > highest_number)
            highest_number = numbers[i];
    }

    printf("\nNumbers in original order:\n");

    for (int i = 0; i < count; i++) {
        printf("%i", numbers[i]);
        if (i < count - 1) {
            printf(" - ");
        }
    }

    printf("\nNumbers in ascending order:\n");

    for (int i = 0; i < count; i++) {
        printf("%i", sorted_numbers[i]);
        if (i < count - 1) {
            printf(" - ");
        }
    }

    printf("\n\nLowest number: %i. Highest number: %i.\n", lowest_number, highest_number);

    return 0;
}
