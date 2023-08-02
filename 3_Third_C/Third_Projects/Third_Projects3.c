#include <stdio.h>

/* */

int main()
{
    int num10, num8, res1, res2, res3, res4, remainder1, remainder2, remainder3, remainder4, remainder5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num10);

    remainder1 = num10 % 8;
    res1 = num10 / 8;
    remainder2 = res1 % 8;
    res2 = res1 / 8;
    remainder3 = res2 % 8;
    res3 = res2 / 8;
    remainder4 = res3 % 8;
    res4 = res3 / 8;
    remainder5 = res4 % 8;

    num8 = remainder5 * 10000 + remainder4 * 1000 + remainder3 * 100 + remainder2 * 10 + remainder1;
    printf("In octal, your number is: %d", num8);

    return 0;
}