#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int k;
    scanf("%d",&k);

        for(int i=0;i<n;i++)
      {
        scanf("%d",&a[i]); 
      }

    while (k--)
    {
        int temp = a[0];
        for (int i = 0; i < n -1 ; i++)
            a[i] = a[i + 1];
        a[n-1] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
}