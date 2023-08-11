/*
Modify square2.c (Fifth_lesson) so that it pauses after every 24 squares and displays the following message:
    Press Enter to continue

 */

#include <stdio.h>

int main()
{
    long n, i;
    char ch;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);
    getchar();

    for (i = 1; i <= n; i++)
    {

        if (i % 24 == 0)
        {
            printf("Press enter to continue: ");
            ch = getchar();
            printf("\n\t\t%10ld \t\t%10ld\n", i, i * i);
            if (ch != '\n')
            {
                printf("\nEnding the program...\n");
                return 0;
            }
        }
        else
        {
            printf("\t\t\t\t\t\n%10ld %10ld\n", i, i * i);
        }
    }

    return 0;
}
