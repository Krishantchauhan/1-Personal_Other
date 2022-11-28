#include <stdio.h>

int isprime(int);
int check(int);

int main()
{
    int a;
    printf("Enter a number \n ");
    scanf("%d", &a);

    check(a);
}

int isprime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int check(int a)
{
    int x;
    for (int i = 2; i <= a; i++)
    {
        if (isprime(i))
        {
            x = i;
            while (a % x == 0)
            {
                printf("%d\n", i);
                x = x * i;
            }
        }
    }
}
