/*
Write a program that translates an alphabetic phone number into numeric form
*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter phone number: ");
    ch = getchar();
    while (ch != '\n')
    {
        printf("%d", ch);
        ch = getchar();
    }

    return 0;
}
