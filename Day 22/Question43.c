// Write a program to check if a number is a strong number.

#include <stdio.h>

int main()
{
    int num, digit,i, temp, fact, sum = 0;

    printf("Enter the number :");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        fact = 1;
        digit = num % 10;
        for ( i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("The number is a strong number");
    }
    else
    {
        printf("The number is not a strong number ");
    }
    return 0;
}