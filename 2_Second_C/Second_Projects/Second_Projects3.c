#include <stdio.h>
/* Write a program that breaks down an ISBN entered by the user*/

int main()
{
    int gsi, g_identifier, p_code, i_number, c_digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &g_identifier, &p_code, &i_number, &c_digit);
    printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", gsi, g_identifier, p_code, i_number, c_digit);

    return 0;
}