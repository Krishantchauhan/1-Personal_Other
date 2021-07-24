#include <stdio.h>

int fact(int n){
  int factorial=1;
  for(int i=2;i<=n;i++)
  {
    factorial*=i;
  }
  return factorial;
}

 void main()
 {
  int a ;
  printf("Enter a number \n ");
  scanf("%d",&a);

  for(int i=0;i<a;i++)
  {
    for(int j=0;j<=i;j++)
    {
      int ans=fact(i)/(fact(j)*fact(i-j));
      printf("%d ",ans);
    }
    printf("\n");
  }

}
