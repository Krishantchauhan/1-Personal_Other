#include <stdio.h> 

// int main() 
// {
//   	int row = 5;
// 	int l=row,r=row;
// 	for (int i = 1; i <= row; i++) {
// 	    for (int j = 1; j <=(2*row)-1 ; j++) {
// 	        if(j>=l && j<=r)
// 	            printf("*");
// 	       else
// 	        printf(" ");
// 	    }
// 	    printf("\n");
// 	    l--;
// 	    r++;
// 	} 
// }


int main()
{
    int r;
    printf("Enter the number of rows");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++){
        int left=r + 1 - i;
        int right=r - 1 + i;
        for (int j = 1; j < 2 * r; j++){
            if (j >= left && j <=right )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}