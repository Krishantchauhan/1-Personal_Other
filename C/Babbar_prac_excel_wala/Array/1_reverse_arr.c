#include <stdio.h>
 void main()
 {
  int a[100],i,s ;
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  printf("Enter the %d Elements\n",s);
  for(i=1;i<=s;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nAfter Reverse \n");
  for(i=s;i>=1;i--)
  {
    printf("%d\n",a[i]);
  }




}
