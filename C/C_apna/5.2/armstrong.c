#include <stdio.h>
#include <math.h>
 void main()
 {
  int a ;
  printf("Enter a number \n ");
  scanf("%d",&a);

  int sum=0;
  int original=a;
  int lastdigit;

  while (a>0)
  {
    lastdigit = a%10;
    sum+=pow(lastdigit,3);
    a/=10;
  }
  if (original==sum)
  {
    printf("The Number is Armstrong\n");
  }
  else
  {
    printf("Number is Not Armstrong\n");
  }
}
