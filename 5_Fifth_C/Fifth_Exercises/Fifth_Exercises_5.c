#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number to check if it is prime or not: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Enter something greater than 1");
        return 0;
    }

    for (i = 2; (i * i) <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not prime", n);
            break;
        }
    }

    if (i * i > n)
    {
        printf("%d is prime", n);
    }
    return 0;
}
