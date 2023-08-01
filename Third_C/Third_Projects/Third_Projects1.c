#include <stdio.h>

/*
Write a program that asks the user to enter a two-digit number,
then prints the number with its digits reversed.
*/

int main()
{
    int num, reversed_num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    reversed_num = (num % 10) * 10 + num / 10;

    printf("The reversal is: %d", reversed_num);
    return 0;
}
