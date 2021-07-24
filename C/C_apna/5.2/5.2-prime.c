#include <stdio.h>
#include<math.h>

 int main()
 {
  int a,check,i ;
  printf("Enter a number \n ");
  scanf("%d",&a);

  int flag=0;

  for(i=2;i<a;i++)//for shorter calculation we use sqrt
  {
    if(a%i==0)
    {
      printf("Non-Prime\n");
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    printf("Prime\n");
  }
return 0;
}
