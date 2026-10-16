#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0, remainder, A;
    
    printf("Enter the number :");
    scanf("%d", &num);

    A = num;

    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + pow(remainder, 3);
        num = num / 10;
    }
    if ( A == sum)
    {
        printf("The number is Armstrong ");
    }
    else
    {
        printf("The number is not Armstrong");
    }
    return 0;
}