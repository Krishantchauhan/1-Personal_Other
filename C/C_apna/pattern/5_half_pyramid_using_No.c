#include <stdio.h>
void main()
  {
  int i,j,r,c;
  printf("Enter the column of an array\n");
  scanf("%d",&r);
  printf("Enter the  Elements\n");
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    {
        printf("%d",i);
        printf(" ");
    }
    printf("\n");

  }
}
