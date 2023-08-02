#include <stdio.h>

#define PI 3.14f

/*In this file it asks the radius to the user compare to the Project2*/

int main()
{
    float volume_sphere, radius;
    printf("Please enter the radius: ");
    scanf("%f", &radius);
    volume_sphere = (4.0f / 3.0f) * PI * radius * radius * radius;
    printf("\nVolume of the sphere is: %.2f", volume_sphere);
    return 0;
}