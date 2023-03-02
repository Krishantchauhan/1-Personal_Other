#include <stdio.h>

int main()
{
    // your code goes here
    int a[7] = {10, 13, 15, 13, 12, 14, 15};
    int count = 0, temp = 0;

    for (int i = 0; i < 7; i++)
    {
        int temp = 0;
        for (int j = 0; j < 7; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
            count++;
        if (count == 2)
        {
            printf("%d ", a[i]);
            break;
        }
        temp = 0;
    }
    return 0;
}
