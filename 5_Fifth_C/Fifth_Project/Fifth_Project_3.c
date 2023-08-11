/*
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:
*/

#include <stdio.h>

int main()
{
    int num1, num2, controller, low1, low2, largest_divisor;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num1, &num2);

    for (controller = 1; controller <= num1 && controller <= num2; controller++)
    {
        if ((num1 % controller == 0) && (num2 % controller == 0))
        {
            largest_divisor = controller;
        }
        else
        {
            largest_divisor = 1;
        }
    }

    low1 = num1 / largest_divisor;
    low2 = num2 / largest_divisor;

    printf("%d/%d", low1, low2);
}