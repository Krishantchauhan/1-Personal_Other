#include <stdio.h>

int main()
{
    int i, s, p, e;
    int a[6] = {1, 24, 3, 4, 5};

    printf("enter the position of element");
    scanf("%d", &p);

    printf("Enter the element array\n");
    scanf("%d", &e);

    for (int i = 0; i < 6; i++)
    {
        if (a[i] == p)
        {
            a[i] = e;
            // a[i] = p; 
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}