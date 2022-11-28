#include <stdio.h>

int main()
{
    int i, s;
    printf("Enter the size of an array\n");
    scanf("%d", &s);
    int a[s][s], b[s][s];

    printf("Enter the %d Elements of First Array\n", s);
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the %d Elements of Second Array\n", s);
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int c[100][100];
    int k;

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < s; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
}