// String Manipulation: string I/O, manual copy with null terminator, strcmp comparison, and strcat concatenation
#include <stdio.h>
#include <string.h>

int main(void) {
    int char_index = 0;
    char first_name[30];
    char second_name[30];
    char copied_name[30];
    char concatenated_names[60];

    printf("Insert one name: ");
    scanf("%s", first_name);

    printf("Insert another name: ");
    scanf("%s", second_name);

    // Copy character by character until the null terminator '\0'
    for (char_index = 0; first_name[char_index] != '\0'; char_index++) {
        copied_name[char_index] = first_name[char_index];
    }
    // Add '\0' at the end to close the copied string
    copied_name[char_index] = '\0';

    printf("\nFirst letter of 1st name: %c\n", first_name[0]);
    printf("Manual copy of 1st name: %s\n", copied_name);

    // Compare strings with strcmp (returns 0 when equal)
    if (strcmp(first_name, second_name) == 0) {
        printf("The names are equal!\n");
    } else {
        printf("The names are not equal!\n");
    }

    // Start with an empty string before using strcat
    concatenated_names[0] = '\0';
    strcat(concatenated_names, first_name);
    strcat(concatenated_names, second_name);

    printf("Concatenated names: %s\n", concatenated_names);

    return 0;
}
