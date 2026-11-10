// Consolidated Menu: Coursework Exercises
#include <stdio.h>
#include <string.h>
#include <math.h>

static void menu_recursive_factorial(int temporary_number, int factorial_number) {
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

    menu_recursive_factorial(temporary_number, factorial_number);
}

static void menu_fibonacci_sequence(int limit, int loop, int current, int next) {
    if (loop > limit) {
        return;
    }

    printf("%i ", current);
    menu_fibonacci_sequence(limit, loop + 1, next, current + next);
}

static void menu_fibonacci_sum(int limit, int loop, int current, int next) {
    if (loop >= limit - 1) {
        return;
    }

    int sum = current + next;
    printf("%i + %i = %i\n", current, next, sum);
    menu_fibonacci_sum(limit, loop + 1, next, sum);
}

#define MENU_MAX_STUDENTS 100

struct MENU_STUDENT {
    char name[50];
    int id;
};

typedef struct MENU_STUDENT MENU_STUDENT;

#define MENU_CPF_SIZE 14
#define MENU_CPF_DIGITS_SIZE 11

static void menu_clean_cpf(const char input[], int cpf_digits[], int *input_digits_size) {
    *input_digits_size = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            if (*input_digits_size < MENU_CPF_DIGITS_SIZE) {
                cpf_digits[*input_digits_size] = input[i] - '0';
            }
            (*input_digits_size)++;
        }
    }
}

static int menu_cpf_all_equal(int cpf_digits[]) {
    for (int i = 1; i < MENU_CPF_DIGITS_SIZE; i++) {
        if (cpf_digits[i] != cpf_digits[0]) {
            return 0;
        }
    }
    return 1;
}

static int menu_check_cpf(int cpf_digits[], int num_digits) {
    int weighted_sum = 0;

    for (int i = 0; i < num_digits; i++) {
        int weight = num_digits + 1 - i;
        weighted_sum += cpf_digits[i] * weight;
    }

    int remainder = weighted_sum % 11;
    int expected = 0;

    if (remainder < 2) {
        expected = 0;
    } else {
        expected = 11 - remainder;
    }

    if (cpf_digits[num_digits] == expected) {
        return 0;
    } else {
        return 1;
    }
}

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

    // Variables for 13 - String Manipulation
    char first_name[30];
    char second_name[30];
    char copied_name[30];
    char concatenated_names[60];
    int char_index = 0;

    // Variables for 14 - Matrix Addition
    int matrix_rows = 0;
    int matrix_columns = 0;

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
        printf("13 - String Manipulation\n");
        printf("14 - Matrix Addition\n");
        printf("15 - Square Root Calculator\n");
        printf("16 - Recursive Factorial\n");
        printf("17 - Recursive Fibonacci\n");
        printf("18 - Academic Management System\n");
        printf("19 - CPF Validator (Final Assessment)\n");
        printf("20 - Exit\n");
        printf("================================================================\n\n");
        printf("Choice (1-20): ");

        scanf("%i", &exercise_choice);

        if (exercise_choice == 1) {
            printf("\n================================================================\n");
            printf("                         Even or Odd?\n");
            printf("================================================================\n\n");

            printf("Enter a number: ");
            scanf("%i", &number);

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
            scanf("%f", &first_grade);

            printf("Enter your second grade: ");
            scanf("%f", &second_grade);

            average_grade = (first_grade + second_grade) / 2;

            if (average_grade >= 6) {
                printf("\nYou passed the course!\n");
            } else {
                printf("\nYou'll have a retake exam.\n");
                printf("Retake exam grade: ");
                scanf("%f", &retake_exam);

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
            scanf("%f", &initial_price);

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
            scanf("%i", &dessert_choice);

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
            scanf("%i", &fact_number);

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
            scanf("%i", &fact_number);

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
            scanf("%i", &fact_number);

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
                scanf("%i", &fib_limit);
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
            scanf("%i", &fib_limit);

            while (fib_limit <= 0) {
                printf("You didn't input a valid number! Please, insert again: ");
                scanf("%i", &fib_limit);
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
            scanf("%i", &fib_limit);

            for (; fib_limit <= 0;) {
                printf("You didn't input a valid number! Please, insert again: ");
                scanf("%i", &fib_limit);
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
                scanf("%i", &char_count);
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
                scanf("%i", &value_count);
            } while (value_count <= 0 || value_count > 30);

            int numbers[value_count];
            int sorted_numbers[value_count];

            printf("\nEnter the integer values below:\n");

            for (int i = 0; i < value_count; i++) {
                printf("Number %i: ", i + 1);
                scanf("%i", &numbers[i]);
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
            printf("                     String Manipulation\n");
            printf("================================================================\n\n");

            printf("Insert one name: ");
            scanf("%s", first_name);

            printf("Insert another name: ");
            scanf("%s", second_name);

            for (char_index = 0; first_name[char_index] != '\0'; char_index++) {
                copied_name[char_index] = first_name[char_index];
            }
            copied_name[char_index] = '\0';

            printf("\nFirst letter of 1st name: %c\n", first_name[0]);
            printf("Manual copy of 1st name: %s\n", copied_name);

            if (strcmp(first_name, second_name) == 0) {
                printf("The names are equal!\n");
            } else {
                printf("The names are not equal!\n");
            }

            concatenated_names[0] = '\0';
            strcat(concatenated_names, first_name);
            strcat(concatenated_names, second_name);

            printf("Concatenated names: %s\n", concatenated_names);

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 14) {
            printf("\n================================================================\n");
            printf("                       Matrix Addition\n");
            printf("================================================================\n\n");

            matrix_rows = 0;
            matrix_columns = 0;

            printf("Enter row size: ");
            scanf("%i", &matrix_rows);

            printf("Enter column size: ");
            scanf("%i", &matrix_columns);

            int first_matrix[matrix_rows][matrix_columns];
            int second_matrix[matrix_rows][matrix_columns];
            int sum_matrix[matrix_rows][matrix_columns];

            printf("\nEnter the values for the first matrix:\n");
            for (int row = 0; row < matrix_rows; row++) {
                for (int column = 0; column < matrix_columns; column++) {
                    printf("Value of [%i][%i]: ", row, column);
                    scanf("%i", &first_matrix[row][column]);
                }
            }

            printf("\nEnter the values for the second matrix:\n");
            for (int row = 0; row < matrix_rows; row++) {
                for (int column = 0; column < matrix_columns; column++) {
                    printf("Value of [%i][%i]: ", row, column);
                    scanf("%i", &second_matrix[row][column]);
                }
            }

            printf("\nFirst Matrix:");
            for (int row = 0; row < matrix_rows; row++) {
                printf("\n");
                for (int column = 0; column < matrix_columns; column++) {
                    printf("%i ", first_matrix[row][column]);
                }
            }

            printf("\n\nSecond Matrix:");
            for (int row = 0; row < matrix_rows; row++) {
                printf("\n");
                for (int column = 0; column < matrix_columns; column++) {
                    printf("%i ", second_matrix[row][column]);
                }
            }

            for (int row = 0; row < matrix_rows; row++) {
                for (int column = 0; column < matrix_columns; column++) {
                    sum_matrix[row][column] = first_matrix[row][column] + second_matrix[row][column];
                }
            }

            printf("\n\nSum Matrix:");
            for (int row = 0; row < matrix_rows; row++) {
                printf("\n");
                for (int column = 0; column < matrix_columns; column++) {
                    printf("%i ", sum_matrix[row][column]);
                }
            }
            printf("\n");

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 15) {
            printf("\n================================================================\n");
            printf("                   Square Root Calculator\n");
            printf("================================================================\n\n");

            int sqrt_values_count = 0;
            printf("How many values do you want to add? ");
            scanf("%i", &sqrt_values_count);

            while (sqrt_values_count <= 0) {
                printf("Please enter a positive quantity: ");
                scanf("%i", &sqrt_values_count);
            }

            double sqrt_vals[sqrt_values_count];
            double sqrt_roots[sqrt_values_count];

            printf("\nPlease, insert the values:\n");
            for (int i = 0; i < sqrt_values_count; i++) {
                printf("Value %i: ", i + 1);
                scanf("%lf", &sqrt_vals[i]);

                if (sqrt_vals[i] < 0.0) {
                    printf(" -> Square root is not defined for negative real numbers. Using 0.0.\n");
                    sqrt_roots[i] = 0.0;
                } else {
                    sqrt_roots[i] = sqrt(sqrt_vals[i]);
                }
            }

            printf("\n--- Results ---\n");
            for (int i = 0; i < sqrt_values_count; i++) {
                printf("Square root of %.2f is %.2f\n", sqrt_vals[i], sqrt_roots[i]);
            }

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 16) {
            printf("\n================================================================\n");
            printf("                    Recursive Factorial\n");
            printf("================================================================\n\n");

            int rec_fact_input = 0;
            printf("Enter a number between 1 and 10 to calculate its factorial: ");
            scanf("%i", &rec_fact_input);

            while (rec_fact_input < 1 || rec_fact_input > 10) {
                printf("Invalid input. Please enter a number between 1 and 10: ");
                scanf("%i", &rec_fact_input);
            }

            printf("Factorial of %i: ", rec_fact_input);
            menu_recursive_factorial(rec_fact_input, 1);

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 17) {
            printf("\n================================================================\n");
            printf("                    Recursive Fibonacci\n");
            printf("================================================================\n\n");

            int rec_fib_input = 0;
            printf("Insert a limit number greater than 0 for the fibonacci sequence: ");
            scanf("%i", &rec_fib_input);

            while (rec_fib_input <= 0) {
                printf("You didn't input a valid number! Please, insert again: ");
                scanf("%i", &rec_fib_input);
            }

            printf("\nSequence:\n");
            menu_fibonacci_sequence(rec_fib_input, 1, 1, 1);

            if (rec_fib_input > 1) {
                printf("\n\nSums:\n");
                menu_fibonacci_sum(rec_fib_input, 1, 1, 1);
            }
            printf("\n");

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 18) {
            printf("\n================================================================\n");
            printf("                Academic Management System\n");
            printf("================================================================\n\n");

            int student_option = 0;
            int current_student_count = 0;
            char continue_reg = ' ';
            MENU_STUDENT local_students[MENU_MAX_STUDENTS];
            FILE *file_pointer;

            // Load saved data from files if available (Class 13: Persistent Storage - Read)
            file_pointer = fopen("total.txt", "rt");
            if (file_pointer != NULL) {
                fscanf(file_pointer, "%i", &current_student_count);
                fclose(file_pointer);
            }

            file_pointer = fopen("ids.txt", "rt");
            if (file_pointer != NULL) {
                for (int i = 0; i < current_student_count; i++) {
                    fscanf(file_pointer, "%i", &local_students[i].id);
                }
                fclose(file_pointer);
            }

            file_pointer = fopen("names.txt", "rt");
            if (file_pointer != NULL) {
                for (int i = 0; i < current_student_count; i++) {
                    fscanf(file_pointer, "%s", local_students[i].name);
                }
                fclose(file_pointer);
            }

            if (current_student_count > 0) {
                printf("Loaded %i student(s) from files.\n\n", current_student_count);
            }

            do {
                printf("--- Academic Management System ---\n");
                printf("1 - Register students\n");
                printf("2 - Show all students\n");
                printf("3 - Save and read report\n");
                printf("4 - Save and return to main menu\n");
                printf("Select an option (1-4): ");
                scanf("%i", &student_option);

                if (student_option == 1) {
                    if (current_student_count >= MENU_MAX_STUDENTS) {
                        printf("\nCapacity reached (%i students).\n\n", MENU_MAX_STUDENTS);
                        continue;
                    }

                    while (current_student_count < MENU_MAX_STUDENTS) {
                        printf("\n--- Student %i ---\n", current_student_count + 1);
                        printf("ID: ");
                        scanf("%i", &local_students[current_student_count].id);
                        printf("Name: ");
                        scanf("%s", local_students[current_student_count].name);

                        current_student_count++;

                        if (current_student_count >= MENU_MAX_STUDENTS) {
                            printf("Capacity reached (%i students).\n\n", MENU_MAX_STUDENTS);
                            break;
                        }

                        printf("Do you want to continue adding students? (y/n): ");
                        scanf(" %c", &continue_reg);
                        if (continue_reg == 'n' || continue_reg == 'N') {
                            printf("Returning to submenu...\n\n");
                            break;
                        }
                    }
                } else if (student_option == 2) {
                    printf("\n--- Student List ---\n");
                    if (current_student_count == 0) {
                        printf("No students registered yet.\n\n");
                    } else {
                        for (int i = 0; i < current_student_count; i++) {
                            printf("Student %i: ID = %i | Name = %s\n", i + 1, local_students[i].id, local_students[i].name);
                        }
                        printf("\n");
                    }
                } else if (student_option == 3) {
                    if (current_student_count == 0) {
                        printf("\nNo students registered yet.\n\n");
                        continue;
                    }

                    char report_line[100] = "";

                    file_pointer = fopen("report.txt", "wt");
                    if (file_pointer == NULL) {
                        printf("No memory available!\n\n");
                        continue;
                    } else {
                        for (int i = 0; i < current_student_count; i++) {
                            fprintf(file_pointer, "%i %s\n", local_students[i].id, local_students[i].name);
                        }
                        fclose(file_pointer);
                    }

                    file_pointer = fopen("report.txt", "rt");
                    if (file_pointer == NULL) {
                        printf("No memory available!\n\n");
                        continue;
                    } else {
                        printf("\n--- Report (report.txt) ---\n");
                        for (int i = 0; i < current_student_count; i++) {
                            if (fscanf(file_pointer, " %[^\n]", report_line) == 1) {
                                printf("%s\n", report_line);
                            }
                        }
                        printf("\n");
                        fclose(file_pointer);
                    }
                } else if (student_option == 4) {
                    file_pointer = fopen("total.txt", "wt");
                    if (file_pointer != NULL) {
                        fprintf(file_pointer, "%i\n", current_student_count);
                        fclose(file_pointer);
                    }

                    file_pointer = fopen("ids.txt", "wt");
                    if (file_pointer != NULL) {
                        for (int i = 0; i < current_student_count; i++) {
                            fprintf(file_pointer, "%i\n", local_students[i].id);
                        }
                        fclose(file_pointer);
                    }

                    file_pointer = fopen("names.txt", "wt");
                    if (file_pointer != NULL) {
                        for (int i = 0; i < current_student_count; i++) {
                            fprintf(file_pointer, "%s\n", local_students[i].name);
                        }
                        fclose(file_pointer);
                    }

                    printf("All data saved successfully. Returning to main menu...\n");
                } else {
                    printf("Invalid option! Please enter 1, 2, 3, or 4.\n\n");
                }
            } while (student_option != 4);

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 19) {
            printf("\n================================================================\n");
            printf("              CPF Validator (Final Assessment)\n");
            printf("================================================================\n\n");

            char cpf_input[MENU_CPF_SIZE + 1];
            int cpf_digits[MENU_CPF_DIGITS_SIZE];
            int cpf_digits_size = 0;

            while (1) {
                printf("Enter a CPF to be validated: ");
                scanf("%s", cpf_input);

                menu_clean_cpf(cpf_input, cpf_digits, &cpf_digits_size);

                if (cpf_digits_size != MENU_CPF_DIGITS_SIZE) {
                    printf("\nError: The CPF must contain exactly 11 numeric digits.\n\n");
                    continue;
                }

                break;
            }

            if (menu_cpf_all_equal(cpf_digits) == 1 ||
                menu_check_cpf(cpf_digits, 9) != 0 ||
                menu_check_cpf(cpf_digits, 10) != 0) {
                printf("\nThis CPF is invalid.\n");
            } else {
                printf("This CPF is valid.\n");
            }

            printf("\n================================================================\n\n");
        } else if (exercise_choice == 20) {
            printf("\n================================================================\n");
            printf("                   Exiting program. Goodbye!\n");
            printf("================================================================\n\n");
        } else {
            printf("\n================================================================\n");
            printf("        Invalid selection! Please enter a number 1 to 20.\n");
            printf("================================================================\n\n");
        }

    } while (exercise_choice != 20);

    return 0;
}
