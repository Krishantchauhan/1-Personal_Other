#include <stdio.h>

void fib(int n)
{
  int a1=0;
  int a2=1;
  int nextTerm;

  for(int i=1;i<=n;i++)
  {
    printf("%d\n",a1);
    nextTerm=a1+a2;
    a1=a2;
    a2=nextTerm;
  }
}


void main()
 {
  int a ;
  printf("Enter a number \n ");
  scanf("%d",&a);

  fib(a);

}
