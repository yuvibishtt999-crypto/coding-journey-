// write a program to print the produt of even numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n, product = 1;

    printf("enter the number :");
    scanf("%d", &n);

    for (int i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }
    printf("%d", product);

    return 0;
}