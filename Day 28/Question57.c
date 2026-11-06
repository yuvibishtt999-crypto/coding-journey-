// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of array :");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements of array are : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}