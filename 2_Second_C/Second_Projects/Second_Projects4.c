#include <stdio.h>

/*
Write a program rhar prompts the user to enter a telephone number in the form (xxx) xxx-xxxx
then displays the number in the form xxx.xxx.xxxx
*/

int main()
{

    int first_g, second_g, third_g;
    printf("Enter phone number [(xxx) xxx-xxxx]");
    scanf("(%d) %d-%d", &first_g, &second_g, &third_g);
    printf("%d.%d.%d", first_g, second_g, third_g);
    return 0;
}