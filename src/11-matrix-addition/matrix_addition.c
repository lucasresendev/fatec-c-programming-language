// Matrix Addition: reads dimensions and elements of two matrices and calculates their sum
#include <stdio.h>

int main(void) {
    int total_rows = 0;
    int total_columns = 0;

    printf("Enter row size: ");
    scanf("%i", &total_rows);

    printf("Enter column size: ");
    scanf("%i", &total_columns);

    int first_matrix[total_rows][total_columns];
    int second_matrix[total_rows][total_columns];
    int sum_matrix[total_rows][total_columns];

    printf("\nEnter the values for the first matrix:\n");
    for (int row = 0; row < total_rows; row++) {
        for (int column = 0; column < total_columns; column++) {
            printf("Value of [%i][%i]: ", row, column);
            scanf("%i", &first_matrix[row][column]);
        }
    }

    printf("\nEnter the values for the second matrix:\n");
    for (int row = 0; row < total_rows; row++) {
        for (int column = 0; column < total_columns; column++) {
            printf("Value of [%i][%i]: ", row, column);
            scanf("%i", &second_matrix[row][column]);
        }
    }

    printf("\nFirst Matrix:");
    for (int row = 0; row < total_rows; row++) {
        printf("\n");
        for (int column = 0; column < total_columns; column++) {
            printf("%i ", first_matrix[row][column]);
        }
    }

    printf("\n\nSecond Matrix:");
    for (int row = 0; row < total_rows; row++) {
        printf("\n");
        for (int column = 0; column < total_columns; column++) {
            printf("%i ", second_matrix[row][column]);
        }
    }

    // Element-by-element arithmetic matrix addition
    for (int row = 0; row < total_rows; row++) {
        for (int column = 0; column < total_columns; column++) {
            sum_matrix[row][column] = first_matrix[row][column] + second_matrix[row][column];
        }
    }

    printf("\n\nSum Matrix:");
    for (int row = 0; row < total_rows; row++) {
        printf("\n");
        for (int column = 0; column < total_columns; column++) {
            printf("%i ", sum_matrix[row][column]);
        }
    }
    printf("\n");

    return 0;
}
