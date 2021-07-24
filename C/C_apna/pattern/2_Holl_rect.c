#include <stdio.h>
void main()
  {
  int i,j,r,c;
  printf("Enter the column of an array\n");
  scanf("%d",&r);
  printf("Enter the rows of an array\n");
  scanf("%d",&c);
  printf("Enter the  Elements\n");
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=c;j++)
    {
      if (i==r||i==1||j==1||j==c)
      {
        printf("*");
      }
      else
      {
        printf(" ");

      }
    }
    printf("\n");

  }
}
