#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int high = n - 1;
    int low = 0, temp = 0;
    while (low != high)
    {
        temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}