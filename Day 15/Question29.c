// Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main()
{
    int product = 1;
    int n;
    int i;
    printf("Enter the number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("product:%d", product);

    return 0;
}