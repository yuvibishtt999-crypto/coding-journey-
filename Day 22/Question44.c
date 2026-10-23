// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main()
{
    int i, n;
    float sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            sum += i;
        else
            sum += (float)(2 * i - 1) / (2 * i);   
    }
    printf("Approximate sum = %.1f", sum);

    return 0;
}