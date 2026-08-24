// Introduction to Basic Types, I/O, and Memory Sizing in C
#include <stdio.h>

int main(void) {
    // 1. Declarations
    char letter;        // 1 byte (character)
    int number;         // 4 bytes (standard integer)
    float real;         // 4 bytes (single-precision floating point)
    long longNumber;    // 4 or 8 bytes depending on OS/architecture
    double doubleReal;  // 8 bytes (double-precision floating point)

    // 2. Initial Assignments
    letter = 'a';
    number = 10;
    real = 0.5010f;
    longNumber = 999999999L;
    doubleReal = -0.912083;

    // 3. Display Initial Values and Type Sizes (%zu for size_t)
    printf("--- Default Values ---\n"
           "The letter is %c, size: %zu byte(s)\n"
           "The integer number is %d, size: %zu byte(s)\n"
           "The real number is %.2f, size: %zu byte(s)\n"
           "The long number is %ld, size: %zu byte(s)\n"
           "The double real number is %lf, size: %zu byte(s)\n\n",
           letter, sizeof(letter), 
           number, sizeof(number), 
           real, sizeof(real), 
           longNumber, sizeof(longNumber), 
           doubleReal, sizeof(doubleReal));

    // 4. User Input (Interactive I/O)
    printf("Enter a letter: ");
    scanf(" %c", &letter); // Leading space consumes any leftover newline/whitespace

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter a float: ");
    scanf("%f", &real);

    printf("Enter a long integer: ");
    scanf("%ld", &longNumber);

    printf("Enter a double: ");
    scanf("%lf", &doubleReal);

    // 5. Display User Input
    printf("\n--- User Input ---\n"
           "The letter is %c, size: %zu byte(s)\n"
           "The integer number is %d, size: %zu byte(s)\n"
           "The real number is %.2f, size: %zu byte(s)\n"
           "The long number is %ld, size: %zu byte(s)\n"
           "The double real number is %lf, size: %zu byte(s)\n",
           letter, sizeof(letter), 
           number, sizeof(number), 
           real, sizeof(real), 
           longNumber, sizeof(longNumber), 
           doubleReal, sizeof(doubleReal));

    return 0;
}
