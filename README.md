# LBYARCH-MP2
## Grayscale Image Representation Conversion
### C and x86-64 Assembly Performance Comparison

## Project Description

A grayscale image can be represented in a 2 dimensional array with each cell representing the pixel value. Some Libraries represent the pixels using 8 bit unsigned integer. 0 for black, 255 for white, and all other gray values in between. While some Libraries represent it as double float values between 0 to 1. 0 for black, 1 for white, and all other gray values in between.

The algorithm converts each pixel value of the grayscale image from its unsigned integer to its double representation. This project implements and compares the performance of a simple grayscale image representation implemented in C and x86-64 Assembly.

## Execution Time
| Version | Image Size | Execution Time |
|---------|------------|----------------|
| C | 10 x 10 | - |
| C | 100 x 100 | - |
| C | 1000  x 1000 | - |
| Assembly | 10  x 10 | 0.390 microseconds |
| Assembly | 100  x 100 | 32.170 microseconds |
| Assembly | 1000  x 1000 | 2268.020 microseconds |

## Short Performance Analysis


## Program Output
#### Manual Input
![Screenshot of the output of the program set to manual input](/img/manual_input.png)
#### Random Pixel Values
![Screenshot of the output of the program set to random pixel values](/img/random_image.png)
#### Benchmark
![Screenshot of the output of the program set to benchmark](/img/benchmark.png)
## How to Run

## Video Demo
[Youtube Link](https://youtu.be/3cTmIiAlZjA)

## Authors
Ronnie Abiog Jr.

Trish Ann Danielle Aguarin

