// Fibonacci Sequence Generator with Comparative Menu (Value Limit vs Term Count Limit, do while vs while vs for)
#include <stdio.h>

int main(void) {
    int menu_choice = 0;
    int limit = 0;
    int sum = 0;
    int current = 1;
    int next = 1;
    int loop = 1;

    do {
        printf("\n================================================================\n");
        printf("                      Fibonacci Sequence\n");
        printf("================================================================\n");
        printf("1 - do...while with Value Limit (Stops when number exceeds limit)\n");
        printf("2 - while with Value Limit (Stops when number exceeds limit)\n");
        printf("3 - do...while with Term Count Limit (Generates N terms, validated > 0)\n");
        printf("4 - while with Term Count Limit (Generates N terms, validated > 0)\n");
        printf("5 - for with Term Count Limit (Generates N terms, validated > 0)\n");
        printf("6 - Exit\n");
        printf("================================================================\n\n");
        printf("Choice (1-6): ");

        scanf(" %i", &menu_choice);

        if (menu_choice == 1) {
            printf("\n================================================================\n");
            printf("            Fibonacci (do...while - Value Limit)\n");
            printf("================================================================\n\n");

            current = 1;
            next = 1;

            printf("Insert a limit number for the fibonacci sequence: ");
            scanf(" %i", &limit);

            printf("\nSequence:\n%i ", current);

            if (limit > 1) {
                do {
                    printf("%i ", next);
                    sum = current + next;
                    current = next;
                    next = sum;
                } while (next <= limit);

                current = 1;
                next = 1;

                printf("\n\nSums:\n");
                do {
                    sum = current + next;
                    printf("%i + %i = %i\n", current, next, sum);
                    current = next;
                    next = sum;
                } while (current + next <= limit);
            }

            printf("\n\n================================================================\n\n");
        } else if (menu_choice == 2) {
            printf("\n================================================================\n");
            printf("               Fibonacci (while - Value Limit)\n");
            printf("================================================================\n\n");

            current = 1;
            next = 1;

            printf("Insert a limit number for the fibonacci sequence: ");
            scanf(" %i", &limit);

            printf("\nSequence:\n%i ", current);

            if (limit > 1) {
                while (next <= limit) {
                    printf("%i ", next);
                    sum = current + next;
                    current = next;
                    next = sum;
                }

                current = 1;
                next = 1;

                printf("\n\nSums:\n");
                while (current + next <= limit) {
                    sum = current + next;
                    printf("%i + %i = %i\n", current, next, sum);
                    current = next;
                    next = sum;
                }
            }

            printf("\n\n================================================================\n\n");
        } else if (menu_choice == 3) {
            printf("\n================================================================\n");
            printf("          Fibonacci (do...while - Term Count Limit)\n");
            printf("================================================================\n\n");

            current = 1;
            next = 1;
            loop = 1;

            do {
                printf("Insert a limit number greater than 0 for the fibonacci sequence: ");
                scanf(" %i", &limit);
            } while (limit <= 0);

            printf("\nSequence:\n%i ", current);

            if (limit > 1) {
                do {
                    printf("%i ", next);
                    sum = current + next;
                    current = next;
                    next = sum;
                    loop++;
                } while (loop < limit);

                current = 1;
                next = 1;
                loop = 1;

                if (limit > 2) {
                    printf("\n\nSums:\n");
                    do {
                        sum = current + next;
                        printf("%i + %i = %i\n", current, next, sum);
                        current = next;
                        next = sum;
                        loop++;
                    } while (loop < limit - 1);
                }
            }

            printf("\n\n================================================================\n\n");
        } else if (menu_choice == 4) {
            printf("\n================================================================\n");
            printf("            Fibonacci (while - Term Count Limit)\n");
            printf("================================================================\n\n");

            current = 1;
            next = 1;
            loop = 1;

            printf("Insert a limit number greater than 0 for the fibonacci sequence: ");
            scanf(" %i", &limit);

            while (limit <= 0) {
                printf("You didn't input a valid number! Please, insert again: ");
                scanf(" %i", &limit);
            }

            printf("\nSequence:\n%i ", current);

            if (limit > 1) {
                while (loop < limit) {
                    printf("%i ", next);
                    sum = current + next;
                    current = next;
                    next = sum;
                    loop++;
                }

                current = 1;
                next = 1;
                loop = 1;

                if (limit > 2) {
                    printf("\n\nSums:\n");
                    while (loop < limit - 1) {
                        sum = current + next;
                        printf("%i + %i = %i\n", current, next, sum);
                        current = next;
                        next = sum;
                        loop++;
                    }
                }
            }

            printf("\n\n================================================================\n\n");
        } else if (menu_choice == 5) {
            printf("\n================================================================\n");
            printf("             Fibonacci (for - Term Count Limit)\n");
            printf("================================================================\n\n");

            current = 1;
            next = 1;
            loop = 1;

            printf("Insert a limit number greater than 0 for the fibonacci sequence: ");
            scanf(" %i", &limit);

            for (; limit <= 0;) {
                printf("You didn't input a valid number! Please, insert again: ");
                scanf(" %i", &limit);
            }

            printf("\nSequence:\n%i ", current);

            if (limit > 1) {
                for (; loop < limit; loop++) {
                    printf("%i ", next);
                    sum = current + next;
                    current = next;
                    next = sum;
                }

                current = 1;
                next = 1;
                loop = 1;

                if (limit > 2) {
                    printf("\n\nSums:\n");
                    for (; loop < limit - 1; loop++) {
                        sum = current + next;
                        printf("%i + %i = %i\n", current, next, sum);
                        current = next;
                        next = sum;
                    }
                }
            }

            printf("\n\n================================================================\n\n");
        } else if (menu_choice == 6) {
            printf("\n================================================================\n");
            printf("                   Exiting program. Goodbye!\n");
            printf("================================================================\n\n");
        } else {
            printf("\n================================================================\n");
            printf("         Invalid selection! Please enter a number 1 to 6.\n");
            printf("================================================================\n\n");
        }

    } while (menu_choice != 6);

    return 0;
}
