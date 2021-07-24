// INsert an element from unsorted array to its correct position in sorted array


#include <stdio.h>

int insertion(int a[],int s)
{
  int temp;
  for(int i=1;i<s;i++)
  {
    int current = a[i];
    int j=i-1;

    while (a[j]>current && j>=0)
    {
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=current;

  }
  return 0;
}

void main()
{
  int i,s;
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  int a[s];
  printf("Enter the %d Elements\n",s);
  for(i=0;i<s;i++)
    scanf("%d",&a[i]);

  insertion(a,s);

  for(int i=0;i<s;i++)
  {
    printf("%d \t",a[i]);
  }






}
