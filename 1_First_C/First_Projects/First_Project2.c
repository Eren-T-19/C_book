#include <stdio.h>

#define PI 3
#define RADIUS 10 /*METER*/
/*Volume of the spehere with and without (4.0f / 3.0f)*/

/*
int main()
{
    float volume_sphere;
    volume_sphere = (4.0f / 3.0f) * PI * RADIUS * RADIUS * RADIUS;
    printf("Volume of the sphere is: %f", volume_sphere);
    return 0;
}
*/

int main()
{
    float volume_sphere;
    volume_sphere = 4 / 3 * PI * RADIUS * RADIUS * RADIUS;
    printf("Volume of the sphere is: %f", volume_sphere);
    return 0;
}
/*The difference in results is due to how C handles integer division versus floating-point division.

In the first version of the code (the one that's commented out), 4.0f / 3.0f is a floating-point division because 4.0f and 3.0f are both floating-point numbers (specifically, they're floats because of the f at the end).
Floating-point division gives a more precise result (in this case, approximately 1.3333).

In the second version of the code, 4 / 3 is an integer division because 4 and 3 are both integers.
Integer division in C discards the remainder, so 4 / 3 results in 1 instead of 1.3333.*/