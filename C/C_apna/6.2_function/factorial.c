#include <stdio.h>

  int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++)//or for(int i=n;i>=2;i--) same hai
    {
      factorial*=i;
    }
    return factorial;-
  }

 void main()
 {
  int a;
  printf("Enter a number \n ");
  scanf("%d",&a);

  int ans = fact(a);
  printf("%d\n",ans);

}
