#include <stdio.h>

int main(void)
{
    int count = 4;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
