#include <stdio.h>

int main()
{
    int a,sum=0;
    printf("Enter a number \n ");
    scanf("%d", &a);


    for (int i = 1; i <= a; i++)
    {
        if(sum>i)
        sum = sum + i;
        
        printf("\n");
    }
}





// for (int i = 1; i <= a; i++)
//     {
        
//         sum = sum + i;
//         sum1 = sum1+sum;
//         printf("\n");
//     }