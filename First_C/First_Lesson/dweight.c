#include <stdio.h>

int main()
{
    int height, length, width, weight, volume;
    printf("\nPlease, enter height, length, width\n\n");
    scanf("%d %d %d", &height, &length, &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;
    // enter 8, 12 , 10

    printf("Volume(cubic inches) = %d\n", volume);
    printf("Dimensional weight (pound) = %d\n", weight);

    return 0;
}