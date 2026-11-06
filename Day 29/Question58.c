// Find the sum of array elements.

#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter the size of the array :");
    scanf("%d", &n);

    printf("Enter the elements of the array:");

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements of array are :");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("\nThe sum of the elements of the array is = %d\n", sum);
    
    return 0;
}
