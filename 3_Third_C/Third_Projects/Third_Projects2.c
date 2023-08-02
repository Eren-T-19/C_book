#include <stdio.h>

/*
Write a program that asks the user to enter a three-digit number,
then prints the number with its digits reversed.
*/

int main()
{

    int num, digit1, digit2, digit3, reversed_num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    digit1 = num / 100;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;

    reversed_num = (digit3 * 100) + (digit2 * 10) + digit1;

    printf("Reversed number: %d\n", reversed_num);

    return 0;
}