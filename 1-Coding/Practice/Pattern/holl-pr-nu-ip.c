//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5

#include <stdio.h>

int main(void)
{
    int k = 1;
    int r;
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        k = 1;
        for (int j = 1; j < r * 2; j++)
        {
            if (j == r + 1 - i || j == r - 1 + i)
            {
                if (j >= r)
                    printf("%d", i);
                else
                    printf("%d", k);
                k++;
            }
            else if (i == r && j % 2 != 0)
            {
                printf("%d", k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
