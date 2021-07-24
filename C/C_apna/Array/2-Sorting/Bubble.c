//Repetedly swap 2 adjacent element if they are in wrong order


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

  int counter=1;

  while (counter<a)
  {
    for(int i=0;i<s-counter;i++)
    {
      if(a[i]>a[i+1])
      {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
      }
    }
    counter++;
  }

  for(i=0;i<s;i++)
  {
    printf("%d \n",a[i]);
  }

}
