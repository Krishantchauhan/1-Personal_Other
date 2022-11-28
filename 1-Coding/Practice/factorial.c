#include <stdio.h>

int main()
{
    int a, fact = 1;
    printf("Enter a number \n ");
    scanf("%d", &a);
    int i = a;
    while (i > 0)
    {
        fact = i * fact;
        i--;
    }
    printf("%d\n", fact);
}