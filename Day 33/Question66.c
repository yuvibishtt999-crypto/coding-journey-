// Search in a sorted array using binary search.

#include <stdio.h>

int main()
{
    int n, low, high, mid, key, i;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search : ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {

        mid = (high + low) / 2;

        if (key == a[mid])
        {

            printf("Found at index  %d", mid);
            return 0;
        }
        else if (key > a[mid])
        {

            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("-1");

    return 0;
}