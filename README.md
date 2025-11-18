# LBYARCH-MP2

A grayscale image is internally represented as a 2D array. Size is defined by the number of pixels in a row (width), and number of pixels in a column (height). Each cell represents the pixel value. Pixel values in grayscale are represented as white, black, and shades of gray using different numerical data type representation depending on the library used.
Some Libraries represent using 8 bit unsigned integer. 0 for black, 255 for white, 64 light gray, 191 dark gray, and all other gray values in between.
Image =
64, 89, 114, 84
140, 166, 191, 84
216, 242, 38, 84
Some Image Processing Libraries represent grayscale images as having double float based pixel values between 0 to 1. 0 for black, 1 for white, 0.25 light gray, 0.75 darker gray, and other gray values in between.

Image =
0.25, 0.35, 0.45, 0.33
0.55, 0.65, 0.75, 0.33
0.85, 0.95, 0.15, 0.33
To enable using different image processing libraries simultaneously, conversion from one format to the other has to be done. Perform Mapping from uint8 based integer grayscale to double precision float representation. Each pixel is calculated using ration and proportion equation
f/i = 1/255
Where f is the double float based pixel value and i is the integer based pixel value.

Task:
Implement a program that convers the grayscale image representation from int based to float based using C and x86 assembly language. Implement the function imgCvtGrayIntToDouble().

*Required to use functional scalar SIMD registers
*Required to use functional scalar SIMD floating-point instructions
Input: height, width, integer pixel values
Example,
3 4
64, 89, 114, 84
140, 166, 191, 84
216, 242, 38, 84

Output: Double Floatpixel values
0.25, 0.35, 0.45, 0.33
0.55, 0.65, 0.75, 0.33
0.85, 0.95, 0.15, 0.33

Note: 
C is responsible for collecting the inputs, allocating memory spaces for the images, and printing the outputs.
Function implemented in assembly is responsible for calculating and converting the data type from the input int pixels into the output double float pixels
Time the asm function only for input image size width*height = [10*10, 100*100, and 1000*1000]. If 1000*1000 is impossible, you may reduce it to the point your machine can support. You may use a random number generator to generate pixel values for the input
You must run at least 30 times to get the average execution time
For the data, you may initialize each pixrl with the same or different random value
You will need to check the correctness of your output
Output in GitHub 
Github readme contains the following (C and x86-64):
Execution time and short analysis of the performance
Take a screenshot of the program output with the correctness check ©..
Short videos (5-10 mins) showing your source code, compilation, and execution of the C and x86-84 program
Submit all files needed to run your project
