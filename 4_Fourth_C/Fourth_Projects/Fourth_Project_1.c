/*
Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:
*/

#include <stdio.h>

int main()
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if ((hour == 12 || hour == 00) && minute == 0)
    {
        if (hour == 12)
        {
            printf("It is 12:00 PM");
        }
        else
        {
            printf("It is 12:00 AM");
        }
    }

    else if (hour > 12)
    {
        hour -= 12;
        printf("It is %d:%d PM", hour, minute);
    }
    else if (hour < 12)
    {
        printf("It is %d:%d AM", hour, minute);
    }
    else
    {
        printf("Invalid time");
    }

    return 0;
}