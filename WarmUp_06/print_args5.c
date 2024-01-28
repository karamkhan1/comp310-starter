#include <stdio.h>

/**
* Objective: Implement a program to calculate the
 * factorial of a number using recursion.
*/

int factorial(int n) {
    // Base Case
    if (n == 0) {
        return 1;
    }
    // Sub-problem is current number multiplied by previous factorial
    return n * factorial(n - 1);
}

void main() {
    int number = 5;
    printf("Factorial of %d is: %d\n", number, factorial(number));
}
