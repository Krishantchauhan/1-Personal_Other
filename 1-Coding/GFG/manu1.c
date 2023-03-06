#include <stdio.h> 
#include<stdlib.h>
int main() 
{
  long long n,s,x=0,max=0,i;
  scanf("%lld",&s);
  scanf("%lld",&n);
  int *arr=(int *)malloc(sizeof(int)*n+1);
    for( i=0;i<s;i++)
        arr[i]=0;      
    for( i=0;i<n;i++)
    {
        long long a,b,k;
        scanf("%lld%lld%lld",&a,&b,&k);
        arr[a]=arr[a]+k;
        if(b+1<=s)
            arr[b+1]=arr[b+1]-k;
    } 
    for( i=0;i<s;i++)
    {
        x+=arr[i];
        if(max<x)
            max=x;
    }
    printf("%lld",max);
    

 }