// Add two matrices.

#include <stdio.h>

int main()
{
    int i, j, m, n, r , c, f ,g;

    printf("Enter the rows and column :");
    scanf("%d %d", &n, &m);

    int a[n][m];
    
    printf("Enter the elements : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the second matrix rows and column :");
    scanf("%d %d", &r, &c);

    int b[r][c];

    printf("Enter the elemnts :\n");

    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Sum = \n");
    int result[r][c];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}