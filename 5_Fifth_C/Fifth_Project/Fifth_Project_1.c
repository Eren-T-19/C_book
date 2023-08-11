/*
Write a program that finds the largest in series of numbers entered by the user.
The program must prompt the user to enter numbers one by one.When the user enters 0
or a negative number, the program must display the largest nonnegative number entered:
*/

#include <stdio.h>

int main()
{
    float controller, largest, n;

    controller = 1;
    largest = 0;
    while (controller > 0)
    {
        printf("Enter a number: ");
        scanf("%f", &n);
        if (largest < n)
        {
            largest = n;
        }
        if (n <= 0)
        {
            controller = 0;
        }
    }
    printf("The largest number entered was %.4f", largest);

    return 0;
}