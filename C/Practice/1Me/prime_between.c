#include<stdio.h>
int main()
{
  int fnum,lnum;
  printf("Entet the First Number \n");
  scanf("%d",&fnum);

  printf("Entet the Last Number \n");
  scanf("%d",&lnum);

  int flag=0;

  for(int i=fnum;i<=lnum;i++)
  {
    flag=0;
    for(int j=2;j<i;j++)
    {
      if (i%j==0)
      {
        flag++;
        break;
      }
    }
    if(flag==0) printf("Prime :- %d \n",i);
  }
}
