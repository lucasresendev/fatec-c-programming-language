// Consolidated Menu: Coursework Exercises
#include <stdio.h>

int main(void) {
    // Menu selection
    int exercise_choice = 0;

    // Variables for 1 - Even or Odd
    int number = 0;

    // Variables for 2 - Passed or Not
    float first_grade = 0.0;
    float second_grade = 0.0;
    float average_grade = 0.0;
    float retake_exam = 0.0;

    // Variables for 3 - One Item Shop
    float initial_price = 0.0;
    char discount_choice = ' ';
    float final_price = 0.0;

    // Variables for 4 - Dessert Shop
    int dessert_choice = 0;
    float dessert_price = 0.0;

    // Variables for 5, 6 & 7 - Factorial
    int fact_number = 0;
    int fact_temp = 0;
    int fact_result = 1;

    // Variables for 8, 9 & 10 - Fibonacci
    int fib_limit = 0;
    int fib_sum = 0;
    int fib_current = 1;
    int fib_next = 1;
    int fib_loop = 1;

    // Variables for 11 - Reverse Characters
    int char_count = 0;

    // Variables for 12 - Lowest and Highest Numbers
    int value_count = 0;
    int lowest_number = 0;
    int highest_number = 0;

    do {
        printf("\n================================================================\n");
        printf("              Welcome! Please, select an exercise:\n");
        printf("================================================================\n");
        printf("1 - Even or Odd\n");
        printf("2 - Passed or Not\n");
        printf("3 - One Item Shop\n");
        printf("4 - Dessert Shop\n");
        printf("5 - Factorial (do while)\n");
        printf("6 - Factorial (while)\n");
        printf("7 - Factorial (for)\n");
        printf("8 - Fibonacci Sequence (do while)\n");
        printf("9 - Fibonacci Sequence (while)\n");
        printf("10 - Fibonacci Sequence (for)\n");
        printf("11 - Reverse Characters\n");
        printf("12 - Lowest and Highest Numbers\n");
        printf("13 - Exit\n");
        printf("================================================================\n\n");
        printf("Choice (1-13): ");

        scanf(" %i", &exercise_choice);

        if (exercise_choice == 1) {
            printf("\n================================================================\n");
            printf("                         Even or Odd?\n");
            printf("================================================================\n\n");

            printf("Enter a number: ");
            scanf(" %i", &number);

            if (number % 2 == 0) {
                printf("\nEven!\n");
            } else {
                printf("\nOdd!\n");
            }

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 2) {
            printf("\n================================================================\n");
            printf("                        Passed or Not\n");
            printf("================================================================\n\n");

            printf("Enter your first grade: ");
            scanf(" %f", &first_grade);

            printf("Enter your second grade: ");
            scanf(" %f", &second_grade);

            average_grade = (first_grade + second_grade) / 2;

            if (average_grade >= 6) {
                printf("\nYou passed the course!\n");
            } else {
                printf("\nYou'll have a retake exam.\n");
                printf("Retake exam grade: ");
                scanf(" %f", &retake_exam);

                average_grade = (average_grade + retake_exam) / 2;

                if (average_grade >= 6) {
                    printf("\nYou passed the course!\n");
                } else {
                    printf("\nYou didn't pass the course.\n");
                }
            }

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 3) {
            printf("\n================================================================\n");
            printf("                        One Item Shop\n");
            printf("================================================================\n\n");

            printf("***** ADM MODE *****\n");
            printf("Insert an Initial Price: ");
            scanf(" %f", &initial_price);

            printf("\nWelcome! We have 4 Discount Options today!\n\n");
            printf("Please, choose one:\n");
            printf("- a)5%% - b)12%% - c)20%% - d)25%% -\n\n");

            printf("Discount choice: ");
            scanf(" %c", &discount_choice);

            if (discount_choice == 'a' || discount_choice == 'A') {
                final_price = initial_price * 0.95;
            } else if (discount_choice == 'b' || discount_choice == 'B') {
                final_price = initial_price * 0.88;
            } else if (discount_choice == 'c' || discount_choice == 'C') {
                final_price = initial_price * 0.80;
            } else if (discount_choice == 'd' || discount_choice == 'D') {
                final_price = initial_price * 0.75;
            } else {
                printf("\nYou didn't write a letter from 'a' to 'd'.\n");
                printf("Your final price = $%.2f.\n", initial_price);
                final_price = 0.0;
            }

            if (final_price > 0) {
                printf("\nVery good! With that discount, you only have to pay $%.2f, instead of $%.2f.\n",
                       final_price, initial_price);
            }

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 4) {
            printf("\n================================================================\n");
            printf("                         Dessert Shop\n");
            printf("================================================================\n\n");

            dessert_price = 0.0;

            printf("Welcome! Please, choose an option:\n\n");
            printf("1 - Simple: ice cream only ($10)\n");
            printf("2 - Topping: ice cream with chocolate syrup (plus $3)\n");
            printf("3 - Complete: ice cream with chocolate syrup and M&M's (plus $5)\n\n");

            printf("Choice (1, 2 or 3): ");
            scanf(" %i", &dessert_choice);

            switch (dessert_choice) {
                case 1:
                    printf("\nYou chose ice cream only!\n");
                    break;
                case 2:
                    printf("\nYou chose ice cream with chocolate syrup!\n");
                    break;
                case 3:
                    printf("\nYou chose ice cream with chocolate syrup and M&M's!\n");
                    break;
                default:
                    printf("\nInvalid option!\n");
                    break;
            }

            switch (dessert_choice) {
                case 3:
                    dessert_price += 2.00;
                case 2:
                    dessert_price += 3.00;
                case 1:
                    dessert_price += 10.00;
                    break;
            }

            if (dessert_price > 0) {
                printf("Final price: $%.2f.\n", dessert_price);
            }

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 5) {
            printf("\n================================================================\n");
            printf("                     Factorial (do while)\n");
            printf("================================================================\n\n");

            printf("Insert a number to calculate its factorial: ");
            scanf(" %i", &fact_number);

            fact_temp = fact_number;
            fact_result = 1;

            printf("For the number %i, the factorial is: ", fact_number);
            do {
                printf("%i ", fact_temp);
                if (fact_temp > 1) {
                    printf("x ");
                } else {
                    printf("= ");
                }
                fact_result *= fact_temp;
                fact_temp--;
            } while (fact_temp >= 1);

            printf("%i\n", fact_result);
            printf("\n================================================================\n\n");
        } else if (exercise_choice == 6) {
            printf("\n================================================================\n");
            printf("                       Factorial (while)\n");
            printf("================================================================\n\n");

            printf("Insert a number to calculate its factorial: ");
            scanf(" %i", &fact_number);

            fact_temp = fact_number;
            fact_result = 1;

            printf("For the number %i, the factorial is: ", fact_number);
            while (fact_temp >= 1) {
                printf("%i ", fact_temp);
                if (fact_temp > 1) {
                    printf("x ");
                } else {
                    printf("= ");
                }
                fact_result *= fact_temp;
                fact_temp--;
            }

            printf("%i\n", fact_result);
            printf("\n================================================================\n\n");
        } else if (exercise_choice == 7) {
            printf("\n================================================================\n");
            printf("                       Factorial (for)\n");
            printf("================================================================\n\n");

            printf("Insert a number to calculate its factorial: ");
            scanf(" %i", &fact_number);

            fact_result = 1;

            printf("For the number %i, the factorial is: ", fact_number);
            for (fact_temp = fact_number; fact_temp >= 1; fact_temp--) {
                printf("%i ", fact_temp);
                if (fact_temp > 1) {
                    printf("x ");
                } else {
                    printf("= ");
                }
                fact_result *= fact_temp;
            }

            printf("%i\n", fact_result);
            printf("\n================================================================\n\n");
        } else if (exercise_choice == 8) {
            printf("\n================================================================\n");
            printf("                  Fibonacci Sequence (do while)\n");
            printf("================================================================\n\n");

            fib_current = 1;
            fib_next = 1;
            fib_loop = 1;

            do {
                printf("Insert a limit number greater than 0 for the fibonacci sequence: ");
                scanf(" %i", &fib_limit);
            } while (fib_limit <= 0);

            printf("\nSequence:\n%i ", fib_current);

            if (fib_limit > 1) {
                do {
                    printf("%i ", fib_next);
                    fib_sum = fib_current + fib_next;
                    fib_current = fib_next;
                    fib_next = fib_sum;
                    fib_loop++;
                } while (fib_loop < fib_limit);

                fib_current = 1;
                fib_next = 1;
                fib_loop = 1;

                if (fib_limit > 2) {
                    printf("\n\nSums:\n");
                    do {
                        fib_sum = fib_current + fib_next;
                        printf("%i + %i = %i\n", fib_current, fib_next, fib_sum);
                        fib_current = fib_next;
                        fib_next = fib_sum;
                        fib_loop++;
                    } while (fib_loop < fib_limit - 1);
                }
            }

            printf("\n\n================================================================\n\n");
        } else if (exercise_choice == 9) {
            printf("\n================================================================\n");
            printf("                    Fibonacci Sequence (while)\n");
            printf("================================================================\n\n");

            fib_current = 1;
            fib_next = 1;
            fib_loop = 1;

            printf("Insert a limit number greater than 0 for the fibonacci sequence: ");
            scanf(" %i", &fib_limit);

            while (fib_limit <= 0) {
                printf("You didn't input a valid number! Please, insert again: ");
                scanf(" %i", &fib_limit);
            }

            printf("\nSequence:\n%i ", fib_current);

            if (fib_limit > 1) {
                while (fib_loop < fib_limit) {
                    printf("%i ", fib_next);
                    fib_sum = fib_current + fib_next;
                    fib_current = fib_next;
                    fib_next = fib_sum;
                    fib_loop++;
                }

                fib_current = 1;
                fib_next = 1;
                fib_loop = 1;

                if (fib_limit > 2) {
                    printf("\n\nSums:\n");
                    while (fib_loop < fib_limit - 1) {
                        fib_sum = fib_current + fib_next;
                        printf("%i + %i = %i\n", fib_current, fib_next, fib_sum);
                        fib_current = fib_next;
                        fib_next = fib_sum;
                        fib_loop++;
                    }
                }
            }

            printf("\n\n================================================================\n\n");
        } else if (exercise_choice == 10) {
            printf("\n================================================================\n");
            printf("                    Fibonacci Sequence (for)\n");
            printf("================================================================\n\n");

            fib_current = 1;
            fib_next = 1;
            fib_loop = 1;

            printf("Insert a limit number greater than 0 for the fibonacci sequence: ");
            scanf(" %i", &fib_limit);

            for (; fib_limit <= 0;) {
                printf("You didn't input a valid number! Please, insert again: ");
                scanf(" %i", &fib_limit);
            }

            printf("\nSequence:\n%i ", fib_current);

            if (fib_limit > 1) {
                for (; fib_loop < fib_limit; fib_loop++) {
                    printf("%i ", fib_next);
                    fib_sum = fib_current + fib_next;
                    fib_current = fib_next;
                    fib_next = fib_sum;
                }

                fib_current = 1;
                fib_next = 1;
                fib_loop = 1;

                if (fib_limit > 2) {
                    printf("\n\nSums:\n");
                    for (; fib_loop < fib_limit - 1; fib_loop++) {
                        fib_sum = fib_current + fib_next;
                        printf("%i + %i = %i\n", fib_current, fib_next, fib_sum);
                        fib_current = fib_next;
                        fib_next = fib_sum;
                    }
                }
            }

            printf("\n\n================================================================\n\n");
        } else if (exercise_choice == 11) {
            printf("\n================================================================\n");
            printf("                      Reverse Characters\n");
            printf("================================================================\n\n");

            char_count = 0;

            while (char_count <= 0) {
                printf("How many characters do you want to write? ");
                scanf(" %i", &char_count);
            }

            printf("\n");
            char character[char_count];

            for (int i = 0; i < char_count; i++) {
                printf("Character %i: ", i + 1);
                scanf(" %c", &character[i]);
            }

            printf("\nCharacters in order: ");

            for (int i = 0; i < char_count; i++) {
                printf("%c ", character[i]);
            }
            printf("\n");

            printf("Characters in inverted order: ");

            for (int i = char_count - 1; i >= 0; i--) {
                printf("%c ", character[i]);
            }
            printf("\n");

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 12) {
            printf("\n================================================================\n");
            printf("                  Lowest and Highest Numbers\n");
            printf("================================================================\n\n");

            value_count = 0;

            do {
                printf("How many integer values do you want to store?\n(You can only store up to 30 values.)\nAnswer: ");
                scanf(" %i", &value_count);
            } while (value_count <= 0 || value_count > 30);

            int numbers[value_count];
            int sorted_numbers[value_count];

            printf("\nEnter the integer values below:\n");

            for (int i = 0; i < value_count; i++) {
                printf("Number %i: ", i + 1);
                scanf(" %i", &numbers[i]);
                sorted_numbers[i] = numbers[i];
            }

            // Ascending order via bubble sort in a separate array
            for (int i = 0; i < value_count; i++) {
                for (int j = 0, tmp = 0; j < value_count - 1; j++) {
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
            for (int i = 0; i < value_count; i++) {
                if (numbers[i] < lowest_number)
                    lowest_number = numbers[i];
                if (numbers[i] > highest_number)
                    highest_number = numbers[i];
            }

            printf("\nNumbers in original order:\n");

            for (int i = 0; i < value_count; i++) {
                printf("%i", numbers[i]);
                if (i < value_count - 1) {
                    printf(" - ");
                }
            }

            printf("\nNumbers in ascending order:\n");

            for (int i = 0; i < value_count; i++) {
                printf("%i", sorted_numbers[i]);
                if (i < value_count - 1) {
                    printf(" - ");
                }
            }

            printf("\n\nLowest number: %i. Highest number: %i.\n", lowest_number, highest_number);

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 13) {
            printf("\n================================================================\n");
            printf("                   Exiting program. Goodbye!\n");
            printf("================================================================\n\n");
        } else {
            printf("\n================================================================\n");
            printf("        Invalid selection! Please enter a number 1 to 13.\n");
            printf("================================================================\n\n");
        }

    } while (exercise_choice != 13);

    return 0;
}
