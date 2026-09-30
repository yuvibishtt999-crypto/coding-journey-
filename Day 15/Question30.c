// Write a program to reverse a given number.

#include <stdio.h>

int main()
{
    long long num, reverse = 0, remainder;
    printf("enter the number :");
    scanf("%lld", &num);

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("%d", reverse);

    return 0;
}