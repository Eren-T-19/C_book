/* Write a program that asks the user to enter two integers, then calculates and displays their
   greatest common divisor.
*/

#include <stdio.h>

int main()
{
    int num1, num2, controller, largest_divisor;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for (controller = 1; controller <= num1 && controller <= num2; ++controller)
    {
        if ((num1 % controller == 0) && (num2 % controller == 0))
        {
            largest_divisor = controller;
        }
    }

    printf("Greatest common divisor: %d", largest_divisor);

    return 0;
}
