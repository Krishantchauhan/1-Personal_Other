#include <stdio.h>

int next(int a)
{
    int flag = 0;
    for (int i = a + 1; i <= 100; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
}

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    next(a);
}