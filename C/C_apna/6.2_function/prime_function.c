#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int num)
{
  for(int i=2;i<=sqrt(num);i++)
  {
    if(num%i==0)
    {
      return false;
    }
  }
  return true;
}

 int main()
 {
  int a,b ;
  printf("Enter first number \n ");
  scanf("%d",&a);
  printf("Enter second number \n ");
  scanf("%d",&b);

  for(int i=a;i<=b;i++)
  {
    if(isPrime(i))
    {
      printf("%d\n",i);
    }
  }
}
