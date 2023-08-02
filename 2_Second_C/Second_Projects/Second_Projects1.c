/*Write a Program that accepts a date from the user in the form mm/dd/yyyy andn then displays it in form yyyymmdd */

#include <stdio.h>

int main()
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%d%d%d", year, month, day);
    return 0;
}
