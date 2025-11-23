#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

extern void imgCvtGrayIntToDouble(int rows, int cols, int* input, double* output);

void generateRandomImage(int* image, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            image[i * cols + j] = rand() % 256;
        }
    }
}

double measureExecutionTime(int rows, int cols, int* input, double* output) {
    LARGE_INTEGER frequency, start, end;
    QueryPerformanceFrequency(&frequency);

    QueryPerformanceCounter(&start);
    imgCvtGrayIntToDouble(rows, cols, input, output);
    QueryPerformanceCounter(&end);

    return (double)(end.QuadPart - start.QuadPart) * 1000000 / frequency.QuadPart; // this is by microseconds
}

void benchmark(int rows, int cols) {
    int size = rows * cols;
    int runs = 30;
    double totalTime = 0.0;

    int* inputImage = malloc(size * sizeof(int));
    double* outputImage = malloc(size * sizeof(double));

    if (!inputImage || !outputImage) {
        printf("Memory allocation failed!\n");
        free(inputImage);
        free(outputImage);
        return;
    }

    printf("Running %d randomized iterations...\n", runs);

	// should run 30 times with 30 different random images
    for (int i = 0; i < runs; i++) { 
        generateRandomImage(inputImage, rows, cols);
        double time = measureExecutionTime(rows, cols, inputImage, outputImage);
        totalTime += time;
    }

    double avgTime = totalTime / runs;

    printf("Average execution time over %d runs: ", runs);
    printf("%.3f microseconds\n\n", avgTime);

    free(inputImage);
    free(outputImage);
}


int main() {
    
	printf("10 by 10 Image Benchmark:\n");
	benchmark(10, 10);
    printf("100 by 100 Image Benchmark:\n");
    benchmark(100, 100);
    printf("1000 by 1000 Image Benchmark:\n");
    benchmark(1000, 1000);


    return 0;
}
