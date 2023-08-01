#include <stdio.h>

/* Instead of making extra variables like in dweight.c file we calculate the weight in printf  */

int main()
{
    int height = 8;
    int length = 12;
    int width = 10;
    printf("Weight: %d\n", ((height * length * width) + 165) / 166);
}