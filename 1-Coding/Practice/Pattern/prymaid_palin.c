// ************1************
// ***********2*2***********
// **********3*3*3**********
// *********4*4*4*4*********
// ********5*5*5*5*5********
// *******6*6*6*6*6*6*******
// ******7*7*7*7*7*7*7******
// *****8*8*8*8*8*8*8*8*****
// ****9*9*9*9*9*9*9*9*9****


#include <stdio.h>

int main(void)
{
    int k = 1;
    int r;
    int flag;
    scanf("%d", &r);
    flag=r+5;
    for (int i = 1; i <= r; i++)
    {
        k = 1;
        for (int j = 1; j < r*2+8; j++)
        {
            if (j >= flag-i && j <= flag-2 + i && k )
            {
                printf("%d", i);
                k=0;
            }
            else
            {
                printf("*");
                k=1;
            }
        }
        printf("\n");
    }
    return 0;
}
