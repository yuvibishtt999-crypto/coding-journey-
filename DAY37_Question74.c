// Find the transpose of a matrix.

#include <stdio.h>

int main()
{
    int i, j, n, m;

    printf("Enter the rows and columns : ");
    scanf("%d %d", &n, &m);

    int a[n][m];

    printf("Enter the matrix elements : \n");

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}