#include <stdio.h>
/* ask the user their average grocery payment*/

int main()
{
    int dollars, cents;
    float taxed_salary;
    printf("Please enter you average grocery payment by dollar amount and cents amount\nDollar: \nCents: \n");
    scanf("%d %d", &dollars, &cents);
    taxed_salary = (105.0f / 100.0f) * (dollars + 0.01 * cents);
    printf("Taxed version: %.2f", taxed_salary);
    return 0;
}