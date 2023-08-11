/*
Write a program that sums a series of integers enetered by the user
*/
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%d", &n);
    while (n != 0)
    {
        sum += n;        // Add the entered number to the sum
        scanf("%d", &n); // Read the next number
    }

    printf("The sum is: %d\n", sum);
    return 0;
}