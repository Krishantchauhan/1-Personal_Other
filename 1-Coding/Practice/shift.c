#include <stdio.h>

int main()
{
    // your code goes here
    int a[7] = {11, 13, 2, -1, 1, 3, -6};
    int c = 1;
    for (int i = 0; i < 7; i++)
    {
        int j = i;
        if (a[i] < 0)
        {
            while (a[j] < 0 && a[j - 1] > 0 && j < 7)
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
                j--;
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
}