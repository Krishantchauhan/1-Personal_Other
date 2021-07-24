// Given an array a[] of size n. For every i from 0 to n-1
// O/P : max(a[0],a[1],....,a[i])
//
//
// eg:          1   0   5   4   6   8
//             (0) (1) (2) (3) (4) (5)
// Max till i   1   2   5   5   6   8


#include <stdio.h>

int max(int mx ,int a)
{
  int temp=0;
  if(mx>a)
  {
  temp = mx;
  a = mx;
  mx=temp;
  }
  return (mx,a);
}

int main()
{
  int i,s;
  printf("Enter the size of an array\n");
  scanf("%d",&s);

  int a[s];
  printf("Enter the %d Elements\n",s);
  for(i=0;i<s;i++)
    scanf("%d",&a[i]);

  int mx=-19999;

  for(int i=0;i<s;i++)
  {
    mx = max(mx,a[i]);
    printf("%d \t",mx);
  }

return 0;
}
