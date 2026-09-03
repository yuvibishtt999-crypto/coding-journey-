// write a program to input a year and check whether it is a leap year or not using conditional satements.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year :");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 100 == 0))
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}