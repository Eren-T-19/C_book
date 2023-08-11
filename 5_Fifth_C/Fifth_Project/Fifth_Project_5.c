#include <stdio.h>

/* Write a program that prompts the user to enter a number n,then prints all even squares between 1 and n.*/

int main()
{
    int n, i;

    printf("Please enter a number: ");
    scanf("%d", &n);

    for (i = 2; i * i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i * i);
        }
    }

    return 0;
}