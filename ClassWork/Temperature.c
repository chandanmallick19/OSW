// Write a program to convert celcius to Farenheit

#include <stdio.h>

int main()
{
    float celcius, farenheit;

    printf("Enter the temperature in Celcius: ");
    scanf("%f", &celcius);

    farenheit = (celcius * 1.8) + 32;

    printf("The entered celcius in farenheit will be: %f", farenheit);
    return 0;
}