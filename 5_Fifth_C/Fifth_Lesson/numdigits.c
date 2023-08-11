/*Calculates the number of digits in an integer*/

#include <stdio.h>

int main()
{
    int num, digits = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &num);

    do
    {
        num /= 10;
        digits++;
    } while (num > 0);
    printf("The number has %d digit(s).\n", digits);

    return 0;
}