// Even or Odd Number Checker with Interactive Loop
#include <stdio.h>

int main(void) {
    int number;
    char yes_or_no = 'Y';

    printf("\n====== Even or Odd? =====\n");

    do {
        printf("\nEnter a number: ");
        scanf("%i", &number);

        if (number % 2 == 0) {
            printf("Even!\n");
        } else {
            printf("Odd!\n");
        }

        printf("Do you want to continue? Y or N: ");
        scanf(" %c", &yes_or_no);
        // Space before %c is necessary: unlike %i, %c does not skip whitespace and would otherwise read the leftover '\n'

    } while (yes_or_no == 'y' || yes_or_no == 'Y');

    printf("\n=========================\n\n");

    return 0;
}
