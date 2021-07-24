//natural Nuimber

#include <stdio.h>

  int sum(int n)
  {
    int ans=0,i;
    for(i=1;i<=n;i++)
    {
      ans+=i;
    }
    return ans;
  }

 void main()
 {
  int a ;
  printf("Enter a number \n ");
  scanf("%d",&a);

  int ans=sum(a);

  printf("%d\n",ans);

}
