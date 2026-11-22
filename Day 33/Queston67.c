// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main()
{
    int i, n, num;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int a[n+1];

    printf("Enter the elements of the array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert : ");
    scanf("%d", &num);

    i = n-1;

    while(i >= 0 && a[i] > num){
         
        a[i+1] = a[i];
        i--;
    }
    a[i+1] = num;

    printf("Array after intersection : ");
    for(i = 0; i<=n; i++){

        printf("%d ", a[i]);
    }

    return 0;
}