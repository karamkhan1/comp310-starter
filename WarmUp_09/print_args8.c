#include <stdio.h>

/**
* Objective: Write a program to create a file,
 * write some data into it, and then read the
 * data from the file.
*/

void main() {

    // Writing to the file
    char *filename = "file.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }
    fprintf(file, "Hello, World!\n");
    fclose(file);

    // Reading from the file
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }
    char line[256];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
}
