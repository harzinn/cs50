#include <cs50.h>
#include <stdio.h>

int factorial(int n);

int main(void) {
    // Get positive value for n
    int n = 5;
    // do {
    //     n = get_int("n: ");
    // }
    // while (n < 0);

    // Print factorial
    printf("%i\n", factorial(n));
    return 0;
}

int factorial(int n) {
    // IN PROGRESS: Implement factorial

    // Base case
    if (n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}