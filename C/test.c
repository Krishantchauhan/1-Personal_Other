#include <stdio.h>

int main(void)
{
    int count = 4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            if (j == count || i == count)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            count--;
        }
        printf("\n");
    }

    return 0;
}
