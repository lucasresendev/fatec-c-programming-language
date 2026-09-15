// Dessert Shop: Multi-branching and Fallthrough Pricing with switch/case
#include <stdio.h>

int main(void) {
    int dessert_choice = 0;
    float dessert_price = 0.00;

    printf("Welcome! Please, choose an option:\n\n");
    printf("================================================================\n");
    printf("1 - Simple: ice cream only ($10)\n");
    printf("2 - Topping: ice cream with chocolate syrup (plus $3)\n");
    printf("3 - Complete: ice cream with chocolate syrup and M&M's (plus $5)\n");
    printf("================================================================\n\n");
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

    // Additive pricing using deliberate switch fallthrough
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

    return 0;
}
