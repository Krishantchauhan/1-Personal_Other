#include <stdio.h>

int check(int);

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    check(a);
}

int check(int a)
{
    while (a > 10)
    {
        a = a / 10;
    }
    printf("%d\n", a);

    return 0;
}