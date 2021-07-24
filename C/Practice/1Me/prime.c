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
      printf("Number is not Prime\n");
      flag=1;
      break;
    }
  }
  if (flag==0)
  {
    printf("Prime\n");
  }
  return 0;
}
