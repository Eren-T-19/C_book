/*
Write a program that prints a one-month calender.
The user specifies the number of days in the month and the day of the week on which the month begins
*/

#include <stdio.h>

int main()
{
    int i, counter, day_c, starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &day_c);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    for (i = 0; i < starting_day; i++)
    {
        printf("  ");
    }
    counter = starting_day;
    for (i = 1; i <= day_c; i++)
    {

        printf("%2d ", i);
        if (counter % 7 == 0)
        {
            printf("\n");
        }
        ++counter;
    }

    return 0;
}