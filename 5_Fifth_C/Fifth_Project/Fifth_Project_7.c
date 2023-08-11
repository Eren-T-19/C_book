#include <stdio.h>

/* Write a program that approximates e by comparing value of: e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! */

int main()
{
    int n, i, bate;
    float e, factorial_calc;
    printf("Enter an n value to approximate aprroximate the e value: ");
    scanf("%d", &n);
    e = 0.0;

    for (i = 1; i <= n; i++)
    {
        factorial_calc = 1;
        bate = 1;
        do
        {
            factorial_calc *= 1.0f / bate;
            bate++;
        } while (bate <= i);
        e += factorial_calc;
    }

    printf("The approximate value of e: %f", e + 1);

    return 0;
}