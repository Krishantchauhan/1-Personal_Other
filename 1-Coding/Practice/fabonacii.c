#include <stdio.h>

int fab(int a)
{
    int sum = 0;
    int i = 1;
    int j = 1;
    printf("1\t1\t");
    while (a >= i)
    {
        sum = j + i;
        i++;
        i = j;
        j = sum;
        printf("%d\t", sum);
    }
}

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    fab(a);
}