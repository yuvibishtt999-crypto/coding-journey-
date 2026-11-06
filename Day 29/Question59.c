// Find the maximum and minimum element in an array.

#include <stdio.h>

int main()
{
    int i, n, max, min;

    printf("Enter the size of array :");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The elements of array are :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    max = a[0];
    min = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);

    return 0;
}