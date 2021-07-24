#include <stdio.h>
 void main()
 {
  int a ;
  printf("Enter a number \n ");
  scanf("%d",&a);

  int rev=0;
  int lastdig;

  while (a>0)
  {
    lastdig = a%10;
    rev=rev*10+lastdig;
    a=a/10;
  }

  printf("%d",rev);

}
