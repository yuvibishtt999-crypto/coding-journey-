// write a program to input three numbers and find the largest among them using if-else .

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter the frist number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    printf("Enter the third number:");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("%d is largest\n ", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is largest number\n", b);
    }
    else
    {
        printf("%d is largest number \n", c);
    }
    return 0;
}