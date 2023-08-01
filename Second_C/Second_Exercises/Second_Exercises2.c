#include <stdio.h>

int main()
{
    float x, i;
    int y;

    printf("Please enter two floats and one integer");
    scanf("%f%f%d", &x, &i, &y);
    printf("%f\n%f\n%d\n", x, i, y);
    return 0;
}