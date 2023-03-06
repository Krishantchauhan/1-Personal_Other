#include <stdio.h> 
int main() 
 {
  int n=3,s;
//   scanf("%d",&n);
//   int a[n][n],b[4][10];
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         scanf("%d",&a[i][j]);       
    //     }
    // }
    int a[4][3]={{2,6,8},{3,5,7},{1,8,1},{5,9,15}}  ,  b[4][10];  
    for(int i=0;i<5;i++)
      {
        for(int j=0;j<10;j++)
        {
            b[i][j]=0;    
        }
      }

    // printf("B\n");
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<10;j++)
    //     {
    //         printf("%d ",b[i][j]);       
    //     }
    //     printf("\n");
    // }

    // printf("A\n");
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         printf("%d ",a[i][j]);       
    //     }
    //     printf("\n");
    // }

    

    int high,low,k,sum=0;

    for(int i=0;i<4;i++)
    {
        low=a[i][0];
        high=a[i][1];
        k=a[i][2];
        printf("low =%d ",low);
        printf("high =%d ",high);
        printf("k =%d ",k);

        // for(int x=1;x<4;x++)
        // {
            // for(int y=low-1;y<high;y++){
                // b[x][y]=b[x-1][y]+k;
            // }
            // printf("%d ",sum);
        // }

        for(int y=low-1;y<high;y++){
                b[i+1][y]=b[i][y]+k;
            }
        printf("\n");
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("%d ",b[i][j]);       
        }
        printf("\n");
    }

    int max=b[0][0];
    for(int i=0;i<4;i++)
      {
        for(int j=0;j<10;j++)
        {
            if(max<b[i][j])
                max=b[i][j];   
        }
      } 
      printf("\n max is %d",max);

    

    


 }















//  #include <stdio.h> 
// int main() 
//  {
//   int n,s=10;
//   scanf("%d",&n);
//   int a[n][n],b[4][10];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);       
//         }
//     }
//     for(int i=0;i<4;i++)
//       {
//         for(int j=0;j<10;j++)
//         {
//             b[i][j]=0;    
//         }
//       }    

//     int high,low,k,sum=0;

//     for(int i=0;i<3;i++)
//     {
//         low=a[i][0];
//         high=a[i][1];
//         k=a[i][2];
//         printf("low =%d ",low);
//         printf("high =%d ",high);
//         printf("k =%d ",k);

//         for(int y=low-1;y<high;y++){
//                 b[i+1][y]=b[i][y]+k;
//             }
//         printf("\n");
//     }
    
//     int max=b[0][0];
//     for(int i=0;i<4;i++)
//       {
//         for(int j=0;j<10;j++)
//         {
//             if(max<b[i][j])
//                 max=b[i][j];   
//         }
//       } 
//       printf("\n max is %d",max);


//  }