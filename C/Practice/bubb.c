/*#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    int a,j;
	    int c=0;
	    scanf("%d",&a);
	    int arr[a];
	    for(j=0;j<a;j++){
	        scanf("%d",&arr[j]);
	    }
	    int x;
	    int y=1;
	    for(j=0;j<a;j++){
	        x=abs(arr[j]-(j+1));
	        c=c+x;
	        if(x>2){
	            printf("Not Allowed\n");
	            y=0;
	            break;
	        }
	    }
	    if(y!=0){
	         printf("%d\n",c/2);
	    }
	}
	return 0;
}*/
#include<stdio.h>
#include<math.h>
void swap(long long int *x,long long int*y)
{
 long     int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
      long long  int arr[n],flag=0;
        for(int i=0;i<n;i++)
        scanf("%lld",&arr[i]);
        for(int i=0;i<n;i++)
        {
            if(i+1-arr[i]<-2)
            {
                flag=1;

                break;
            }
        }
        if(flag==1)
        printf("Not Allowed\n");
        else
        {
            int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    count++;
                     swap(&arr[j],&arr[j+1]);

                }
            }
        }
        printf("%d\n",count);
        }

    }
}
