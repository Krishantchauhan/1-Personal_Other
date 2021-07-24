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

  int j=0;
  int temp=0;

  for(int i=0;i<s;i++)
  {
    if (a[i]<0)
    {
      if(i!=j)
        // swap(a[i],a[j]);
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
      j++;
    }
  }

  for(int i=0;i<s;i++)
  {
    printf("%d \t",a[i]);
  }


}
