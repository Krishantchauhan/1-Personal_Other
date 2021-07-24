#include <stdio.h>
void main()
  {
  int i,j,r,c;
  printf("Enter the column of an array\n");
  scanf("%d",&r);
  printf("Enter the rows of an array\n");
  scanf("%d",&c);
  printf("Enter the  Elements\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("*");

    }
    printf("\n");

  }
}
