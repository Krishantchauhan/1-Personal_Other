

#include <stdio.h>

int main(void) {
    int k=1;
    for (int i = 1; i < 6; i++)
    {
        k=1;
        for (int j = 1; j < 10; j++)
        {
            if(j==6-i || j==4+i)
            {    
                if(j>=5)
                    printf("%d",i); 
                else
                    printf("%d",k); 
               k++;
            }else if(i==5 && j%2!=0)
            {
                printf("%d",k);
                k++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
	return 0;
}

