// Recursive Fibonacci Sequence: generates sequence terms and step-by-step additions recursively
#include <stdio.h>

void make_fibonacci_sequence(int limit, int loop, int current, int next) {
    if (loop > limit) {
        return;
    }

    printf("%i ", current);
    make_fibonacci_sequence(limit, loop + 1, next, current + next);
}

void make_fibonacci_sum(int limit, int loop, int current, int next) {
    if (loop >= limit - 1) {
        return;
    }

    int sum = current + next;
    printf("%i + %i = %i\n", current, next, sum);
    make_fibonacci_sum(limit, loop + 1, next, sum);
}

int main(void) {
    int limit = 0;

    printf("Insert a limit number greater than 0 for the fibonacci sequence: ");
    scanf("%i", &limit);

    while (limit <= 0) {
        printf("You didn't input a valid number! Please, insert again: ");
        scanf("%i", &limit);
    }

    printf("\nSequence:\n");
    make_fibonacci_sequence(limit, 1, 1, 1);

    if (limit > 1) {
        printf("\n\nSums:\n");
        make_fibonacci_sum(limit, 1, 1, 1);
    }

    printf("\n");
    return 0;
}
