<div align="center">

  🇧🇷 **[Versão em Português](README.pt-BR.md)**
  <br>

  # ⚙️ Consolidated Menu - Coursework Exercise Suite (`consolidated_menu.c`)

</div>

---

## 🎯 Problem Statement

Unify the four core laboratory exercises developed across Classes 01 through 05 into an interactive dashboard for the terminal, featuring structured top-level variable declarations, standardized 64-character divider aesthetics, and a clean exit option.

---

## 💻 Source Code

```c
// Consolidated Menu: Coursework Exercise Suite
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

    printf("\n================================================================\n");
    printf("              Welcome! Please, select an exercise:\n");
    printf("================================================================\n");
    printf("1 - Even or Odd\n");
    printf("2 - Passed or Not\n");
    printf("3 - One Item Shop\n");
    printf("4 - Dessert Shop\n");
    printf("5 - Exit\n");
    printf("================================================================\n\n");
    printf("Choice (1-5): ");

    scanf(" %i", &exercise_choice);

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
        }

        if (final_price > 0) {
            printf("\nVery good! With that discount, you only have to pay $%.2f, instead of $%.2f.\n", final_price, initial_price);
        }

        printf("\n================================================================\n\n");
    } else if (exercise_choice == 4) {
        printf("\n================================================================\n");
        printf("                         Dessert Shop\n");
        printf("================================================================\n\n");

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
        printf("                   Exiting program. Goodbye!\n");
        printf("================================================================\n\n");
    } else {
        printf("\n================================================================\n");
        printf("         Invalid selection! Please enter a number 1 to 5.\n");
        printf("================================================================\n\n");
    }

    return 0;
}
```

---

## 🖥️ Terminal Output

```text
================================================================
              Welcome! Please, select an exercise:
================================================================
1 - Even or Odd
2 - Passed or Not
3 - One Item Shop
4 - Dessert Shop
5 - Exit
================================================================

Choice (1-5): 1

================================================================
                         Even or Odd?
================================================================

Enter a number: 42

Even!

================================================================
```

---

## 💡 Key Concepts Applied

- **Top-Level Variable Declarations:** Consistent with early C programming pedagogy, declaring all variables at the beginning of the scope provides clear visibility into all allocated state before executing statements.
- **Harmonized UI Framing:** Standardizes all section headers and footers with a 64-character `=` banner for clean visual continuity.
- **Interactive Program Dispatching:** Uses a numeric choice (1 to 5) to navigate between individual problem modules.
- **Input Hygiene:** Uses `scanf(" %i")` and `scanf(" %c")` with leading spaces to prevent newline carry-over in the input buffer.
- **Clean Exit Handling:** Option 5 exits directly, with out-of-range inputs caught by the final `else`.

---

## 🚀 How to Run

```bash
# Compile and run with GCC
mkdir -p dist && gcc -Wall -O2 src/06-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu

# Or compile and run with Clang (macOS default)
mkdir -p dist && clang -Wall -O2 src/06-consolidated-menu/consolidated_menu.c -o dist/consolidated_menu && ./dist/consolidated_menu
```
