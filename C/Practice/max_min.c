#include <stdio.h>

int main()
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

  for(i=0;i<s;i++)
  {
    printf("%d\t",a[i]);
  }
  int min;
  int max;


  for(int i=0;i<s;i++)
  {
    max=a[0];
    min=a[0];

    if(a[i]>max)
    {
      max=a[i];
    }
    if(a[i]<min)
    {
      min=a[i];
    }
  }
  printf("\nmin %d \t max : %d \n",min,max);
}
