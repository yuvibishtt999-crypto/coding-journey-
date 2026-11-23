#include <stdio.h>

int main()
{
    int i, n, k;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int a[n], temp[n];

    printf("Enter the slements ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the no of the rotations : ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < n; i++)
    {
        temp[(i + k) % n] = a[i];
    }
    printf("Array after the rotation : ");
    for (i = 0; i < n; i++)
    {

        printf("%d ", temp[i]);
    }

    return 0;
}