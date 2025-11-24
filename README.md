# LBYARCH-MP2
# Grayscale Image Representation Conversion

## Project Description

A grayscale image can be represented in a 2-dimensional array, with each cell representing the pixel value. Some Libraries represent the pixels using 8 8-bit unsigned integers. 0 for black, 255 for white, and all other gray values in between. While some Libraries represent it as double float values between 0 to 1. 0 for black, 1 for white, and all other gray values in between.

The algorithm converts each pixel value of the grayscale image from its unsigned integer to its double representation. This project implements and compares the performance of a simple grayscale image representation implemented in C and x86-64 Assembly.

## Execution Time
| Image | Image Size | Execution Time |
|---------|------------|----------------|
| C | 10 x 10 | 1.077 microseconds |
| C | 100 x 100 | 103.460 microseconds |
| C | 1000  x 1000 | 4118.913 microseconds |
| Assembly | 10  x 10 | 0.383 microseconds |
| Assembly | 100  x 100 | 25.877 microseconds |
| Assembly | 1000  x 1000 | 2312.103 microseconds |

## Short Performance Analysis
The benchmark results clearly show that the x86-64 Assembly implementation of the function outperforms the C implementation of the function across all image sizes tested. For the 10x10 image, Assembly runs 2.8x faster C. For 100x100, Assembly achieves its highest performance boost at 4.0× faster than C. For the 1000x1000 image, the advantage of Assembly slightly decreases to 1.8x faster than C, but still shows a significant improvement. 

Despite the varying speed improvement of the Assembly implementation across the different image sizes, it still consistently performs faster than the C implementation, highlighting the efficiency of a low-level programming language in handling instructions and memory operations.

## Program Output
#### Manual Input
![Screenshot of the output of the program set to manual input](/img/manual_input.png)
#### Random Pixel Values
![Screenshot of the output of the program set to random pixel values](/img/random_image.png)
#### C Benchmark
![Screenshot of the output of the program set to benchmark c](/img/c_benchmark.png)
#### Assembly Benchmark
![Screenshot of the output of the program set to benchmark assembly](/img/asm_benchmark.png)

## How to Run
1. Clone the repository
2. Using Visual Studio, open the .slnx file
3. Replace main.c contents with main.c, generaterandom.c, or averageexecutiontime.c for manual input, random image values, or Assembly benchmark, respectively.
4. Build and run in Visual Studio
5. For the C benchmark, run pureCcode.exe or manually build pureCcode.c and run the .exe file

## Video Demo
[Youtube Link](https://youtu.be/3cTmIiAlZjA)

## Authors
Ronnie Abiog Jr.

Trish Ann Danielle Aguarin

