#include <stdio.h>
void main()
  {
  int i,j,r,c;
  printf("Enter the column of an array\n");
  scanf("%d",&r);
  //Upper
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    int space =2*r-2*i;

    for(j=1;j <= space;j++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }

  //Bottom Wala
  for(i=r;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    int space = 2*r-2*i;
    for(j=1;j<=space;j++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
