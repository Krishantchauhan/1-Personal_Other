#include <stdio.h>
void main()
  {
  int i,j,r,c;
  printf("Enter the column of an array\n");
  scanf("%d",&r);
  int counter=1;
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    {
        printf("%d",counter);
        printf(" ");
        counter++;
    }
    printf("\n");

  }
}
