#include <stdio.h> 
int main() 
 {
  long long n,s;
  scanf("%lld",&s);
  scanf("%lld",&n);
  int b[n+1][s],a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);       
        }
    }
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<s;j++)
        {
            b[i][j]=0;    
        }      
    }    

    int high,low,k;

    for(int i=0;i<n;i++)
    {
        low=a[i][0];
        high=a[i][1];
        k=a[i][2];
        for(int y=low-1;y<high;y++){
            b[i+1][y]=b[i][y]+k;
        }
    }

    int max=b[0][0];
    for(int i=0;i<n+1;i++)
      {
        for(int j=0;j<s;j++)
        {
            if(max<b[i][j])
                max=b[i][j];   
        }
      } 
      printf("%d",max);


 }