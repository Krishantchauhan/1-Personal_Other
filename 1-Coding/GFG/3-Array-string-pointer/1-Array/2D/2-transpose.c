#include <stdio.h>

int main()
{
    int a[100][100], i, j, r, c;
    printf("Enter the column of an array\n");
    scanf("%d", &c);
    printf("Enter the rows of an array\n");
    scanf("%d", &r);
    printf("Enter the  Elements\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int b[100][100];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}
