#include <stdio.h>
/* Write a program that calculates the remaining balance on a loan after the first Second, and third
monthly payments*/

// P = [r*PV] / [1 - (1 + r)^-n]

/*P is the monthly payment
r is the monthly interest rate (annual rate / 12)
PV is the present value or principal amount of the loan
n is the total number of payments (typically number of years * 12)*/
#include <stdio.h>

int main()
{
    float loan, rate, payment, monthly_rate;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    monthly_rate = (rate / 100) / 12;

    float first_interest, second_interest, third_interest;

    first_interest = loan * monthly_rate;
    loan = loan - (payment - first_interest);

    second_interest = loan * monthly_rate;
    loan = loan - (payment - second_interest);

    third_interest = loan * monthly_rate;
    loan = loan - (payment - third_interest);

    printf("\nBalance remaining after first payment: %.2f\n", loan + first_interest);
    printf("\nBalance remaining after second payment: %.2f\n", loan + second_interest);
    printf("\nBalance remaining after third payment: %.2f\n", loan);

    return 0;
}
