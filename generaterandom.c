#include <stdio.h>
#include <stdlib.h>

extern void imgCvtGrayIntToDouble(int rows, int cols, int* input, double* output);

void generateRandomImage(int* image, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            image[i * cols + j] = rand() % 256;
        }
    }
}

void printIntImage(int* image, int rows, int cols) {
    printf("Input Image (int):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", image[i * cols + j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printDoubleImage(double* image, int rows, int cols) {
    printf("\nOutput Image (double):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.2f ", image[i * cols + j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int rows, cols;

    printf("Enter height width of image: ");
    scanf_s("%d %d", &rows, &cols);

    int* arr = malloc(rows * cols * sizeof(int));
    double* darr = malloc(rows * cols * sizeof(double));

	generateRandomImage(arr, rows, cols); //input image is automatically generated 

	printIntImage(arr, rows, cols);
    imgCvtGrayIntToDouble(rows, cols, arr, darr);
    printDoubleImage(darr, rows, cols);

    free(arr);
    free(darr);
    return 0;
}
