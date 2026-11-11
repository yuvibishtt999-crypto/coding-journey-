// Merge two arrays.


#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n, m, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter elements of first array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter elements of second array: ");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    // Copy first array into third array
    for(i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    // Copy second array into third array
    for(j = 0; j < m; j++)
    {
        c[i] = b[j];
        i++;
    }

    printf("Merged array: ");
    for(i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
