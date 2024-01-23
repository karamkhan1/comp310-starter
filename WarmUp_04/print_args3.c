#include <stdio.h>

/**
* Objective: Create a function to reverse a character
 * array (string) without using library functions.
*/

void main(){
    // Initialize the string as a char array
    char str[] = "Hello";
    // Initialize length variable subtracting one
    // due to ending NULL count
    int len = sizeof(str) / sizeof(str[0]) - 1;
    // Swap each character until you reach the midpoint
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    // Print the reversed string
    printf("%s", str);
}