// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main()
{
    int i, j, n, m ;

    printf("Enter the rows and column : ");
    scanf("%d %d", &n, &m);

    int a[n][m];
    int sum[n];

    for (i = 0; i < n; i++)
    {

        sum[i] = 0;

        for (j = 0; j < m; j++)
        {

            scanf("%d", &a[i][j]);
            sum[i] = sum[i] + a[i][j];
        }
    }
    printf("sum of each row :\n ");

    for (i = 0; i < n; i++)
    {

        printf("%d ", sum[i]);
    }

    return 0;
}