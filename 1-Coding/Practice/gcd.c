#include <stdio.h>
int min(int, int);

int main()
{
    int a, b, m;
    printf("Enter a number \n ");
    scanf("%d %d", &a, &b);

    m = min(a, b);

    int store = 1;

    for (int i = 0; i < m; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            store = i;
        }
    }

    printf("%d\n", store);
}

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
        return a;
}