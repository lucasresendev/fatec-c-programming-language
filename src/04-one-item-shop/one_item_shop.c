// One Item Shop: Discount Selector using else-if chain
#include <stdio.h>

int main(void) {
    float initial_price = 0.0;
    char discount_choice = ' ';
    float final_price = 0.0;

    printf("\n***** ADM MODE *****\n");
    printf("Insert an Initial Price: ");
    scanf(" %f", &initial_price);

    printf("\n\n=====================\n");
    printf("    One Item Shop\n");
    printf("=====================\n\n");

    printf("Welcome! We have 4 Discount Options today!\n\n");

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
        printf("You didn't write a letter from 'a' to 'd'.\n");
        printf("Your final price = $%.2f.\n", initial_price);
    }

    if (final_price > 0) {
        printf("\nVery good! With that discount, you only have to pay $%.2f, instead of $%.2f.\n\n", final_price, initial_price);
    }

    return 0;
}
