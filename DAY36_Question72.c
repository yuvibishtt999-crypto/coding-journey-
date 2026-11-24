#include <stdio.h>

int main()
{
    int i, j, m, n, sum = 0;

    printf("Enter rows and columns : ");
    scanf("%d %d", &m, &n);

    int arr[m][n];

    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {

            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}