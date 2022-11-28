#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            printf("%d\t", i);
        }
    }
}