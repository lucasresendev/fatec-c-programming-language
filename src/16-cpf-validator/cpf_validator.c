// CPF validator
//
// A CPF has 11 digits: 9 base digits + 2 check digits.
// The two check digits are computed from the 9 base digits:
//
//   1) First check digit:
//      - Multiply the first 9 digits by weights 10, 9, 8, ..., 2
//      - Sum the products (weighted sum)
//      - remainder = weighted_sum % 11
//      - if remainder < 2: first check digit = 0
//        else:             first check digit = 11 - remainder
//
//   2) Second check digit:
//      - Multiply the first 10 digits (9 base + first check digit) by weights 11, 10, ..., 2
//      - Sum the products
//      - remainder = weighted_sum % 11
//      - if remainder < 2: second check digit = 0
//        else:             second check digit = 11 - remainder
//
// A CPF is valid if the given last 2 digits match the computed ones.
// CPFs where all 11 digits are identical (for example: 111.111.111-11) are
// considered invalid, even though the math checks out.
//
// Some facts on the code:
//
//            0 = success (no error); false (in boolean)
//            1 = error; true (in boolean)
// 
//            & address-of operator (&x  gives the address of x)
//            * = dereference operator (*x  accesses the value at &x)
//            I used those just one time, to make a function able to change something outside it
//
//            continue = skips the rest of the iteration of the loop and starts the next
//            break = breaks the loop

#include <stdio.h>

// Formatted CPF "xxx.xxx.xxx-xx" size
#define CPF_SIZE 14
// CPF number "xxxxxxxxxxx" size
#define CPF_DIGITS_SIZE 11

// Function that returns an error
int print_error(void)
{
    printf("\nThis CPF is invalid.\n");
    return 1;
}

// Clean CPF: stores "CPF_digits" and "input_digits_size" directly on the memory
void clean_CPF(const char input[], int CPF_digits[], int *input_digits_size)
{
    *input_digits_size = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >= '0' && input[i] <= '9')
        {
            // It only stores until it reaches the end of the array
            if (*input_digits_size < CPF_DIGITS_SIZE)
            {
                CPF_digits[*input_digits_size] = input[i] - '0';
            }
            // It always counts, so we can tell the user if they entered something
            // different than 11 numeric digits
            (*input_digits_size)++;
        }
    }
}

// Function that checks if all digits are identical (e.g. 111.111.111-11)
int all_equal(int CPF_digits[])
{
    for (int i = 1; i < CPF_DIGITS_SIZE; i++)
    {
        if (CPF_digits[i] != CPF_digits[0])
        {
            return 0;
        }
    }
    return 1;
}

// Returns 0 if the check digit matches, 1 if it fails
int check_CPF(int CPF_digits[], int num_digits)
{
    int weighted_sum = 0;

    for (int i = 0; i < num_digits; i++)
    {
        // Since the weights decrease down to 2 (not 1), the starting weight
        // at i = 0 is always num_digits + 1 (10 for 9 digits, 11 for 10 digits)
        int weight = num_digits + 1 - i;
        weighted_sum += CPF_digits[i] * weight;
    }

    // Remainder of the division by 11
    int remainder = weighted_sum % 11;

    // The expected digit
    int expected;
    if (remainder < 2)
    {
        expected = 0;
    }
    else
    {
        expected = 11 - remainder;
    }

    // Since array indices start at 0, index 'num_digits' is the exact position
    // of the check digit we are currently testing (index 9 or index 10)
    if (CPF_digits[num_digits] == expected)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main(void)
{
    // +1 because of the "\0" (NUL character in ASCII)
    char CPF[CPF_SIZE + 1];
    int CPF_digits[CPF_DIGITS_SIZE];
    int input_digits_size;

    // While true, it repeats until valid input length
    while (1)
    {
        printf("Enter a CPF to be validated: ");
        scanf("%s", CPF);

        // Here, we clean every non-numeric digit on the CPF variable and store
        // the clean version inside "CPF_digits" and the size of it inside
        // "input_digits_size". We give the address of the variables to the
        // function so it can access or change them directly in the memory.
        clean_CPF(CPF, CPF_digits, &input_digits_size);

        // Here, the program checks if exactly 11 numeric digits were found.
        if (input_digits_size != CPF_DIGITS_SIZE)
        {
            printf("\nError: The CPF must contain exactly 11 numeric digits.\n\n");
            // Restart the while
            continue;
        }

        // Gets out of the while
        break;
    }

    if (all_equal(CPF_digits) == 1)
    {
        return print_error();
    }

    // First verification digit calculation
    if (check_CPF(CPF_digits, 9))
    {
        return print_error();
    }

    // Second verification digit calculation
    if (check_CPF(CPF_digits, 10))
    {
        return print_error();
    }

    printf("This CPF is valid.\n");
    return 0;
}
