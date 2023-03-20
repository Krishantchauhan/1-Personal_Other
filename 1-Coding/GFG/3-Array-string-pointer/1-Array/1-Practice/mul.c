#include <stdio.h>
int multiply(int c, int a[][c], int b[][c], int mult[][c], int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mult[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                mult[i][j] += a[i][k] * b[k][j];
                // return mult[i][j];
            }
        }
    }
    return mult;
}

int main()
{
    int i, j, r, c;
    printf("Enter the column of an array\n");
    scanf("%d", &c);
    printf("Enter the rows of an array\n");
    scanf("%d", &r);
    printf("Enter the Elements First Array \n");
    int a[r][c], b[r][c], mult[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the Elements of Second Array \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int p[r][c];
    // p[r][c] = multiply(&a, &b, r, c);
    p[0][0] = multiply(c, a, b, mult, r);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", p[i][j]);
            // printf("%d", multiply(c, a, b, mult, r));
        }
        printf("\n");
    }
}