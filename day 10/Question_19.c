// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a,b and c ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("The triangle is Equilateral ");
    }
    else if (a == b ||a == c || b == c)
    {
        printf("The triangle is Isosceles");
    }
    else
    {
        printf("The triangle is Scalene");
    }

    return 0;
}