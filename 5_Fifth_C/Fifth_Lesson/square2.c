/* Prints a table of squares using for statement */

#include <stdio.h>

int main()
{
    int n, i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\n%10d %10d\n", i, i * i);
    }

    return 0;
}