/* Use a do loop to display a two-digit number */

#include <stdio.h>

int main()
{
    int n, i, remainder, reversed_n;

    printf("Enter a number: ");
    scanf("%d", &n);

        reversed_n = 0;
    do
    {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10;
    } while (n != 0);

    printf("Reversed number is %d", reversed_n);

    return 0;
}
