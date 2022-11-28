#include <stdio.h>

int max(int, int);

int main()
{
    int a, b;
    printf("Enter a number \n ");
    scanf("%d %d", &a, &b);

    int start = max(a, b);
    int end = a * b;
    int lcm = start;

    for (int i = start; i <= end; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("%d\n", lcm);
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}