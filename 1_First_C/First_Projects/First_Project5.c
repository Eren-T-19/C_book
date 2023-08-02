#include <stdio.h>
/*Write a program that asks the user to enter U.S. dollar amount and then shows how to pay that
  amount using the smallest number of $20,$ 10, $5 and $1 bills.*/

int main()
{
    int dollar, bills_20, bills_10, bills_5, bills_1;
    printf("Please Enter a dollar amaount: ");
    scanf("%d", &dollar);
    bills_20 = dollar / 20;
    dollar = dollar - (20 * bills_20);
    bills_10 = dollar / 10;
    dollar = dollar - (10 * bills_10);
    bills_5 = dollar / 5;
    dollar = dollar - (5 * bills_5);
    bills_1 = dollar / 1;
    printf("\n$20 bills: %d\n", bills_20);
    printf("\n$10 bills: %d\n", bills_10);
    printf("\n$5 bills: %d\n", bills_5);
    printf("\n$1 bills: %d\n", bills_1);
    return 0;
}
