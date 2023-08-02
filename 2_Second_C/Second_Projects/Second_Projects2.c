#include <stdio.h>
// Write a program that formats product information entered by the user.

int main()
{
    int number, mm, dd, yyyy;
    float unit_price;
    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("    \t\tPrice\t\tDate\n");
    printf("%d  \t\t$ %.2f\t\t%d/%d/%d", number, unit_price, mm, dd, yyyy);
    return 0;
}