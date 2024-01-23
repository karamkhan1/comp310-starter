#include <stdio.h>

/**
* Objective: Create a program that takes two numbers
 * as input and performs addition, subtraction,
 * multiplication, and division.
*/

void main(){
    // Initialize the two input variables
    float num1;
    float num2;
    // Print and initialize the two variables
    // from the user through the console
    printf("Enter the first value: ");
    scanf("%f", &num1);
    printf("Enter the second value: ");
    scanf("%f", &num2);

    // Print the four operations
    printf("Sum: %f\n", (num1 + num2));
    printf("Difference: %f\n", (num1 - num2));
    printf("Product: %f\n", (num1 * num2));
    printf("Quotient: %f\n", (num1 / num2));
}