#include <stdio.h>

int prime(int a)
{
    int c = 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 1)
    {
        printf("Non Prime");
    }
    else
    {
        printf("Prime");
    }
}
int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    prime(a);
}
