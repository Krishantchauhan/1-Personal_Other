// Step 1: sort in acending order
// Step 2: compare the 'Key' to the array
// Step 3: Find Mid (half half kr a age )

//Time Complexity is 0(log^n and log base 2)

//linaer se better hai
#include <stdio.h>

int binarySearch(int a[],int key ,int s)
{
  int start=0;
  int end=s-1;

  while(start<=end)
  {
    int mid =(start+end)/2;
    if(a[mid]==key)
      return mid;
    else if(a[mid]>key)
      end=mid-1;//before mid
    else
      start = mid+1;//after mid element
  }
  return -1;
}

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

  int key;
  printf("Enter the Element to Search \n");
  scanf("%d",&key);

  int Search;
  Search = binarySearch(a,key,s);

  printf("The Element %d is in %d position \n",key,Search);

}
