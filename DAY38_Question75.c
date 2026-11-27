// Check if a matrix is symmetric.

#include <stdio.h>

int main()
{
    int i, j, n, m,flag = 1;

    printf("Enter the rows and column : ");
    scanf("%d %d", &n, &m);

    int a[n][m];

    printf("Enter the elements \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (n != m)
    {
        flag = 0;
    }
    else
    {
        for (i = 0; i < n; i++)
        {

            for (j = 0; j < m; j++)
            {

                if (a[i][j] != a[j][i])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is not symmetric");
    }

    return 0;
}