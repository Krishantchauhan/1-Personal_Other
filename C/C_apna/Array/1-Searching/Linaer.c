//Time Complexity is O of n

#include <stdio.h>

int linearSearch(int a[],int s,int key)
{
  for(int i=0;i<s;i++)
  {
    if (a[i]==key)
    {
      return i;
    }
  }
  return -1;

}

void main()
{
  int i,s ;
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  int a[s];
  printf("Enter the %d Elements\n",s);
  for(i=0;i<s;i++)
  {
    scanf("%d",&a[i]);
  }

  int key;
  printf("Enter the element to search\n");
  scanf("%d",&key);

  int give=linearSearch(a,s,key);
  printf("The Element  id in %d\n",give+1);

}
