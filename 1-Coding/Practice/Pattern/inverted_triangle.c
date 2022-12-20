//     *
//    **
//   ***
//  ****

#include <stdio.h>

int main()
{
    int i, s;
    printf("Enter the size of an array\n");
    scanf("%d", &s);

    for (int i = 1; i <=s; i++)
    {
        for (int j = 1; j <=s; j++)
        {
            if (j>=s+1-i)
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
}