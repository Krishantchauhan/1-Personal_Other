#include <stdio.h>
void main()
{
  int a[100],i,s ;
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  printf("Enter the %d Elements\n",s);

  for(i=0;i<s;i++)
  {
    scanf("%d",&a[i]);
  }

  printf("Normal Array \n");
  for(i=0;i<s;i++)
  {
    printf("%d\n",a[i]);
  }

  int temp,max;
  temp=max=a[0];

  for(i=0;i<s;i++)
  {
    if(temp>a[i])
    {
      temp=a[i];
    }
    if (max<a[i])
    {
      max=a[i];
    }
  }
  printf("The Greater Element in the array is %d \n",max);
  printf("The Lowest Element in the array is %d \n",temp);

}
