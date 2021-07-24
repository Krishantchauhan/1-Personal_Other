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
  int n,r ;
  printf("Enter N number \n ");
  scanf("%d",&n);
  printf("Enter R Number \n");
  scanf("%d",&r);

  int ans =fact(n)/(fact(r)*fact(n-r));
  printf("%d",ans);

}
