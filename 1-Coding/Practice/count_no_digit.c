#include <stdio.h>

int main()
{
    int a, count = 1;
    printf("Enter a number \n ");
    scanf("%d", &a);

    while (a > 10)
    {
        a = a / 10;
        count++;
    }
    printf("%d\n", count);
}