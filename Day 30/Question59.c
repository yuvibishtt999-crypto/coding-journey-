// Count even and odd numbers in an array.

#include <stdio.h>

int main()
{
    int i, n, even = 0, odd = 0;

    printf("Enter the size of the array :");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
            
        }
    }

    printf("\nEVEN = %d", even);
    printf("\nODD = %d", odd);

    return 0;
}