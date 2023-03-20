#include <stdio.h>

int main()
{
    int i, s;
    printf("Enter the size of an array\n");
    scanf("%d", &s);
    int a[s], su;
    printf("Enter the %d Elements\n", s);
    for (i = 0; i < s; i++)
        scanf("%d", &a[i]);
    scanf("%d", &su);

    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        sum += a[i];
    }
    int diff=sum-su;
    for (int i = 0; i < s; i++)
    {
        if(diff)
    }
}