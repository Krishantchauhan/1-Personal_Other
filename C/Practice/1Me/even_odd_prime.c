#include<stdio.h>
int main()
{
  int num;
  printf("Entet the Number to check \n");
  scanf("%d",&num);
  int flag;
  
  for(int i=2;i<num;i++)
  {
    flag=0;
    if (num%i==0)
    {
      flag=1;
      break;
    }
  }

  if (flag==0)
  {
    printf("Prime\n");
  }
  else{
    if(num%2==0) printf("Even\n");
    else  printf("Odd \n");
  }
}
