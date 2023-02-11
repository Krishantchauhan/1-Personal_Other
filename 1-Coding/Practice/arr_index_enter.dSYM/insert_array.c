#include <stdio.h>
// INsert of an array

// int main()
// {
//     int a[] = {12, 34, 10, 6, 40};
//     int n = sizeof(a) / sizeof(a[0]);

//     int pos, x;
//     printf("Position and value\n");
//     scanf("%d %d", &pos, &x);

//     for (int i = n - 1; i >= pos - 1; i--)
//         a[i + 1] = a[i];

//     a[pos - 1] = x;

//     for (int i = 0; i < n + 1; i++)
//         printf("%d  ", a[i]);
// }

// delection of an array

// int main()
// {
//     int a[] = {12, 34, 10, 6, 40};
//     int n = sizeof(a) / sizeof(a[1]);

//     int x = 6;
//     int i;

//     for (i = 0; i < n; i++)
//     {
//         if (a[i] == x)
//             break;
//     }
//     printf(" %d ", i);
//     for (int j = i; j < n - 1; j++)
//     {
//         a[j] = a[j + 1];
//     }

//     for (int i = 0; i < n - 1; i++)
//         printf("%d  ", a[i]);
// }

// Second Maxxx
//  int main()
//  {
//      int a[] = {12, 34, 10, 6, 40};
//      int max = a[0];
//      for (int i = 0; i < 5; i++)
//      {
//          if (a[i] > max)
//          {
//              max = a[i];
//          }
//      }
//      int smax = a[0];
//      for (int i = 0; i < 5; i++)
//      {
//          if (a[i] != max)
//          {
//              if (a[i] > smax)
//              {
//                  smax = a[i];
//              }
//          }
//      }
//      printf("%d  ", max);
//      printf("%d  ", smax);
//  }

// Reverse array

// int main()
// {
//     int a[] = {12, 34, 10, 6, 40};
//     int low = 0, high=4;
//     while (low < high)
//     {
//         int temp = a[low];
//         a[low] = a[high];
//         a[high] = temp;
//         low++;
//         high--;
//     }
//     for (int i = 0; i < 5; i++)
//         printf("%d ", a[i]);
// }

// move zeros to end
void swap(int *i, int *count)
{
    int temp = *i;
    *i = *count;
    *count = temp;
}
int main()
{
    int a[] = {12, 0, 0, 6, 40};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] != 0)
        {
            swap(&a[i], &a[count]);
            count++;
        }
    }
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
}