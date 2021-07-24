// Google ka hai
//
//
#include <stdio.h>
int max(int mx,int a)
{
  int temp;
  if(mx>a)
  {
    return (mx,a);
  }

}
int main()
{
  int i,s;
  printf("Enter the size of an array\n");
  scanf("%d",&s);

  int a[s+1];
  a[s] = -1;

  printf("Enter the %d Elements\n",s);
  for(i=0;i<s;i++)
    scanf("%d",&a[i]);



  int ans = 0;
  int mx = -1;

  for(int i=0;i<s;i++)
  {
    if (a[i]>mx && a[i]>a[i+1])
    {
      ans++;
    }
    mx = max(mx,a[i]);
  }
  printf("%d \t",ans);

return 0;
}
