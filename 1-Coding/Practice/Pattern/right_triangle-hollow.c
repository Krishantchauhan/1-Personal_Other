// *
// **
// * *
// *  *
// *****

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i || i == a || j == 1)
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