// Reverse an array without taking extra space.

#include <stdio.h>

int main()
{
    int i, n, temp;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int a[i];
    printf("Enter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n / 2; i++)
    {

        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    for (i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }
    return 0;
}