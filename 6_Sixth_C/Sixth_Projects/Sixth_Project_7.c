/*
https://en.wikipedia.org/wiki/Newton%27s_method
Write a program that uses Newton's method to compute the square root of a positive floating-point number:

Enter a positive number: 3
Square root: 1.73205
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    double average, start = 1, divide;

    printf("Enter a positive number: ");
    scanf("%d", &number);
    average = (number + start) / (double)2;
    divide = (double)number / start;

    while (fabs(divide - start) > .00001)
    {
        start = average;
        divide = (double)number / start;
        average = (divide + start) / (double)2;
    }
    printf("Square root: %lf", average);

    return 0;
}