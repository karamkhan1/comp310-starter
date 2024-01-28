#include <stdio.h>

/**
* Objective: Write a program to perform matrix
 * addition and matrix multiplication on 2D arrays.
*///fix commit

void addMatrices(int rows, int cols, int a[rows][cols], int b[rows][cols], int sum[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int rowsA, int colsA, int rowsB, int colsB, int a[rowsA][colsA], int b[rowsB][colsB], int product[rowsA][colsB]) {
    if (colsA != rowsB) {
        printf("Matrices do not conform for multiplication.\n");
        return;
    }
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            product[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};

    int sum[2][2];

    int product[2][2];

    // Check dimensions for addition
    if (sizeof(matrix1) != sizeof(matrix2)) {
        printf("Matrices don't conform for addition\n");
        return;
    }

    addMatrices(2, 2, matrix1, matrix2, sum);
    multiplyMatrices(2, 2, 2, 2, matrix1, matrix2, product);

    printf("Matrix Addition:\n");
    printMatrix(2, 2, sum);
    printf("Matrix Multiplication:\n");
    printMatrix(2, 2, product);
}

