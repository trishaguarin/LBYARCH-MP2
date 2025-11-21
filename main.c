#include <stdio.h>
#include <stdlib.h>

extern void imgCvtGrayIntToDouble(int rows, int cols, int* input, double* output);

void displayMatrix(int rows, int cols, double* matrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.2f ", matrix[i * cols + j]);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    int cols;

    printf("Enter height: ");
    scanf_s("%d", &rows);
    printf("Enter width: ");
    scanf_s("%d", &cols);

    if (rows < 0 || cols < 0) {
        printf("Invalid matrix size\n");
        return 1;
    }

    int* input = (int*)malloc(rows * cols * sizeof(int));
    double* output = (double*)malloc(rows * cols * sizeof(double));

    if (!input || !output) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d x %d elements:\n", rows, cols);

    for (int i = 0; i < rows * cols; i++) {
        scanf_s("%d", &input[i]);
    }

    imgCvtGrayIntToDouble(rows, cols, input, output);

    displayMatrix(rows, cols, output);

    free(input);
    free(output);

    return 0;
}