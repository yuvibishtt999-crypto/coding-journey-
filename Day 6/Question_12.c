// write a program to input an integer and check whether it is positve , negative or zero using nested if else

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the integer :");
    scanf("%d", &n);

    if (n >= 0)
    {

        if (n == 0)
        {
            printf("The integer is zero %d", n);
        }
        else
        {
            printf("The integer is positive %d ", n);
        }
    }
    else
    {
        printf("The integer is negative");
    }
    return 0;
}