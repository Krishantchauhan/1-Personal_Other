//Find the minimun element in unsorted array and swap it with element at begining

#include <stdio.h>
void main()
{
  int i,s;
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  int a[s];
  printf("Enter the %d Elements\n",s);
  for(i=0;i<s;i++)
  {
    scanf("%d",&a[i]);
  }

  for(int i=0;i<s-1;i++)
  {
    for(int j=i+1;j<s;j++)
    {
      if (a[j]<a[i])
      {
        int temp = a[j];
        a[j]=a[i];
        a[i]=temp;
      }
    }
  }

  for(i=0;i<s;i++)
  {
    printf("%d\n",a[i]);;
  }


}
