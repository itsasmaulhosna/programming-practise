#include <stdio.h>
int main()
{
    int i, j, k, a[100][100], b[100][100], c[100][100], r1, r2, c1, c2;
    printf("Enter the value of r1 and c1:");
    scanf("%d%d", &r1, &c1);
    printf("Enter the matrix [%d][%d]", r1, c1);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the value of r2 and c2:");
    scanf("%d%d", &r2, &c2);
    printf("Enter the matrix [%d][%d]", r2, c2);
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (c1 == r2)
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("The multiplication of two matrix is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible\n");
    }
    return 0;
}
