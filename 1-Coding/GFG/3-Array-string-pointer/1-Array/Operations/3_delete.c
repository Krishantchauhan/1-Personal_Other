#include <stdio.h>
int main()
{
    int a[] = {12, 34, 10, 6, 40};
    int n = sizeof(a) / sizeof(a[1]);

    int x = 6;
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
            break;
    }
    printf(" %d ", i);
    for (int j = i; j < n - 1; j++)
    {
        a[j] = a[j + 1];
    }

    for (int i = 0; i < n - 1; i++)
        printf("%d  ", a[i]);
}