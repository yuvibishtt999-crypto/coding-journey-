// write a program to input an integer and check wether it is even or odd using if-else.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the integer :");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
    }
    else
    {
        printf("%d is odd\n", n);
    }
    return 0;
}