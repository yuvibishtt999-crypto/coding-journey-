// Insert an element in an array at a given position.

#include <stdio.h>

int main()
{
    int i, n, num, position;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter the elements of the arraay : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element insert and position : ");
    scanf("%d %d",&num,&position);

    for (i = n - 1; i >= position - 1; i--)
    {

        a[i + 1] = a[i];
    }
    a[position - 1] = num;

    printf("Array after intersection : ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}