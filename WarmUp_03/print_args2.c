#include <stdio.h>

/**
* Objective: Write a program to initialize an array of
 * integers and find the sum and average of the elements.
*/

void main(){
    // Initialize array with the supplied numbers, and
    // helper variables
    int numbers[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int len = sizeof(numbers)/sizeof(numbers[0]);
    // For loop that adds all the numbers to sum
    for (int i = 0; i < len; i++) {
        sum += numbers[i];
    }
    // Double-cast for average variable
    double average = sum / (double) len;

    // Print statements
    printf("Sum: %d\n", sum);
    printf("Average: %f\n", average);
}