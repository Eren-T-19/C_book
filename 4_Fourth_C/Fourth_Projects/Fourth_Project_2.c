/* INCOME TAX CALCULATOR */

#include <stdio.h>

int main()
{
    float income, tax;

    printf("Please etner your monthly income: ");
    scanf("%f", &income);

    if (income < 750)
    {
        tax = income * (0.01);
        printf("Your monthly tax is: %.2f$", tax);
    }
    else if (income > 750 && income <= 2250)
    {
        tax = 7.5 + (income * 0.02);
        printf("Your monthly tax is: %.2f$", tax);
    }
    else if (income > 2250 && income <= 3750)
    {
        tax = 37.5 + (income * 0.03);
        printf("Your monthly tax is: %.2f$", tax);
    }
    else
    {
        tax = 230 + (income * 0.06);
        printf("Your monthly tax is: %.2f$", tax);
    }

    return 0;
}
