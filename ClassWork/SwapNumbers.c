// Write a program to swap two numbers

#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("The first number after swap is: %d \n", num1);
    printf("The second number after swap is: %d \n", num2);

    return 0;
}