// Reverse Characters: reads characters from the user and prints them in reverse order
#include <stdio.h>

int main(void) {
    int char_count = 0;

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

    return 0;
}
