//     1
//    232
//   34543
//  4567654
// 567898765
#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j < 2 * r; j++)
        {
            if (j >= r + 1 - i && j <= r - 1 + i)
            {
                printf("*");
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
