// Write a program to calculate the Simple Interest

#include <stdio.h>

int main()
{
    int principal, rateOfInterest, time, SI;

    printf("Enter the principal amount: ");
    scanf("%d", &principal);

    printf("Enter the rate of Interest: ");
    scanf("%d", &rateOfInterest);

    printf("Enter the time in year: ");
    scanf("%d", &time);

    SI = (principal * rateOfInterest * time) / 100;

    printf("The Simple Interest is: %d", SI);
    return 0;
}