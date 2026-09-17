/* Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main()
{
    int n, total;
    printf("Day :");
    scanf("%d", &n);

    if (n <= 5)
    {
        total = 2 * n;
        printf("Fine : %d", total);
    }
    else if (n <= 10)
    {
        total = (2 * 5) + (n - 5) * 4;
        printf("Fine :%d", total);
    }
    else if (n <= 30)
    {
        total = (2 * 5) + (5 * 4) + ((n - 10) * 6);
        printf("Fine : %d", total);
    }

    else
    {
        printf("Membership cancelled");
    }
    return 0;
}