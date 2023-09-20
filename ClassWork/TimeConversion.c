// Write a program to convert minute to hour

#include <stdio.h>

int main()
{
    int minute, hour;

    printf("Enter the minutes to convert into hours: ");
    scanf("%d", &minute);

    hour = minute / 60;
    minute = minute % 60;

    printf("The entered minutes is: %d hours", hour);
    printf(" %d minutes.\n", minute);

    return 0;
}