/*
Write a program that takes a first name and last name entered by the user and displays the
last name, a comma, and the first initial, followed by a period
*/

#include <stdio.h>

int main()
{
    char ch;
    int status = 0;
    printf("Enter a senctence: ");
    ch = getchar();
    while (ch != '\n')
    {

        if (ch == ' ')
        {
            status = 1;
        }
        else if (status == 1)
        {
            printf(",");
            printf(" %c.", ch);
            return 0;
        }
        printf("%c", ch);
        ch = getchar();
    }
}
