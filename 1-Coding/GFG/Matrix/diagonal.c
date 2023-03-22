#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int low = 0, high = c - 1, temp = 0;
    for (int i = 0; i < r; i++)
    {

        if (low <= high)
        {
            temp = a[i][low];
            a[i][low] = a[i][high];
            a[i][high] = temp;
            if (i < r / 2)
            {
                low++;
                high--;
            }
            else
            {
                low--;
                high++;
            }
        }
    }
    printf("%d %d", low, high);
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}