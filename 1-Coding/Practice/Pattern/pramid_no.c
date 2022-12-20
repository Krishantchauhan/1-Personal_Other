//     1
//    232
//   34543
//  4567654
// 567898765

#include <stdio.h>

int main(void)
{
    int k = 1;
    for (int i = 1; i < 6; i++)
    {
        k = i;
        for (int j = 1; j < 10; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("%d", k);
                if (j >= 5)
                    k--;
                else
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
