#include <stdio.h>

int main()
{
    int i, s;
    printf("Enter the size of an array\n");
    scanf("%d", &s);

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (j < s - i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}