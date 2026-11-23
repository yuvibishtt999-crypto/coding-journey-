// Read and print a matrix.

#include <stdio.h>

int main()
{
    int i, j, n, m;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix is:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}