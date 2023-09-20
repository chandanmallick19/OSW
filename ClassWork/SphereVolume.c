// Write a program to calculate the volume of a sphere

#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
    float volume, radius;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = 1.333 * pi * pow(radius, 3);

    printf("The volume of the sphere will be: %f", volume);

    return 0;
}