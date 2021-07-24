// Google Mein aya hai


#include <stdio.h>
int max(int ans,int curr)
{
    int temp;
  if (ans>curr)
  {
    temp=ans;
    ans=curr;
    curr=temp;
  }
  return (ans,curr);
}

void main()
{
  int i,s;
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  int a[s];
  printf("Enter the %d Elements\n",s);
  for(i=0;i<s;i++)
    scanf("%d",&a[i]);


  int ans = 2;
  int pd = a[1]-a[0];
  int j = 2;
  int curr = 2;

  while (j<s)
  {
    if (pd == a[j]-a[j-1])
    {
      curr++;
    }else
    {
      pd = a[j]-a[j-1];
      curr = 2;
    }
    ans = max(ans,curr);
    j++;
  }

  printf("%d",ans);

}
