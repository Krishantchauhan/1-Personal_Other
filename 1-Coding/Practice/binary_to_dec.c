#include <stdio.h>

int binary(int a)
{
    int base = 1;
    int val = 0;

    while (a > 0)
    {

        int lastdigit = a % 10;
        val = val + (lastdigit * base);
        a = a / 10;
        base = base * 2;
    }

    printf("%d\n", val);
}

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    binary(a);
}