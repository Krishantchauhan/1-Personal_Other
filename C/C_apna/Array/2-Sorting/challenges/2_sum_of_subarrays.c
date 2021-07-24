// Given an array a[] of size n.
// o/p sum of each subarray of the given array.
//
// Eg        1     2     2
//           (0)  (1)    (2)
// subarray  1   1 2    1 2 2    2   2 2     2
// sum:      1    3       5      2    4      2



#include <stdio.h>

void main()
{
  int i,s;
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  int a[s];
  printf("Enter the %d Elements\n",s);
  for(i=0;i<s;i++)
    scanf("%d",&a[i]);

  int sum=0;
  for(int i=0;i<s;i++)
  {
    sum=0;
    for(int j=i;j<s;j++)
    {
      sum+=a[j];
      printf("%d \t",sum);
    }
  }


}
